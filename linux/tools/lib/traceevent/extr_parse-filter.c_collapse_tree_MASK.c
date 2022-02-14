
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct tep_filter_arg {TYPE_1__ boolean; int type; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct tep_filter_arg* FUNC_0 () ;
 int FUNC_1 (struct tep_filter_arg*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct tep_filter_arg*,struct tep_filter_arg*,char*) ;

__attribute__((used)) static int FUNC_4(struct tep_filter_arg *VAR_2,
    struct tep_filter_arg **VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_2, VAR_4);
 switch (VAR_5) {
 case 129:
  break;

 case 128:
 case 130:
  FUNC_1(VAR_2);
  VAR_2 = FUNC_0();
  if (VAR_2) {
   VAR_2->type = VAR_1;
   VAR_2->boolean.value = VAR_5 == 128;
  } else {
   FUNC_2(VAR_4, "Failed to allocate filter arg");
   VAR_5 = VAR_0;
  }
  break;

 default:

  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
  break;
 }

 *VAR_3 = VAR_2;
 return VAR_5;
}
