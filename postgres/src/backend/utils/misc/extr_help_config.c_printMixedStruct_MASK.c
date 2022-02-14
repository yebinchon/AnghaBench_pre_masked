
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {char* name; size_t context; size_t group; int vartype; int * long_desc; int * short_desc; } ;
struct TYPE_15__ {int boot_val; } ;
struct TYPE_12__ {char* boot_val; } ;
struct TYPE_11__ {double reset_val; double min; double max; } ;
struct TYPE_10__ {int reset_val; int min; int max; } ;
struct TYPE_9__ {int reset_val; } ;
struct TYPE_14__ {TYPE_5__ generic; TYPE_8__ _enum; TYPE_4__ string; TYPE_3__ real; TYPE_2__ integer; TYPE_1__ _bool; } ;
typedef TYPE_6__ mixedStruct ;


 char** VAR_0 ;





 char* FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_8__*,int ) ;
 int ** VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(mixedStruct *VAR_2)
{
 FUNC_2("%s\t%s\t%s\t",
     VAR_2->generic.name,
     VAR_0[VAR_2->generic.context],
     FUNC_0(VAR_1[VAR_2->generic.group]));

 switch (VAR_2->generic.vartype)
 {

  case 132:
   FUNC_2("BOOLEAN\t%s\t\t\t",
       (VAR_2->_bool.reset_val == 0) ?
       "FALSE" : "TRUE");
   break;

  case 130:
   FUNC_2("INTEGER\t%d\t%d\t%d\t",
       VAR_2->integer.reset_val,
       VAR_2->integer.min,
       VAR_2->integer.max);
   break;

  case 129:
   FUNC_2("REAL\t%g\t%g\t%g\t",
       VAR_2->real.reset_val,
       VAR_2->real.min,
       VAR_2->real.max);
   break;

  case 128:
   FUNC_2("STRING\t%s\t\t\t",
       VAR_2->string.boot_val ? VAR_2->string.boot_val : "");
   break;

  case 131:
   FUNC_2("ENUM\t%s\t\t\t",
       FUNC_1(&VAR_2->_enum,
              VAR_2->_enum.boot_val));
   break;

  default:
   FUNC_3("internal error: unrecognized run-time parameter type\n");
   break;
 }

 FUNC_2("%s\t%s\n",
     (VAR_2->generic.short_desc == ((void*)0)) ? "" : FUNC_0(VAR_2->generic.short_desc),
     (VAR_2->generic.long_desc == ((void*)0)) ? "" : FUNC_0(VAR_2->generic.long_desc));
}
