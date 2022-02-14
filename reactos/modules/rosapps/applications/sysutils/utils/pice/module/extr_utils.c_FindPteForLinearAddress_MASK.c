
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PULONG ;
typedef scalar_t__ PEPROCESS ;
typedef int BOOLEAN ;


 int* FUNC_0 (int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

PULONG FUNC_5(ULONG VAR_4)
{
 PULONG VAR_5;
 PULONG VAR_6;
 BOOLEAN VAR_7 = VAR_0;
 PEPROCESS VAR_8 = FUNC_3();

    FUNC_2();

 VAR_4 &= (~(VAR_3-1));

 if(VAR_8)
 {
  VAR_5 = FUNC_0(VAR_4);
        if(VAR_5 && ((*VAR_5)&VAR_2))
        {

            if(!((*VAR_5)&VAR_1))
   {
    VAR_6 = FUNC_1(VAR_4);
    if(VAR_6)
    {
                    FUNC_4();
     return VAR_6;
    }
   }

   else
   {
                FUNC_4();
    return ((void*)0);
   }
  }
 }

    FUNC_4();
 return ((void*)0);
}
