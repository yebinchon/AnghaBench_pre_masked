
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_filter_type {struct tep_filter_arg* filter; } ;
struct TYPE_2__ {int value; } ;
struct tep_filter_arg {TYPE_1__ boolean; int type; } ;
struct tep_event_filter {int dummy; } ;
struct tep_event {int id; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tep_filter_type* FUNC_0 (struct tep_event_filter*,int ) ;
 struct tep_filter_arg* FUNC_1 () ;
 int FUNC_2 (struct tep_filter_arg*) ;
 int FUNC_3 (struct tep_event*,char const*,struct tep_filter_arg**,char*) ;

__attribute__((used)) static enum tep_errno
FUNC_4(struct tep_event_filter *VAR_3, struct tep_event *VAR_4,
      const char *VAR_5, char *VAR_6)
{
 struct tep_filter_type *VAR_7;
 struct tep_filter_arg *VAR_8;
 enum tep_errno VAR_9;

 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_4, VAR_5, &VAR_8, VAR_6);
  if (VAR_9 < 0)
   return VAR_9;

 } else {

  VAR_8 = FUNC_1();
  if (VAR_8 == ((void*)0))
   return VAR_0;

  VAR_8->type = VAR_1;
  VAR_8->boolean.value = VAR_2;
 }

 VAR_7 = FUNC_0(VAR_3, VAR_4->id);
 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (VAR_7->filter)
  FUNC_2(VAR_7->filter);
 VAR_7->filter = VAR_8;

 return 0;
}
