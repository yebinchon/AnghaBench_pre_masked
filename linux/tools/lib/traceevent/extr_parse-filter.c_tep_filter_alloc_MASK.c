
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;
struct tep_event_filter {struct tep_handle* tep; } ;


 struct tep_event_filter* FUNC_0 (int) ;
 int FUNC_1 (struct tep_event_filter*,int ,int) ;
 int FUNC_2 (struct tep_handle*) ;

struct tep_event_filter *FUNC_3(struct tep_handle *VAR_0)
{
 struct tep_event_filter *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->tep = VAR_0;
 FUNC_2(VAR_0);

 return VAR_1;
}
