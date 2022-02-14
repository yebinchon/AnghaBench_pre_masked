
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stage; int a; int c; int columns; int dst; int ref; } ;
typedef TYPE_1__ fz_faxd ;
typedef int fz_context ;



 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_10, fz_faxd *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;

 if (VAR_11->stage == VAR_1 || VAR_11->stage == VAR_2)
 {
  if (VAR_11->a == -1)
   VAR_11->a = 0;

  if (VAR_11->c)
   VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_5, VAR_8);
  else
   VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_6, VAR_9);

  if (VAR_12 == 135)
   FUNC_2(VAR_10, VAR_0, "uncompressed data in faxd");

  if (VAR_12 < 0)
   FUNC_2(VAR_10, VAR_0, "negative code in 2d faxd");

  if (VAR_11->a + VAR_12 > VAR_11->columns)
   FUNC_2(VAR_10, VAR_0, "overflow in 2d faxd");

  if (VAR_11->c)
   FUNC_4(VAR_11->dst, VAR_11->a, VAR_11->a + VAR_12);

  VAR_11->a += VAR_12;

  if (VAR_12 < 64)
  {
   VAR_11->c = !VAR_11->c;
   if (VAR_11->stage == VAR_1)
    VAR_11->stage = VAR_2;
   else if (VAR_11->stage == VAR_2)
    VAR_11->stage = VAR_3;
  }

  return;
 }

 VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_4, VAR_7);

 switch (VAR_12)
 {
 case 137:
  VAR_11->stage = VAR_1;
  break;

 case 136:
  VAR_13 = FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 >= VAR_11->columns)
   VAR_14 = VAR_11->columns;
  else
   VAR_14 = FUNC_0(VAR_11->ref, VAR_13, VAR_11->columns);
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_14);
  VAR_11->a = VAR_14;
  break;

 case 134:
  VAR_13 = FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 130:
  VAR_13 = 1 + FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 >= VAR_11->columns) VAR_13 = VAR_11->columns;
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 129:
  VAR_13 = 2 + FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 >= VAR_11->columns) VAR_13 = VAR_11->columns;
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 128:
  VAR_13 = 3 + FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 >= VAR_11->columns) VAR_13 = VAR_11->columns;
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 133:
  VAR_13 = -1 + FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 < 0) VAR_13 = 0;
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 132:
  VAR_13 = -2 + FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 < 0) VAR_13 = 0;
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 131:
  VAR_13 = -3 + FUNC_1(VAR_11->ref, VAR_11->a, VAR_11->columns, !VAR_11->c);
  if (VAR_13 < 0) VAR_13 = 0;
  if (VAR_11->c) FUNC_4(VAR_11->dst, VAR_11->a, VAR_13);
  VAR_11->a = VAR_13;
  VAR_11->c = !VAR_11->c;
  break;

 case 135:
  FUNC_2(VAR_10, VAR_0, "uncompressed data in faxd");

 case 138:
  FUNC_2(VAR_10, VAR_0, "invalid code in 2d faxd");

 default:
  FUNC_2(VAR_10, VAR_0, "invalid code in 2d faxd (%d)", VAR_12);
 }
}
