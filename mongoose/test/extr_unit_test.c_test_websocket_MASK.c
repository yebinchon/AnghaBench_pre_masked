
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; int len; } ;
struct mg_mgr {int dummy; } ;
struct mg_connection {struct mbuf* user_data; } ;
struct mbuf {scalar_t__ len; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct mbuf*,char*,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int) ;
 struct mg_connection* FUNC_6 (struct mg_mgr*,char const*,int ) ;
 struct mg_connection* FUNC_7 (struct mg_mgr*,char const*,int ) ;
 int FUNC_8 (struct mg_mgr*) ;
 int FUNC_9 (struct mg_mgr*,int *) ;
 int FUNC_10 (struct mg_connection*,int,char*,int) ;
 int FUNC_11 (struct mg_connection*,int,struct mg_str*,int) ;
 int FUNC_12 (struct mg_connection*,char*,int *) ;
 int FUNC_13 (struct mg_connection*) ;
 int FUNC_14 (struct mg_mgr*,int,int ,scalar_t__*,void*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_15 (char const*) ;

__attribute__((used)) static const char *FUNC_16(void) {
  struct mg_mgr VAR_10;
  struct mg_connection *VAR_11;
  const char *VAR_12 = "127.0.0.1:7778";
  struct mbuf VAR_13;
  FUNC_5(&VAR_13, 100);

  FUNC_9(&VAR_10, ((void*)0));

  FUNC_0((VAR_11 = FUNC_6(&VAR_10, VAR_12, VAR_8)) != ((void*)0));
  FUNC_13(VAR_11);




  VAR_13.len = 0;
  VAR_9 = 0;
  FUNC_0((VAR_11 = FUNC_7(&VAR_10, VAR_12, VAR_7)) != ((void*)0));
  FUNC_13(VAR_11);
  VAR_11->user_data = &VAR_13;
  FUNC_12(VAR_11, "/ws", ((void*)0));
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 1);
  {

    struct mg_str VAR_14[2];
    VAR_14[0].p = "h";
    VAR_14[0].len = 1;
    VAR_14[1].p = "i";
    VAR_14[1].len = 1;
    FUNC_11(VAR_11, VAR_4, VAR_14, 2);
  }
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_13.len, (void *) 0);
  FUNC_3(&VAR_13, "\0", 1);

  FUNC_2(VAR_13.buf, "81:[81:{hi}]");




  VAR_13.len = 0;
  VAR_9 = 0;
  FUNC_0((VAR_11 = FUNC_7(&VAR_10, VAR_12, VAR_7)) != ((void*)0));
  FUNC_13(VAR_11);
  VAR_11->user_data = &VAR_13;
  FUNC_12(VAR_11, "/ws", ((void*)0));
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 1);
  FUNC_1(VAR_9, 1);

  FUNC_10(VAR_11, VAR_4 | VAR_0, "hall",
                          4);
  FUNC_10(VAR_11, VAR_2 | VAR_0, "--",
                          2);


  FUNC_14(&VAR_10, 0.5, VAR_6, &VAR_13.len, (void *) 0);
  FUNC_1(VAR_13.len, 0);

  FUNC_10(VAR_11, VAR_2, "loo", 3);

  FUNC_14(&VAR_10, 1, VAR_6, &VAR_13.len, (void *) 0);
  FUNC_3(&VAR_13, "\0", 1);

  FUNC_2(VAR_13.buf, "81:[81:{hall--loo}]");




  VAR_13.len = 0;
  VAR_9 = 0;
  FUNC_0((VAR_11 = FUNC_7(&VAR_10, VAR_12, VAR_7)) != ((void*)0));
  FUNC_13(VAR_11);
  VAR_11->user_data = &VAR_13;
  FUNC_12(VAR_11, "/ws", ((void*)0));
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 1);
  FUNC_1(VAR_9, 1);

  FUNC_10(VAR_11, VAR_3, "myping", 6);

  {




    const char *VAR_15 = "CONTROL:8a:[myping]81:[CONTROL:89:{myping}]";
    FUNC_14(&VAR_10, 1, VAR_5, &VAR_13.len, (void *) FUNC_15(VAR_15));
    FUNC_3(&VAR_13, "\0", 1);
    FUNC_2(VAR_13.buf, VAR_15);
  }




  VAR_13.len = 0;
  VAR_9 = 0;
  FUNC_0((VAR_11 = FUNC_7(&VAR_10, VAR_12, VAR_7)) != ((void*)0));
  FUNC_13(VAR_11);
  VAR_11->user_data = &VAR_13;
  FUNC_12(VAR_11, "/ws", ((void*)0));
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 1);
  FUNC_1(VAR_9, 1);

  FUNC_10(VAR_11, VAR_4 | VAR_0, "abc", 3);
  FUNC_10(VAR_11, VAR_2 | VAR_0, "def",
                          3);

  FUNC_10(VAR_11, VAR_3, "0123", 4);

  FUNC_10(VAR_11, VAR_2, "ghi", 3);

  {





    const char *VAR_16 =
        "CONTROL:8a:[0123]81:[CONTROL:89:{0123}]81:[81:{abcdefghi}]";
    FUNC_14(&VAR_10, 1, VAR_5, &VAR_13.len, (void *) FUNC_15(VAR_16));
    FUNC_3(&VAR_13, "\0", 1);
    FUNC_2(VAR_13.buf, VAR_16);
  }




  VAR_13.len = 0;
  VAR_9 = 0;
  FUNC_0((VAR_11 = FUNC_7(&VAR_10, VAR_12, VAR_7)) != ((void*)0));
  FUNC_13(VAR_11);
  VAR_11->user_data = &VAR_13;
  FUNC_12(VAR_11, "/ws", ((void*)0));
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 1);
  FUNC_1(VAR_9, 1);


  FUNC_10(VAR_11, VAR_4 | VAR_0, "abc", 3);
  FUNC_10(VAR_11, VAR_2 | VAR_0, "def",
                          3);


  FUNC_10(VAR_11, VAR_4, "ghi", 3);


  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 0);
  FUNC_1(VAR_9, 0);


  FUNC_3(&VAR_13, "\0", 1);
  FUNC_2(
      VAR_13.buf,
      "CONTROL:88:[non-continuation in the middle of a fragmented message]");




  VAR_13.len = 0;
  VAR_9 = 0;
  FUNC_0((VAR_11 = FUNC_7(&VAR_10, VAR_12, VAR_7)) != ((void*)0));
  FUNC_13(VAR_11);
  VAR_11->user_data = &VAR_13;
  FUNC_12(VAR_11, "/ws", ((void*)0));
  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 1);
  FUNC_1(VAR_9, 1);


  FUNC_10(VAR_11, VAR_1, "bye", 3);


  FUNC_14(&VAR_10, 1, VAR_6, &VAR_9, (void *) 0);
  FUNC_1(VAR_9, 0);







  FUNC_8(&VAR_10);
  FUNC_4(&VAR_13);

  return ((void*)0);
}
