
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {scalar_t__ remote_package; scalar_t__ cache_package; scalar_t__ local_package; scalar_t__ curl; scalar_t__ header; struct update_info* url; struct update_info* local; struct update_info* cache; struct update_info* temp; struct update_info* user_agent; struct update_info* log_prefix; int file_data; int thread; scalar_t__ thread_created; } ;


 int FUNC_0 (struct update_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct update_info *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->thread_created)
  FUNC_5(VAR_0->thread, ((void*)0));

 FUNC_3(VAR_0->file_data);
 FUNC_0(VAR_0->log_prefix);
 FUNC_0(VAR_0->user_agent);
 FUNC_0(VAR_0->temp);
 FUNC_0(VAR_0->cache);
 FUNC_0(VAR_0->local);
 FUNC_0(VAR_0->url);

 if (VAR_0->header)
  FUNC_2(VAR_0->header);
 if (VAR_0->curl)
  FUNC_1(VAR_0->curl);
 if (VAR_0->local_package)
  FUNC_4(VAR_0->local_package);
 if (VAR_0->cache_package)
  FUNC_4(VAR_0->cache_package);
 if (VAR_0->remote_package)
  FUNC_4(VAR_0->remote_package);
 FUNC_0(VAR_0);
}
