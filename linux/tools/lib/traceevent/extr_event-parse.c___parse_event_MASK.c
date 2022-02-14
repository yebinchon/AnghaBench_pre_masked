
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ args; } ;
struct tep_event {TYPE_1__ print_fmt; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tep_event**,struct tep_handle*,char const*,unsigned long,char const*) ;
 scalar_t__ FUNC_1 (struct tep_handle*,struct tep_event*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tep_event*) ;

__attribute__((used)) static enum tep_errno
FUNC_4(struct tep_handle *VAR_2,
       struct tep_event **VAR_3,
       const char *VAR_4, unsigned long VAR_5,
       const char *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_3, VAR_2, VAR_4, VAR_5, VAR_6);
 struct tep_event *VAR_8 = *VAR_3;

 if (VAR_8 == ((void*)0))
  return VAR_7;

 if (VAR_2 && FUNC_1(VAR_2, VAR_8)) {
  VAR_7 = VAR_1;
  goto event_add_failed;
 }


 if (0 && VAR_8->print_fmt.args)
  FUNC_2(VAR_8->print_fmt.args);

 return 0;

event_add_failed:
 FUNC_3(VAR_8);
 return VAR_7;
}
