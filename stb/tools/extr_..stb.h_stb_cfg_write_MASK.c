
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_6__* data; } ;
typedef TYPE_1__ stb_cfg ;
struct TYPE_10__ {scalar_t__ value_len; int * value; int key; } ;
typedef TYPE_2__ stb__cfg_item ;
struct TYPE_11__ {int value_len; int value; int key; } ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_2__) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;

void FUNC_6(stb_cfg *VAR_0, char *VAR_1, void *VAR_2, int VAR_3)
{
   int VAR_4;
   for (VAR_4=0; VAR_4 < FUNC_1(VAR_0->data); ++VAR_4)
      if (!FUNC_5(VAR_0->data[VAR_4].key, VAR_1))
         break;
   if (VAR_4 == FUNC_1(VAR_0->data)) {
      stb__cfg_item VAR_5;
      VAR_5.key = FUNC_4(VAR_1, VAR_0);
      VAR_5.value = ((void*)0);
      VAR_5.value_len = 0;
      FUNC_2(VAR_0->data, VAR_5);
   }
   VAR_0->data[VAR_4].value = FUNC_3(VAR_0, VAR_3);
   VAR_0->data[VAR_4].value_len = VAR_3;
   FUNC_0(VAR_0->data[VAR_4].value, VAR_2, VAR_3);
}
