
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {int config; int size; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 struct list_head* FUNC_1 (int) ;
 int FUNC_2 (struct list_head*,char const*) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (struct list_head*,struct perf_event_attr*,struct list_head*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct list_head *VAR_1,
          const char *VAR_2,
          u64 *VAR_3)
{
 struct list_head *VAR_4;
 struct perf_event_attr VAR_5 = { .size = 0, };
 int VAR_6;

 VAR_4 = FUNC_1(sizeof(struct list_head));
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_4);

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (VAR_6)
  goto out_free;

 VAR_5.config = *VAR_3;
 VAR_6 = FUNC_4(VAR_1, &VAR_5, VAR_4, 1, ((void*)0));
 if (VAR_6)
  goto out_free;

 *VAR_3 = VAR_5.config;
out_free:
 FUNC_3(VAR_4);
 return VAR_6;
}
