
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stb_int16 ;
struct TYPE_6__ {TYPE_4__* data; scalar_t__ f; } ;
typedef TYPE_1__ stb_cfg ;
struct TYPE_7__ {int* key; int value_len; int* value; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,int,int,scalar_t__) ;
 int* VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int*) ;

void FUNC_6(stb_cfg *VAR_1)
{
   if (VAR_1->f) {
      int VAR_2;

      FUNC_1(VAR_0, 12, 1, VAR_1->f);
      for (VAR_2=0; VAR_2 < FUNC_3(VAR_1->data); ++VAR_2) {
         stb_int16 VAR_3 = (stb_int16) FUNC_5(VAR_1->data[VAR_2].key)+1;
         FUNC_1(&VAR_3, 2, 1, VAR_1->f);
         FUNC_1(VAR_1->data[VAR_2].key, VAR_3, 1, VAR_1->f);
         FUNC_1(&VAR_1->data[VAR_2].value_len, 4, 1, VAR_1->f);
         FUNC_1(VAR_1->data[VAR_2].value, VAR_1->data[VAR_2].value_len, 1, VAR_1->f);
      }
      FUNC_0(VAR_1->f);
   }
   FUNC_2(VAR_1->data);
   FUNC_4(VAR_1);
}
