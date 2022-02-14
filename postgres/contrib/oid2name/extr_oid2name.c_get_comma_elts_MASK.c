
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int * array; } ;
typedef TYPE_1__ eary ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;

char *
FUNC_5(eary *VAR_0)
{
 char *VAR_1,
      *VAR_2;
 int VAR_3,
    VAR_4 = 0;

 if (VAR_0->num == 0)
  return FUNC_2("");





 for (VAR_3 = 0; VAR_3 < VAR_0->num; VAR_3++)
  VAR_4 += FUNC_4(VAR_0->array[VAR_3]);

 VAR_1 = (char *) FUNC_1(VAR_4 * 2 + 4 * VAR_0->num);
 VAR_2 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0->num; VAR_3++)
 {
  if (VAR_3 != 0)
   FUNC_3(VAR_2++, ",");
  FUNC_3(VAR_2++, "'");
  VAR_2 += FUNC_0(VAR_2, VAR_0->array[VAR_3], FUNC_4(VAR_0->array[VAR_3]));
  FUNC_3(VAR_2++, "'");
 }

 return VAR_1;
}
