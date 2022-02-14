
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int warn_unsupported; } ;
struct TYPE_10__ {int tok; } ;
struct TYPE_9__ {TYPE_1__* cstr; } ;
struct TYPE_8__ {long long aligned; int packed; int weak; int func_export; int func_import; int mode; int func_call; int alias_target; } ;
struct TYPE_7__ {int size; scalar_t__ data; } ;
typedef TYPE_2__ AttributeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int FUNC_0 (char*) ;




 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 long long FUNC_2 () ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char) ;
 TYPE_5__* VAR_12 ;
 int FUNC_6 (char*,int ) ;
 char VAR_13 ;
 TYPE_4__* FUNC_7 (char*,int ) ;
 TYPE_3__ VAR_14 ;

__attribute__((used)) static void FUNC_8(AttributeDef *VAR_15) {
 int VAR_16;
 long long VAR_17;

 while (VAR_13 == VAR_5 || VAR_13 == VAR_6) {
  FUNC_4 ();
  FUNC_5 ('(');
  FUNC_5 ('(');
  while (VAR_13 != ')') {
   if (VAR_13 < VAR_7) {
    FUNC_1 ("attribute name");
   }
   VAR_16 = VAR_13;
   FUNC_4 ();
   switch (VAR_16) {
   case 156:
   case 155:
    FUNC_5 ('(');
    if (VAR_13 != VAR_8) {
     FUNC_1 ("alias(\"target\")");
    }
    VAR_15->alias_target =
         FUNC_7 ((char *) VAR_14.cstr->data, VAR_14.cstr->size - 1)->tok;
    FUNC_4 ();
    FUNC_5 (')');
    break;
   case 154:
   case 153:
    if (VAR_13 == '(') {
     FUNC_4 ();
     VAR_17 = FUNC_2 ();
     if (VAR_17 <= 0 || (VAR_17 & (VAR_17 - 1)) != 0) {
      FUNC_0 ("alignment must be a positive power of two");
     }
     FUNC_5 (')');
    } else {
     VAR_17 = VAR_4;
    }
    VAR_15->aligned = VAR_17;
    break;
   case 138:
   case 137:
    VAR_15->packed = 1;
    break;
   case 129:
   case 128:
    VAR_15->weak = 1;
    break;
   case 131:
   case 130:


    break;
   case 140:
   case 139:


    break;
   case 152:
   case 151:
   case 150:
    VAR_15->func_call = VAR_0;
    break;
   case 134:
   case 133:
   case 132:
    VAR_15->func_call = VAR_3;
    break;
   case 144:
    FUNC_5 ('(');
    switch (VAR_13) {
    case 143:
     VAR_15->mode = VAR_11 + 1;
     break;
    case 142:
     VAR_15->mode = VAR_9 + 1;
     break;
    case 141:
     VAR_15->mode = VAR_10 + 1;
     break;
    default:
     FUNC_6 ("__mode__(%s) not supported\n", FUNC_3 (VAR_13, ((void*)0)));
     break;
    }
    FUNC_4 ();
    FUNC_5 (')');
    break;
   case 149:
    VAR_15->func_export = 1;
    break;
   case 148:
    VAR_15->func_import = 1;
    break;
   default:
    if (VAR_12->warn_unsupported) {
     FUNC_6 ("'%s' attribute ignored", FUNC_3 (VAR_16, ((void*)0)));
    }

    if (VAR_13 == '(') {
     int VAR_18 = 0;
     do {
      if (VAR_13 == '(') {
       VAR_18++;
      } else if (VAR_13 == ')') {
       VAR_18--;
      }
      FUNC_4 ();
     } while (VAR_18 && VAR_13 != -1);
    }
    break;
   }
   if (VAR_13 != ',') {
    break;
   }
   FUNC_4 ();
  }
  FUNC_5 (')');
  FUNC_5 (')');
 }
}
