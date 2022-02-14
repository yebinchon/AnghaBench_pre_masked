
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ pdf_obj ;
typedef int fz_context ;
struct TYPE_13__ {int len; TYPE_1__* items; } ;
struct TYPE_12__ {int n; } ;
struct TYPE_10__ {TYPE_2__* k; } ;


 TYPE_8__* FUNC_0 (TYPE_2__*) ;
 TYPE_6__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_3, pdf_obj *VAR_4, pdf_obj *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4)->len;
 if ((VAR_4->flags & VAR_0) && VAR_6 > 0)
 {
  int VAR_7 = 0;
  int VAR_8 = VAR_6 - 1;
  pdf_obj *VAR_9 = FUNC_0(VAR_4)->items[VAR_8].k;

  if (VAR_9 == VAR_5 || (VAR_9 >= VAR_1 && FUNC_2(FUNC_1(VAR_9)->n, VAR_2[(intptr_t)VAR_5]) < 0))
  {
   return -1 - (VAR_8+1);
  }

  while (VAR_7 <= VAR_8)
  {
   int VAR_10 = (VAR_7 + VAR_8) >> 1;
   int VAR_11;

   VAR_9 = FUNC_0(VAR_4)->items[VAR_10].k;
   VAR_11 = (VAR_9 < VAR_1 ? (char *)VAR_5-(char *)VAR_9 : -FUNC_2(FUNC_1(VAR_9)->n, VAR_2[(intptr_t)VAR_5]));
   if (VAR_11 < 0)
    VAR_8 = VAR_10 - 1;
   else if (VAR_11 > 0)
    VAR_7 = VAR_10 + 1;
   else
    return VAR_10;
  }
  return -1 - VAR_7;
 }
 else
 {
  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
  {
   pdf_obj *VAR_13 = FUNC_0(VAR_4)->items[VAR_12].k;
   if (VAR_13 < VAR_1)
   {
    if (VAR_13 == VAR_5)
     return VAR_12;
   }
   else
   {
    if (!FUNC_2(VAR_2[(intptr_t)VAR_5], FUNC_1(VAR_13)->n))
     return VAR_12;
   }
  }

  return -1 - VAR_6;
 }
}
