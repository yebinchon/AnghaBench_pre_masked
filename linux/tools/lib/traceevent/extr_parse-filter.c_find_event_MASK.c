
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int nr_events; struct tep_event** events; } ;
struct tep_event {int dummy; } ;
struct event_list {int dummy; } ;
typedef int regex_t ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct event_list**,struct tep_event*) ;
 int FUNC_1 (char**,char*,char*) ;
 scalar_t__ FUNC_2 (struct tep_event*,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum tep_errno
FUNC_6(struct tep_handle *VAR_5, struct event_list **VAR_6,
    char *VAR_7, char *VAR_8)
{
 struct tep_event *VAR_9;
 regex_t VAR_10;
 regex_t VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 char *VAR_14;
 int VAR_15;
 int VAR_16;

 if (!VAR_8) {

  VAR_8 = VAR_7;
  VAR_7 = ((void*)0);
 }

 VAR_15 = FUNC_1(&VAR_14, "^%s$", VAR_8);
 if (VAR_15 < 0)
  return VAR_4;

 VAR_15 = FUNC_4(&VAR_10, VAR_14, VAR_0|VAR_1);
 FUNC_3(VAR_14);

 if (VAR_15)
  return VAR_3;

 if (VAR_7) {
  VAR_15 = FUNC_1(&VAR_14, "^%s$", VAR_7);
  if (VAR_15 < 0) {
   FUNC_5(&VAR_10);
   return VAR_4;
  }

  VAR_15 = FUNC_4(&VAR_11, VAR_14, VAR_0|VAR_1);
  FUNC_3(VAR_14);
  if (VAR_15) {
   FUNC_5(&VAR_10);
   return VAR_3;
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_5->nr_events; VAR_16++) {
  VAR_9 = VAR_5->events[VAR_16];
  if (FUNC_2(VAR_9, VAR_7 ? &VAR_11 : ((void*)0), &VAR_10)) {
   VAR_12 = 1;
   if (FUNC_0(VAR_6, VAR_9) < 0) {
    VAR_13 = 1;
    break;
   }
  }
 }

 FUNC_5(&VAR_10);
 if (VAR_7)
  FUNC_5(&VAR_11);

 if (!VAR_12)
  return VAR_2;
 if (VAR_13)
  return VAR_4;

 return 0;
}
