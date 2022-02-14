
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t UCHAR ;


 int FUNC_0 (int *) ;
 int ** VAR_0 ;
 size_t VAR_1 ;

VOID
FUNC_1()
{
    UCHAR VAR_2;


    for ( VAR_2 = 0; VAR_2 < VAR_1; ++ VAR_2 )
    {
        if ( VAR_0[VAR_2] )
        {
            FUNC_0(VAR_0[VAR_2]);
            VAR_0[VAR_2] = ((void*)0);
        }
    }
}
