
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static enum test_return FUNC_7(void) {
    char VAR_4[1024];

    FUNC_1();
    VAR_1 = FUNC_2("127.0.0.1", VAR_3, 0, VAR_2);
    FUNC_0(VAR_1);

    FUNC_4("stats cachedump 1 0 0\r\n");

    FUNC_3(VAR_4, sizeof(VAR_4));
    FUNC_0(FUNC_6(VAR_4, "END", FUNC_5("END")) == 0);

    FUNC_4("stats cachedump 200 0 0\r\n");
    FUNC_3(VAR_4, sizeof(VAR_4));
    FUNC_0(FUNC_6(VAR_4, "CLIENT_ERROR", FUNC_5("CLIENT_ERROR")) == 0);

    FUNC_1();
    VAR_1 = FUNC_2("127.0.0.1", VAR_3, 0, VAR_2);
    FUNC_0(VAR_1);
    return VAR_0;
}
