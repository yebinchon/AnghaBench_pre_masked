
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; scalar_t__ pos; } ;
typedef TYPE_1__ WordEntry ;
struct TYPE_8__ {int size; } ;
typedef TYPE_2__* TSVector ;


 TYPE_1__* FUNC_0 (TYPE_2__* const) ;
 scalar_t__ FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (char*,int,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_3(const TSVector VAR_0, char *VAR_1, int VAR_2)
{
 WordEntry *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0,
    VAR_5 = VAR_0->size,
    VAR_6,
    VAR_7;

 while (VAR_4 < VAR_5)
 {
  VAR_6 = (VAR_4 + VAR_5) / 2;

  VAR_7 = FUNC_2(VAR_1, VAR_2,
         FUNC_1(VAR_0) + VAR_3[VAR_6].pos,
         VAR_3[VAR_6].len,
         0);

  if (VAR_7 < 0)
   VAR_5 = VAR_6;
  else if (VAR_7 > 0)
   VAR_4 = VAR_6 + 1;
  else
   return VAR_6;
 }

 return -1;
}
