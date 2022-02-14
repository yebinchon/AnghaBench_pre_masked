
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_12__ {int flags; int prog; scalar_t__ last; } ;
typedef TYPE_2__ js_Regexp ;
struct TYPE_13__ {char* s; } ;
typedef TYPE_3__ js_Buffer ;
struct TYPE_14__ {int nsub; TYPE_1__* sub; } ;
struct TYPE_11__ {char* sp; char const* ep; } ;
typedef TYPE_4__ Resub ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,char const*,TYPE_4__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char const*,char const*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_3__**,char const) ;
 int FUNC_13 (int *,TYPE_3__**,char const*,char const*) ;
 int FUNC_14 (int *,TYPE_3__**,char const*) ;
 int FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (int *,int) ;
 char* FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(js_State *VAR_2)
{
 js_Regexp *VAR_3;
 const char *VAR_4, *VAR_5, *VAR_6;
 js_Buffer *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;
 Resub VAR_10;

 VAR_4 = FUNC_0(VAR_2, 0);
 VAR_3 = FUNC_16(VAR_2, 1);

 if (FUNC_3(VAR_2, VAR_3->prog, VAR_4, &VAR_10, 0)) {
  FUNC_2(VAR_2, 0);
  return;
 }

 VAR_3->last = 0;

loop:
 VAR_5 = VAR_10.sub[0].sp;
 VAR_8 = VAR_10.sub[0].ep - VAR_10.sub[0].sp;

 if (FUNC_6(VAR_2, 2)) {
  FUNC_2(VAR_2, 2);
  FUNC_11(VAR_2);
  for (VAR_9 = 0; VAR_10.sub[VAR_9].sp; ++VAR_9)
   FUNC_8(VAR_2, VAR_10.sub[VAR_9].sp, VAR_10.sub[VAR_9].ep - VAR_10.sub[VAR_9].sp);
  FUNC_9(VAR_2, VAR_5 - VAR_4);
  FUNC_2(VAR_2, 0);
  FUNC_1(VAR_2, 2 + VAR_9);
  VAR_6 = FUNC_17(VAR_2, -1);
  FUNC_13(VAR_2, &VAR_7, VAR_4, VAR_5);
  FUNC_14(VAR_2, &VAR_7, VAR_6);
  FUNC_7(VAR_2, 1);
 } else {
  VAR_6 = FUNC_17(VAR_2, 2);
  FUNC_13(VAR_2, &VAR_7, VAR_4, VAR_5);
  while (*VAR_6) {
   if (*VAR_6 == '$') {
    switch (*(++VAR_6)) {
    case 0: --VAR_6;

    case '$': FUNC_12(VAR_2, &VAR_7, '$'); break;
    case '`': FUNC_13(VAR_2, &VAR_7, VAR_4, VAR_5); break;
    case '\'': FUNC_14(VAR_2, &VAR_7, VAR_5 + VAR_8); break;
    case '&':
     FUNC_13(VAR_2, &VAR_7, VAR_5, VAR_5 + VAR_8);
     break;
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
     VAR_9 = *VAR_6 - '0';
     if (VAR_6[1] >= '0' && VAR_6[1] <= '9')
      VAR_9 = VAR_9 * 10 + *(++VAR_6) - '0';
     if (VAR_9 > 0 && VAR_9 < VAR_10.nsub) {
      FUNC_13(VAR_2, &VAR_7, VAR_10.sub[VAR_9].sp, VAR_10.sub[VAR_9].ep);
     } else {
      FUNC_12(VAR_2, &VAR_7, '$');
      if (VAR_9 > 10) {
       FUNC_12(VAR_2, &VAR_7, '0' + VAR_9 / 10);
       FUNC_12(VAR_2, &VAR_7, '0' + VAR_9 % 10);
      } else {
       FUNC_12(VAR_2, &VAR_7, '0' + VAR_9);
      }
     }
     break;
    default:
     FUNC_12(VAR_2, &VAR_7, '$');
     FUNC_12(VAR_2, &VAR_7, *VAR_6);
     break;
    }
    ++VAR_6;
   } else {
    FUNC_12(VAR_2, &VAR_7, *VAR_6++);
   }
  }
 }

 if (VAR_3->flags & VAR_0) {
  VAR_4 = VAR_10.sub[0].ep;
  if (VAR_8 == 0) {
   if (*VAR_4)
    FUNC_12(VAR_2, &VAR_7, *VAR_4++);
   else
    goto end;
  }
  if (!FUNC_3(VAR_2, VAR_3->prog, VAR_4, &VAR_10, VAR_1))
   goto loop;
 }

end:
 FUNC_14(VAR_2, &VAR_7, VAR_5 + VAR_8);
 FUNC_12(VAR_2, &VAR_7, 0);

 if (FUNC_18(VAR_2)) {
  FUNC_5(VAR_2, VAR_7);
  FUNC_15(VAR_2);
 }
 FUNC_10(VAR_2, VAR_7 ? VAR_7->s : "");
 FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_7);
}
