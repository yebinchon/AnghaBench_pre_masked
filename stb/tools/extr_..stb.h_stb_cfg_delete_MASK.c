
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* data; } ;
typedef TYPE_1__ stb_cfg ;
struct TYPE_6__ {int key; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(stb_cfg *VAR_0, char *VAR_1)
{
   int VAR_2;
   for (VAR_2=0; VAR_2 < FUNC_1(VAR_0->data); ++VAR_2)
      if (!FUNC_2(VAR_0->data[VAR_2].key, VAR_1)) {
         FUNC_0(VAR_0->data, VAR_2);
         return 1;
      }
   return 0;
}
