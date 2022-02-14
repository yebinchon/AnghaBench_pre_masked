
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct tep_filter_arg {TYPE_1__ boolean; int type; } ;
struct tep_event {int dummy; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tep_filter_arg* FUNC_0 () ;
 int FUNC_1 (struct tep_event*,struct tep_filter_arg**,char*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ) ;

__attribute__((used)) static enum tep_errno
FUNC_4(struct tep_event *VAR_3, const char *VAR_4,
       struct tep_filter_arg **VAR_5, char *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_4, FUNC_2(VAR_4));

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6, 0);
 if (VAR_7 < 0)
  return VAR_7;


 if (!*VAR_5) {
  *VAR_5 = FUNC_0();
  if (*VAR_5 == ((void*)0))
   return VAR_0;

  (*VAR_5)->type = VAR_1;
  (*VAR_5)->boolean.value = VAR_2;
 }

 return 0;
}
