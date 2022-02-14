
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_6__ {int * name; } ;
typedef TYPE_1__* PKEYBOARD_LAYOUT ;
typedef int LPSTR ;
typedef int CHAR ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_1 ;

PKEYBOARD_LAYOUT FUNC_2(LPSTR VAR_2)
{
  CHAR VAR_3[256];
  ULONG VAR_4;

 for(VAR_4=0;VAR_1[VAR_4].name != ((void*)0);VAR_4++)
   {
     if(FUNC_1(VAR_1[VAR_4].name, VAR_2) == 0)
       {
      VAR_0 = &VAR_1[VAR_4];
    return VAR_0;
       }
   }
  return FUNC_0();
}
