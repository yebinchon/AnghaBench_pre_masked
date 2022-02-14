
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ command; scalar_t__ ctrl_id; int ** txt; } ;
typedef TYPE_1__ loc_cmd ;
struct TYPE_12__ {scalar_t__ id; int name; } ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 size_t VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 TYPE_2__* VAR_6 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,char const*,int) ;
 int FUNC_11 (char*,int *) ;

BOOL FUNC_12(loc_cmd* VAR_8)
{
 size_t VAR_9;
 static int VAR_10 = 0;
 loc_cmd* VAR_11 = ((void*)0);
 const char* VAR_12 = "MSG_";

 if (VAR_8 == ((void*)0))
  return VAR_0;

 if (VAR_8->command <= 128) {

  if (FUNC_10(VAR_8->txt[0], VAR_12, 4) == 0) {

   if ((VAR_8->txt[0] == ((void*)0)) || (VAR_8->command != 128)) {
    FUNC_7("only the [t]ext command can be applied to a message (MSG_###)\n");
    goto err;
   }

   VAR_8->ctrl_id = VAR_2 + FUNC_3(&(VAR_8->txt[0][4]));
   if (VAR_8->ctrl_id == VAR_2) {

    FUNC_8("failed to convert the numeric value in '%'\n", VAR_8->txt[0]);
    goto err;
   }
   FUNC_2(VAR_8);
   FUNC_4(VAR_8);
   return VAR_3;
  }
  for (VAR_9=0; VAR_9<FUNC_0(VAR_4); VAR_9++) {
   if (FUNC_9(VAR_8->txt[0], VAR_4[VAR_9].name) == 0) {
    VAR_8->ctrl_id = VAR_4[VAR_9].id;
    break;
   }
  }
  if (VAR_8->ctrl_id < 0) {
   FUNC_8("unknown control '%s'\n", VAR_8->txt[0]);
   goto err;
  }
 }


 if (VAR_7 == VAR_5) {
  FUNC_4(VAR_8);
  return VAR_3;
 }

 switch(VAR_8->command) {

 case 128:
  FUNC_1(VAR_10, VAR_8);
  break;
 case 129:
  if ((VAR_8->ctrl_id-VAR_1) > FUNC_0(VAR_6)) {
   FUNC_8("'%s' is not a group ID\n", VAR_8->txt[0]);
   goto err;
  }
  VAR_10 = VAR_8->ctrl_id - VAR_1;
  FUNC_4(VAR_8);
  break;
 case 130:
  VAR_11 = FUNC_6(VAR_8->txt[0], VAR_0);
  if (VAR_11 != ((void*)0)) {
   FUNC_11("localization: using locale base '%s'\n", VAR_8->txt[0]);
   FUNC_5(((void*)0), VAR_11);
  } else {
   FUNC_8("locale base '%s' not found - ignoring", VAR_8->txt[0]);
  }
  FUNC_4(VAR_8);
  break;
 default:
  FUNC_4(VAR_8);
  break;
 }
 return VAR_3;

err:
 FUNC_4(VAR_8);
 return VAR_0;
}
