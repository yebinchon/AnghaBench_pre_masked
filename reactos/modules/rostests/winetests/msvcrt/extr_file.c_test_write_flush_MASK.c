
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int iobuf ;
struct TYPE_6__ {int _bufsiz; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_1[1024];
    char *VAR_2;
    FILE *VAR_3;

    VAR_2 = FUNC_0(".","wne");
    VAR_3 = FUNC_2(VAR_2, "wb+");
    FUNC_4(VAR_3 != ((void*)0), "unable to create test file\n");
    VAR_1[0] = 0;
    FUNC_4(VAR_3->_bufsiz == 4096, "incorrect default buffer size: %d\n", VAR_3->_bufsiz);
    FUNC_6(VAR_3, VAR_3->_bufsiz);
    FUNC_5(VAR_3, VAR_1, VAR_0, sizeof(VAR_1));
    FUNC_6(VAR_3, sizeof(VAR_1));
    FUNC_1(VAR_3);
    FUNC_7(VAR_2);
    FUNC_3(VAR_2);
}
