
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4 (va_list VAR_3)
{
    char *VAR_4 = FUNC_3 (((void*)0), VAR_3);

    VAR_0++;
    FUNC_1 (VAR_4, VAR_2);
    FUNC_0 (VAR_2, " (%d of %d)\n", VAR_0, VAR_1);
    FUNC_2 (VAR_4);
    return 0;
}
