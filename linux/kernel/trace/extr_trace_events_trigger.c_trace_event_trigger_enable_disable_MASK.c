
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int flags; int tm_ref; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct trace_event_file*,int,int) ;

int FUNC_5(struct trace_event_file *VAR_1,
           int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2) {
  if (FUNC_1(&VAR_1->tm_ref) > 1)
   return VAR_3;
  FUNC_3(VAR_0, &VAR_1->flags);
  VAR_3 = FUNC_4(VAR_1, 1, 1);
 } else {
  if (FUNC_0(&VAR_1->tm_ref) > 0)
   return VAR_3;
  FUNC_2(VAR_0, &VAR_1->flags);
  VAR_3 = FUNC_4(VAR_1, 0, 1);
 }

 return VAR_3;
}
