
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int right; int left; } ;
struct tep_filter_arg {TYPE_1__ exp; } ;
struct tep_event_filter {int dummy; } ;
 char* FUNC_0 (struct tep_event_filter*,int ) ;
 int FUNC_1 (char**,char*,char*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 char *VAR_4;
 char *VAR_5 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1->exp.left);
 VAR_3 = FUNC_0(VAR_0, VAR_1->exp.right);
 if (!VAR_2 || !VAR_3)
  goto out;

 switch (VAR_1->exp.type) {
 case 137:
  VAR_4 = "+";
  break;
 case 129:
  VAR_4 = "-";
  break;
 case 132:
  VAR_4 = "*";
  break;
 case 135:
  VAR_4 = "/";
  break;
 case 133:
  VAR_4 = "%";
  break;
 case 130:
  VAR_4 = ">>";
  break;
 case 134:
  VAR_4 = "<<";
  break;
 case 136:
  VAR_4 = "&";
  break;
 case 131:
  VAR_4 = "|";
  break;
 case 128:
  VAR_4 = "^";
  break;
 default:
  VAR_4 = "[ERROR IN EXPRESSION TYPE]";
  break;
 }

 FUNC_1(&VAR_5, "%s %s %s", VAR_2, VAR_4, VAR_3);
out:
 FUNC_2(VAR_2);
 FUNC_2(VAR_3);

 return VAR_5;
}
