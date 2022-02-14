
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subid; } ;
typedef scalar_t__ SubTransactionId ;
typedef TYPE_1__ LargeObjectDesc ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(bool VAR_3, SubTransactionId VAR_4,
      SubTransactionId VAR_5)
{
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
 {
  LargeObjectDesc *VAR_7 = VAR_0[VAR_6];

  if (VAR_7 != ((void*)0) && VAR_7->subid == VAR_4)
  {
   if (VAR_3)
    VAR_7->subid = VAR_5;
   else
   {




    FUNC_0(VAR_6);
    FUNC_1(VAR_7);
   }
  }
 }
}
