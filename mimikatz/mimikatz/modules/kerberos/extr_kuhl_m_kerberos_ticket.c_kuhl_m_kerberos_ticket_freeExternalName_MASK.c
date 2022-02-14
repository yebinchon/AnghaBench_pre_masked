
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t NameCount; int * Names; } ;
typedef TYPE_1__* PKERB_EXTERNAL_NAME ;
typedef size_t DWORD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(PKERB_EXTERNAL_NAME VAR_0)
{
 DWORD VAR_1;
 if(VAR_0)
 {
  for(VAR_1 = 0; VAR_1 < VAR_0->NameCount; VAR_1++)
   FUNC_1(&VAR_0->Names[VAR_1]);
  VAR_0 = (PKERB_EXTERNAL_NAME) FUNC_0(VAR_0);
 }
}
