
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int ** VAR_0 ;
 size_t VAR_1 ;

void FUNC_4()
{
    ULONG VAR_2;

 FUNC_1();

    if(VAR_1)
 {
        for(VAR_2=0;VAR_2<VAR_1;VAR_2++)
        {
      FUNC_0(*(0,"freeing [%u] %x\n",VAR_2,VAR_0[VAR_2]));
      FUNC_3(VAR_0[VAR_2]);
            VAR_0[VAR_2] = ((void*)0);
        }
        VAR_1 = 0;
 }
    FUNC_2();
}
