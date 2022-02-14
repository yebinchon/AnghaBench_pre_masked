
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {char* svalue; char* name; TYPE_2__ value; } ;
typedef TYPE_1__ Variable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,double) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_1 ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*,int,double*) ;
 int FUNC_10 (char*,int,int *) ;

__attribute__((used)) static bool
FUNC_11(Variable *VAR_2)
{
 size_t VAR_3;

 if (VAR_2->value.type != VAR_0)
  return 1;

 VAR_3 = FUNC_8(VAR_2->svalue);

 if (VAR_3 == 0)

  return 0;

 if (FUNC_2(VAR_2->svalue, "null") == 0)
 {
  FUNC_7(&VAR_2->value);
 }





 else if (FUNC_3(VAR_2->svalue, "true", VAR_3) == 0 ||
    FUNC_3(VAR_2->svalue, "yes", VAR_3) == 0 ||
    FUNC_2(VAR_2->svalue, "on") == 0)
 {
  FUNC_4(&VAR_2->value, 1);
 }
 else if (FUNC_3(VAR_2->svalue, "false", VAR_3) == 0 ||
    FUNC_3(VAR_2->svalue, "no", VAR_3) == 0 ||
    FUNC_2(VAR_2->svalue, "off") == 0 ||
    FUNC_2(VAR_2->svalue, "of") == 0)
 {
  FUNC_4(&VAR_2->value, 0);
 }
 else if (FUNC_1(VAR_2->svalue))
 {

  int64 VAR_4;

  if (!FUNC_10(VAR_2->svalue, 0, &VAR_4))
   return 0;

  FUNC_6(&VAR_2->value, VAR_4);
 }
 else
 {
  double VAR_5;

  if (!FUNC_9(VAR_2->svalue, 1, &VAR_5))
  {
   FUNC_0(VAR_1,
     "malformed variable \"%s\" value: \"%s\"\n",
     VAR_2->name, VAR_2->svalue);
   return 0;
  }
  FUNC_5(&VAR_2->value, VAR_5);
 }
 return 1;
}
