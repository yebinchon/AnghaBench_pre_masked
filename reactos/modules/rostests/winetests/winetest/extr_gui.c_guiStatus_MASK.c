
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t*,int ) ;

__attribute__((used)) static int
FUNC_3 (va_list VAR_2)
{
    size_t VAR_3;
    char *VAR_4 = FUNC_2 (&VAR_3, VAR_2);

    if (VAR_3 > 128) VAR_4[129] = 0;
    FUNC_0 (VAR_1, VAR_0, VAR_4);
    FUNC_1 (VAR_4);
    return 0;
}
