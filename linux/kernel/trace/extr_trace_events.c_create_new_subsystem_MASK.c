
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_subsystem {int ref_count; int name; int list; int * filter; } ;
struct event_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event_subsystem*) ;
 int FUNC_1 (int ) ;
 struct event_subsystem* FUNC_2 (int,int ) ;
 int FUNC_3 (char const*,int ) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static struct event_subsystem *
FUNC_6(const char *VAR_2)
{
 struct event_subsystem *VAR_3;


 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->ref_count = 1;


 VAR_3->name = FUNC_3(VAR_2, VAR_0);
 if (!VAR_3->name)
  goto out_free;

 VAR_3->filter = ((void*)0);

 VAR_3->filter = FUNC_4(sizeof(struct event_filter), VAR_0);
 if (!VAR_3->filter)
  goto out_free;

 FUNC_5(&VAR_3->list, &VAR_1);

 return VAR_3;

 out_free:
 FUNC_1(VAR_3->name);
 FUNC_0(VAR_3);
 return ((void*)0);
}
