
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_18__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_12__ ;


struct TYPE_26__ {scalar_t__ kind; } ;
typedef TYPE_3__ pdf_obj ;
typedef int fz_context ;
struct TYPE_28__ {int num; int gen; } ;
struct TYPE_27__ {int len; int buf; } ;
struct TYPE_25__ {TYPE_3__* v; TYPE_3__* k; } ;
struct TYPE_24__ {int i; int f; } ;
struct TYPE_23__ {int len; TYPE_3__** items; } ;
struct TYPE_22__ {int len; TYPE_2__* items; } ;
struct TYPE_21__ {int n; } ;
struct TYPE_20__ {TYPE_1__ u; } ;


 TYPE_18__* FUNC_0 (TYPE_3__*) ;
 TYPE_16__* FUNC_1 (TYPE_3__*) ;
 TYPE_14__* FUNC_2 (TYPE_3__*) ;
 TYPE_12__* FUNC_3 (TYPE_3__*) ;


 TYPE_3__* VAR_0 ;


 TYPE_3__* VAR_1 ;

 int * VAR_2 ;


 TYPE_8__* FUNC_4 (TYPE_3__*) ;
 TYPE_6__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(fz_context *VAR_3, pdf_obj *VAR_4, pdf_obj *VAR_5)
{
 int VAR_6;

 if (VAR_4 == VAR_5)
  return 0;


 if (VAR_4 <= VAR_0 || VAR_5 <= VAR_0)
  return 1;


 if (VAR_4 < VAR_1)
 {
  if (VAR_5 < VAR_1)
   return VAR_4 != VAR_5;
  if (VAR_5->kind != 130)
   return 1;
  return FUNC_7(VAR_2[(intptr_t)VAR_4], FUNC_2(VAR_5)->n);
 }


 if (VAR_5 < VAR_1)
 {
  if (VAR_4->kind != 130)
   return 1;
  return FUNC_7(FUNC_2(VAR_4)->n, VAR_2[(intptr_t)VAR_5]);
 }


 if (VAR_4->kind != VAR_5->kind)
  return 1;

 switch (VAR_4->kind)
 {
 case 131:
  return FUNC_3(VAR_4)->u.i - FUNC_3(VAR_5)->u.i;

 case 129:
  if (FUNC_3(VAR_4)->u.f < FUNC_3(VAR_5)->u.f)
   return -1;
  if (FUNC_3(VAR_4)->u.f > FUNC_3(VAR_5)->u.f)
   return 1;
  return 0;

 case 128:
  if (FUNC_5(VAR_4)->len < FUNC_5(VAR_5)->len)
  {
   if (FUNC_6(FUNC_5(VAR_4)->buf, FUNC_5(VAR_5)->buf, FUNC_5(VAR_4)->len) <= 0)
    return -1;
   return 1;
  }
  if (FUNC_5(VAR_4)->len > FUNC_5(VAR_5)->len)
  {
   if (FUNC_6(FUNC_5(VAR_4)->buf, FUNC_5(VAR_5)->buf, FUNC_5(VAR_5)->len) >= 0)
    return 1;
   return -1;
  }
  return FUNC_6(FUNC_5(VAR_4)->buf, FUNC_5(VAR_5)->buf, FUNC_5(VAR_4)->len);

 case 130:
  return FUNC_7(FUNC_2(VAR_4)->n, FUNC_2(VAR_5)->n);

 case 132:
  if (FUNC_4(VAR_4)->num == FUNC_4(VAR_5)->num)
   return FUNC_4(VAR_4)->gen - FUNC_4(VAR_5)->gen;
  return FUNC_4(VAR_4)->num - FUNC_4(VAR_5)->num;

 case 134:
  if (FUNC_0(VAR_4)->len != FUNC_0(VAR_5)->len)
   return FUNC_0(VAR_4)->len - FUNC_0(VAR_5)->len;
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4)->len; VAR_6++)
   if (FUNC_8(VAR_3, FUNC_0(VAR_4)->items[VAR_6], FUNC_0(VAR_5)->items[VAR_6]))
    return 1;
  return 0;

 case 133:
  if (FUNC_1(VAR_4)->len != FUNC_1(VAR_5)->len)
   return FUNC_1(VAR_4)->len - FUNC_1(VAR_5)->len;
  for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_4)->len; VAR_6++)
  {
   if (FUNC_8(VAR_3, FUNC_1(VAR_4)->items[VAR_6].k, FUNC_1(VAR_5)->items[VAR_6].k))
    return 1;
   if (FUNC_8(VAR_3, FUNC_1(VAR_4)->items[VAR_6].v, FUNC_1(VAR_5)->items[VAR_6].v))
    return 1;
  }
  return 0;
 }
 return 1;
}
