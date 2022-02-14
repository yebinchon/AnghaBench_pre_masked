
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_ulong ;
typedef int zend_string ;
typedef int smart_string ;
typedef int kbuf ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*,int,char*,long) ;

int FUNC_4(smart_string *VAR_0, zend_string *VAR_1, zend_ulong VAR_2)
{
    char *VAR_3, VAR_4[128];
    int VAR_5;

    if (VAR_1) {
        VAR_5 = FUNC_0(VAR_1);
        VAR_3 = FUNC_1(VAR_1);
    } else {
        VAR_5 = FUNC_3(VAR_4, sizeof(VAR_4), "%ld", (long)VAR_2);
        VAR_3 = (char*)VAR_4;
    }

    return FUNC_2(VAR_0, VAR_3, VAR_5);
}
