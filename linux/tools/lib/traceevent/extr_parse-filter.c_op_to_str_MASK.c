
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int right; int left; } ;
struct tep_filter_arg {TYPE_1__ op; } ;
struct tep_event_filter {int dummy; } ;





 char* FUNC_0 (struct tep_event_filter*,int ) ;
 int FUNC_1 (char**,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *FUNC_4(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8;

 switch (VAR_1->op.type) {
 case 130:
  VAR_5 = "&&";

 case 128:
  if (!VAR_5)
   VAR_5 = "||";

  VAR_3 = FUNC_0(VAR_0, VAR_1->op.left);
  VAR_4 = FUNC_0(VAR_0, VAR_1->op.right);
  if (!VAR_3 || !VAR_4)
   break;


  if (FUNC_3(VAR_3, "TRUE") == 0)
   VAR_6 = 1;
  else if (FUNC_3(VAR_3, "FALSE") == 0)
   VAR_6 = 0;

  if (FUNC_3(VAR_4, "TRUE") == 0)
   VAR_7 = 1;
  else if (FUNC_3(VAR_4, "FALSE") == 0)
   VAR_7 = 0;

  if (VAR_6 >= 0) {
   if ((VAR_1->op.type == 130 && !VAR_6) ||
       (VAR_1->op.type == 128 && VAR_6)) {

    VAR_2 = VAR_3;
    VAR_3 = ((void*)0);
    break;
   }
   if (VAR_7 >= 0) {

    VAR_8 = 0;
    switch (VAR_1->op.type) {
    case 130:
     VAR_8 = VAR_6 && VAR_7;
     break;
    case 128:
     VAR_8 = VAR_6 || VAR_7;
     break;
    default:
     break;
    }
    FUNC_1(&VAR_2, VAR_8 ? "TRUE" : "FALSE");
    break;
   }
  }
  if (VAR_7 >= 0) {
   if ((VAR_1->op.type == 130 && !VAR_7) ||
       (VAR_1->op.type == 128 && VAR_7)) {

    VAR_2 = VAR_4;
    VAR_4 = ((void*)0);
    break;
   }

   VAR_2 = VAR_3;
   VAR_3 = ((void*)0);
   break;
  }

  FUNC_1(&VAR_2, "(%s) %s (%s)", VAR_3, VAR_5, VAR_4);
  break;

 case 129:
  VAR_5 = "!";
  VAR_4 = FUNC_0(VAR_0, VAR_1->op.right);
  if (!VAR_4)
   break;


  if (FUNC_3(VAR_4, "TRUE") == 0)
   VAR_7 = 1;
  else if (FUNC_3(VAR_4, "FALSE") == 0)
   VAR_7 = 0;
  if (VAR_7 >= 0) {

   FUNC_1(&VAR_2, VAR_7 ? "FALSE" : "TRUE");
   break;
  }
  FUNC_1(&VAR_2, "%s(%s)", VAR_5, VAR_4);
  break;

 default:

  break;
 }
 FUNC_2(VAR_3);
 FUNC_2(VAR_4);
 return VAR_2;
}
