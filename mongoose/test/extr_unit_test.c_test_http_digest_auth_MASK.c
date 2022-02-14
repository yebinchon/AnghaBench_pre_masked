
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;
typedef int nonce ;
typedef int auth_hdr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*,char*,char*,char*) ;
 int FUNC_6 (struct mg_str*,char*,char*,int) ;
 struct mg_str FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,unsigned long) ;
 int FUNC_9 (char*) ;
 unsigned long FUNC_10 (char*,int *,int) ;

__attribute__((used)) static const char *FUNC_11(void) {
  char VAR_1[VAR_0], VAR_2[200];
  char VAR_3[40];
  struct mg_str VAR_4;


  FUNC_3(VAR_1, "%s", "GET /data/auth/a.txt?a=b HTTP/1.0\r\n\r\n");
  FUNC_2(VAR_1, "HTTP/1.1 401");
  VAR_4 = FUNC_7(VAR_1);
  FUNC_0(FUNC_6(&VAR_4, "nonce", VAR_3, sizeof(VAR_3)), 0);
  VAR_1[0] = '\0';

  FUNC_3(VAR_1, "%s", "GET /secret HTTP/1.0\r\n\r\n");
  FUNC_2(VAR_1, "HTTP/1.1 401");
  FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                    "/data/auth/a.txt?a=b", "foo.com", "joe",
                                    "doe", VAR_3);
  FUNC_3(VAR_1, "GET /data/auth/a.txt?a=b HTTP/1.0\r\n%s\r\n\r\n", VAR_2);
  FUNC_2(VAR_1, "HTTP/1.1 200");
  FUNC_1(VAR_1 + FUNC_9(VAR_1) - 7, "\r\n\r\nhi\n");
  FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                    "/secret", "foo.com", "joe", "doe", VAR_3);
  FUNC_3(VAR_1, "GET /secret HTTP/1.0\r\n%s\r\n\r\n", VAR_2);
  FUNC_2(VAR_1, "HTTP/1.1 200");
  FUNC_1(VAR_1 + FUNC_9(VAR_1) - 7, "Secret!");


  FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                    "/data/auth/a.txt?a=b", "foo.com", "joe",
                                    "doe", VAR_3);
  FUNC_4(VAR_1, "data/auth/non-existing-passwords.txt",
              "GET /data/auth/a.txt?a=b HTTP/1.0\r\n%s\r\n\r\n", VAR_2);
  FUNC_2(VAR_1, "HTTP/1.1 200");
  FUNC_1(VAR_1 + FUNC_9(VAR_1) - 7, "\r\n\r\nhi\n");
  FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                    "/secret", "foo.com", "joe", "doe", VAR_3);
  FUNC_4(VAR_1, "data/auth/non-existing-passwords.txt",
              "GET /secret HTTP/1.0\r\n%s\r\n\r\n", VAR_2);
  FUNC_2(VAR_1, "HTTP/1.1 401");


  {




    unsigned long VAR_5 = FUNC_10(VAR_3, ((void*)0), 16);
    FUNC_8(VAR_3, "%lx", VAR_5 + 10);

    FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                      "/data/auth/a.txt?a=b", "foo.com", "joe",
                                      "doe", VAR_3);
    FUNC_3(VAR_1, "GET /data/auth/a.txt?a=b HTTP/1.0\r\n%s\r\n\r\n",
               VAR_2);
    FUNC_2(VAR_1, "HTTP/1.1 401");

    FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                      "/secret", "foo.com", "joe", "doe",
                                      VAR_3);

    FUNC_3(VAR_1, "GET /secret HTTP/1.0\r\n%s\r\n\r\n", VAR_2);
    FUNC_2(VAR_1, "HTTP/1.1 401");


    FUNC_8(VAR_3, "%lx", VAR_5 - 60 * 60);

    FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                      "/data/auth/a.txt?a=b", "foo.com", "joe",
                                      "doe", VAR_3);
    FUNC_3(VAR_1, "GET /data/auth/a.txt?a=b HTTP/1.0\r\n%s\r\n\r\n",
               VAR_2);
    FUNC_2(VAR_1, "HTTP/1.1 401");


    VAR_4 = FUNC_7(VAR_1);
    FUNC_0(FUNC_6(&VAR_4, "nonce", VAR_3, sizeof(VAR_3)), 0);
  }


  FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                    "/data/auth/p%61sswords%2etxt", "foo.com",
                                    "joe", "doe", VAR_3);
  FUNC_3(VAR_1,
             "GET /data/auth/p%%61sswords%%2etxt HTTP/1.0\r\n"
             "%s\r\n\r\n",
             VAR_2);
  FUNC_2(VAR_1, "HTTP/1.1 404");

  FUNC_5(VAR_2, sizeof(VAR_2), "GET",
                                    "/data/auth/Passwords.txt", "foo.com",
                                    "joe", "doe", VAR_3);
  FUNC_3(VAR_1,
             "GET /data/auth/Passwords.txt HTTP/1.0\r\n"
             "%s\r\n\r\n",
             VAR_2);
  FUNC_2(VAR_1, "HTTP/1.1 404");

  return ((void*)0);
}
