
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stringform ;
struct TYPE_5__ {int dval; int ival; scalar_t__ bval; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ u; } ;
struct TYPE_7__ {char* svalue; TYPE_2__ value; } ;
typedef TYPE_3__ Variable ;
typedef int CState ;


 int FUNC_0 (int) ;
 double VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static char *
FUNC_4(CState *VAR_7, char *VAR_8)
{
 Variable *VAR_9;
 char VAR_10[64];

 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 if (VAR_9->svalue)
  return VAR_9->svalue;


 FUNC_0(VAR_9->value.type != VAR_5);
 if (VAR_9->value.type == VAR_6)
  FUNC_3(VAR_10, sizeof(VAR_10), "NULL");
 else if (VAR_9->value.type == VAR_2)
  FUNC_3(VAR_10, sizeof(VAR_10),
     "%s", VAR_9->value.u.bval ? "true" : "false");
 else if (VAR_9->value.type == VAR_4)
  FUNC_3(VAR_10, sizeof(VAR_10),
     VAR_1, VAR_9->value.u.ival);
 else if (VAR_9->value.type == VAR_3)
  FUNC_3(VAR_10, sizeof(VAR_10),
     "%.*g", VAR_0, VAR_9->value.u.dval);
 else
  FUNC_0(0);
 VAR_9->svalue = FUNC_2(VAR_10);
 return VAR_9->svalue;
}
