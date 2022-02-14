
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsBool ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static
cmsBool FUNC_2(const char *VAR_3)
{
    char VAR_4[4];

    if(VAR_3 == ((void*)0))
        return VAR_1;
    if (VAR_3[0] == 0)
        return VAR_1;

    FUNC_1(VAR_4, VAR_3, 3);
    VAR_4[3] = 0;

    if(VAR_4[0] == VAR_0)
        return VAR_2;





    return VAR_1;
}
