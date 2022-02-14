
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int NPY_TIME_T ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tm*,int *) ;
 struct tm* FUNC_2 (int *) ;
 int * FUNC_3 (int *,struct tm*) ;
 scalar_t__ FUNC_4 (struct tm*,int *) ;
 int FUNC_5 (struct tm*,struct tm*,int) ;

__attribute__((used)) static int
FUNC_6(NPY_TIME_T *VAR_1, struct tm *VAR_2)
{
    char *VAR_3 = "<unknown>";
    if (FUNC_3(VAR_1, VAR_2) == ((void*)0)) {
        VAR_3 = "localtime_r";
        goto fail;
    }


    return 0;

fail:
    FUNC_0(VAR_0, "Failed to use '%s' to convert "
                                "to a local time", VAR_3);
    return -1;
}
