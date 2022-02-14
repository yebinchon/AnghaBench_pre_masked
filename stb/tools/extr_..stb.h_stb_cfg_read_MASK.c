
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* data; } ;
typedef TYPE_1__ stb_cfg ;
struct TYPE_5__ {int value; int value_len; int key; } ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(stb_cfg *VAR_0, char *VAR_1, void *VAR_2, int VAR_3)
{
   int VAR_4;
   for (VAR_4=0; VAR_4 < FUNC_1(VAR_0->data); ++VAR_4) {
      if (!FUNC_3(VAR_0->data[VAR_4].key, VAR_1)) {
         int VAR_5 = FUNC_2(VAR_3, VAR_0->data[VAR_4].value_len);
         FUNC_0(VAR_2, VAR_0->data[VAR_4].value, VAR_5);
         if (VAR_5 < VAR_3)
            *((char *) VAR_2 + VAR_5) = 0;
         return 1;
      }
   }
   return 0;
}
