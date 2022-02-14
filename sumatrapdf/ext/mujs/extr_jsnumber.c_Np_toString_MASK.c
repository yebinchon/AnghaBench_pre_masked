
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int js_State ;
struct TYPE_7__ {double number; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ js_Object ;
struct TYPE_9__ {char* s; } ;
typedef TYPE_3__ js_Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 char* FUNC_2 (int *,char*,double) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,TYPE_3__**,char) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 TYPE_2__* FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 double FUNC_14 (int,int) ;

__attribute__((used)) static void FUNC_15(js_State *VAR_1)
{
 char VAR_2[100];
 js_Object *VAR_3 = FUNC_11(VAR_1, 0);
 int VAR_4 = FUNC_5(VAR_1, 1) ? 10 : FUNC_10(VAR_1, 1);
 if (VAR_3->type != VAR_0)
  FUNC_13(VAR_1, "not a number");
 if (VAR_4 == 10) {
  FUNC_6(VAR_1, FUNC_2(VAR_1, VAR_2, VAR_3->u.number));
  return;
 }
 if (VAR_4 < 2 || VAR_4 > 36)
  FUNC_8(VAR_1, "invalid radix");


 {
  static const char VAR_5[] = "0123456789abcdefghijklmnopqrstuvwxyz";
  double VAR_6 = VAR_3->u.number;
  int VAR_7 = VAR_3->u.number < 0;
  js_Buffer *VAR_8 = ((void*)0);
  uint64_t VAR_9, VAR_10 = ((uint64_t)1<<52);

  int VAR_11, VAR_12, VAR_13;

  if (VAR_6 == 0) { FUNC_6(VAR_1, "0"); return; }
  if (FUNC_1(VAR_6)) { FUNC_6(VAR_1, "NaN"); return; }
  if (FUNC_0(VAR_6)) { FUNC_6(VAR_1, VAR_7 ? "-Infinity" : "Infinity"); return; }

  if (VAR_7)
   VAR_6 = -VAR_6;


  VAR_12 = 0;
  while (VAR_6 * FUNC_14(VAR_4, VAR_12) > VAR_10)
   --VAR_12;
  while (VAR_6 * FUNC_14(VAR_4, VAR_12+1) < VAR_10)
   ++VAR_12;
  VAR_9 = VAR_6 * FUNC_14(VAR_4, VAR_12) + 0.5;


  while (VAR_9 > 0 && (VAR_9 % VAR_4) == 0) {
   VAR_9 /= VAR_4;
   --VAR_12;
  }


  VAR_11 = 0;
  while (VAR_9 > 0) {
   VAR_2[VAR_11++] = VAR_5[VAR_9 % VAR_4];
   VAR_9 /= VAR_4;
  }
  VAR_13 = VAR_11 - VAR_12;

  if (FUNC_12(VAR_1)) {
   FUNC_4(VAR_1, VAR_8);
   FUNC_9(VAR_1);
  }

  if (VAR_7)
   FUNC_7(VAR_1, &VAR_8, '-');

  if (VAR_13 <= 0) {
   FUNC_7(VAR_1, &VAR_8, '0');
   FUNC_7(VAR_1, &VAR_8, '.');
   while (VAR_13++ < 0)
    FUNC_7(VAR_1, &VAR_8, '0');
   while (VAR_11-- > 0)
    FUNC_7(VAR_1, &VAR_8, VAR_2[VAR_11]);
  } else {
   while (VAR_11-- > 0) {
    FUNC_7(VAR_1, &VAR_8, VAR_2[VAR_11]);
    if (--VAR_13 == 0 && VAR_11 > 0)
     FUNC_7(VAR_1, &VAR_8, '.');
   }
   while (VAR_13-- > 0)
    FUNC_7(VAR_1, &VAR_8, '0');
  }

  FUNC_7(VAR_1, &VAR_8, 0);
  FUNC_6(VAR_1, VAR_8->s);

  FUNC_3(VAR_1);
  FUNC_4(VAR_1, VAR_8);
 }
}
