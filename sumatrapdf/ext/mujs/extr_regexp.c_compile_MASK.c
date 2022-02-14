
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int n; int cc; int c; struct TYPE_10__* y; struct TYPE_10__* x; } ;
struct TYPE_9__ {int type; int m; int n; int cc; int c; struct TYPE_9__* x; int ng; struct TYPE_9__* y; } ;
struct TYPE_8__ {int flags; TYPE_3__* end; } ;
typedef TYPE_1__ Reprog ;
typedef TYPE_2__ Renode ;
typedef TYPE_3__ Reinst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(Reprog *VAR_18, Renode *VAR_19)
{
 Reinst *VAR_20, *VAR_21, *VAR_22;
 int VAR_23;

loop:
 if (!VAR_19)
  return;

 switch (VAR_19->type) {
 case 139:
  FUNC_2(VAR_18, VAR_19->x);
  VAR_19 = VAR_19->y;
  goto loop;

 case 142:
  VAR_21 = FUNC_1(VAR_18, VAR_14);
  FUNC_2(VAR_18, VAR_19->x);
  VAR_22 = FUNC_1(VAR_18, VAR_6);
  FUNC_2(VAR_18, VAR_19->y);
  VAR_21->x = VAR_21 + 1;
  VAR_21->y = VAR_22 + 1;
  VAR_22->x = VAR_18->end;
  break;

 case 129:
  VAR_20 = ((void*)0);
  for (VAR_23 = 0; VAR_23 < VAR_19->m; ++VAR_23) {
   VAR_20 = VAR_18->end;
   FUNC_2(VAR_18, VAR_19->x);
  }
  if (VAR_19->m == VAR_19->n)
   break;
  if (VAR_19->n < VAR_17) {
   for (VAR_23 = VAR_19->m; VAR_23 < VAR_19->n; ++VAR_23) {
    VAR_21 = FUNC_1(VAR_18, VAR_14);
    FUNC_2(VAR_18, VAR_19->x);
    if (VAR_19->ng) {
     VAR_21->y = VAR_21 + 1;
     VAR_21->x = VAR_18->end;
    } else {
     VAR_21->x = VAR_21 + 1;
     VAR_21->y = VAR_18->end;
    }
   }
  } else if (VAR_19->m == 0) {
   VAR_21 = FUNC_1(VAR_18, VAR_14);
   FUNC_2(VAR_18, VAR_19->x);
   VAR_22 = FUNC_1(VAR_18, VAR_6);
   if (VAR_19->ng) {
    VAR_21->y = VAR_21 + 1;
    VAR_21->x = VAR_18->end;
   } else {
    VAR_21->x = VAR_21 + 1;
    VAR_21->y = VAR_18->end;
   }
   VAR_22->x = VAR_21;
  } else {
   VAR_21 = FUNC_1(VAR_18, VAR_14);
   if (VAR_19->ng) {
    VAR_21->y = VAR_20;
    VAR_21->x = VAR_18->end;
   } else {
    VAR_21->x = VAR_20;
    VAR_21->y = VAR_18->end;
   }
  }
  break;

 case 140: FUNC_1(VAR_18, VAR_1); break;
 case 136: FUNC_1(VAR_18, VAR_5); break;
 case 128: FUNC_1(VAR_18, VAR_15); break;
 case 133: FUNC_1(VAR_18, VAR_10); break;

 case 132:
  VAR_20 = FUNC_1(VAR_18, VAR_7);
  VAR_20->n = VAR_19->n;
  FUNC_2(VAR_18, VAR_19->x);
  VAR_20 = FUNC_1(VAR_18, VAR_13);
  VAR_20->n = VAR_19->n;
  break;
 case 131:
  VAR_21 = FUNC_1(VAR_18, VAR_11);
  FUNC_2(VAR_18, VAR_19->x);
  FUNC_1(VAR_18, VAR_4);
  VAR_21->x = VAR_21 + 1;
  VAR_21->y = VAR_18->end;
  break;
 case 134:
  VAR_21 = FUNC_1(VAR_18, VAR_9);
  FUNC_2(VAR_18, VAR_19->x);
  FUNC_1(VAR_18, VAR_4);
  VAR_21->x = VAR_21 + 1;
  VAR_21->y = VAR_18->end;
  break;

 case 141:
  FUNC_1(VAR_18, VAR_0);
  break;
 case 137:
  VAR_20 = FUNC_1(VAR_18, VAR_3);
  VAR_20->c = (VAR_18->flags & VAR_16) ? FUNC_0(VAR_19->c) : VAR_19->c;
  break;
 case 138:
  VAR_20 = FUNC_1(VAR_18, VAR_2);
  VAR_20->cc = VAR_19->cc;
  break;
 case 135:
  VAR_20 = FUNC_1(VAR_18, VAR_8);
  VAR_20->cc = VAR_19->cc;
  break;
 case 130:
  VAR_20 = FUNC_1(VAR_18, VAR_12);
  VAR_20->n = VAR_19->n;
  break;
 }
}
