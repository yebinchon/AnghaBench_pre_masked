
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {int thread_created; int thread; void* param; int callback; void* url; void* user_agent; void* log_prefix; } ;
typedef struct update_info update_info_t ;
typedef int confirm_file_callback_t ;


 void* FUNC_0 (char const*) ;
 struct update_info* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int ,struct update_info*) ;
 int VAR_0 ;

update_info_t *
FUNC_3(const char *VAR_1, const char *VAR_2,
     const char *VAR_3,
     confirm_file_callback_t VAR_4, void *VAR_5)
{
 struct update_info *VAR_6;

 if (!VAR_1)
  VAR_1 = "";

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 VAR_6->log_prefix = FUNC_0(VAR_1);
 VAR_6->user_agent = FUNC_0(VAR_2);
 VAR_6->url = FUNC_0(VAR_3);
 VAR_6->callback = VAR_4;
 VAR_6->param = VAR_5;

 if (FUNC_2(&VAR_6->thread, ((void*)0), VAR_0, VAR_6) == 0)
  VAR_6->thread_created = 1;

 return VAR_6;
}
