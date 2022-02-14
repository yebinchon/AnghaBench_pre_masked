
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long* VAR_3 ;

unsigned long
FUNC_1(void)
{
    unsigned long VAR_4, VAR_5;




    VAR_5 = FUNC_0(VAR_1) & VAR_2;




    for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {



        if(VAR_5 == VAR_3[VAR_4])
        {
            break;
        }
    }




    return(VAR_4);
}
