
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sock_t ;
typedef scalar_t__ pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 int FUNC_4 (char const*,char const*,char const*,...) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,char*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int,char*,char*,char*,char const*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_4, const char *VAR_5,
                            const char *VAR_6, const char *VAR_7[],
                            const char *VAR_8, sock_t VAR_9) {
  char VAR_10[500];
  pid_t VAR_11 = FUNC_5();
  (void) VAR_6;

  if (VAR_11 == 0) {




    int VAR_12 = FUNC_1(VAR_8);
    (void) VAR_12;
    (void) FUNC_3(VAR_9, 0);
    (void) FUNC_3(VAR_9, 1);
    FUNC_2(VAR_9);







    FUNC_7(VAR_1, VAR_2);

    if (VAR_4 == ((void*)0)) {
      FUNC_4(VAR_5, VAR_5, (char *) 0, VAR_7);
    } else {
      FUNC_4(VAR_4, VAR_4, VAR_5, (char *) 0, VAR_7);
    }
    FUNC_8(VAR_10, sizeof(VAR_10),
             "Status: 500\r\n\r\n"
             "500 Server Error: %s%s%s: %s",
             VAR_4 == ((void*)0) ? "" : VAR_4, VAR_4 == ((void*)0) ? "" : " ", VAR_5,
             FUNC_9(VAR_3));
    FUNC_6(1, VAR_10, FUNC_10(VAR_10), 0);
    FUNC_0(VAR_0);
  }

  return (VAR_11 != 0);
}
