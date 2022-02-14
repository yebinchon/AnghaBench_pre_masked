
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0 (
    char VAR_2,
    UINT32 VAR_3)
{

    if (!((VAR_2 >= 'A' && VAR_2 <= 'Z') ||
          (VAR_2 >= '0' && VAR_2 <= '9') ||
          (VAR_2 == '_')))
    {


        if (VAR_2 == '!' && VAR_3 == 3)
        {
            return (VAR_1);
        }

        return (VAR_0);
    }

    return (VAR_1);
}
