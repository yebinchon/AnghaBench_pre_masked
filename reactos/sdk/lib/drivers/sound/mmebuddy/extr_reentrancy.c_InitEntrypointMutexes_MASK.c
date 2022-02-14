
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UCHAR ;
typedef int MMRESULT ;


 int FUNC_0 () ;
 int * FUNC_1 (int *,int ,int *) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int ) ;

MMRESULT
FUNC_4()
{
    UCHAR VAR_4;
    MMRESULT VAR_5 = VAR_2;


    for ( VAR_4 = 0; VAR_4 < VAR_3; ++ VAR_4 )
    {
        VAR_0[VAR_4] = ((void*)0);
    }


    for ( VAR_4 = 0; VAR_4 < VAR_3; ++ VAR_4 )
    {
        VAR_0[VAR_4] = FUNC_1(((void*)0), VAR_1, ((void*)0));

        if ( ! VAR_0[VAR_4] )
        {
            VAR_5 = FUNC_3(FUNC_2());


            FUNC_0();
            break;
        }
    }

    return VAR_5;
}
