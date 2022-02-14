
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint32_t ;
typedef size_t int_fast8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__ const) ;
 size_t VAR_0 ;
 scalar_t__** VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_2(uint32_t VAR_2)
{
    int_fast8_t VAR_3, VAR_4;
    const uint32_t (*VAR_5)[2];




    FUNC_0(FUNC_1(VAR_2));

    VAR_5 = VAR_1;
    VAR_4 = VAR_0;





    for(VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {



        if(VAR_5[VAR_3][0] == VAR_2)
        {



            return(VAR_5[VAR_3][1]);
        }
    }




    return(0);
}
