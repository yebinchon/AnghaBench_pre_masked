
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {char const* temp; int thread_created; int thread; void* param; int callback; int url; void* cache; void* local; void* user_agent; void* log_prefix; } ;
typedef struct update_info update_info_t ;
struct dstr {char const* array; int member_0; } ;
typedef int confirm_file_callback_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 void* FUNC_1 (char const*) ;
 struct update_info* FUNC_2 (int) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*,char) ;
 int FUNC_5 (struct dstr*,char const*) ;
 char FUNC_6 (struct dstr*) ;
 int FUNC_7 (struct dstr*) ;
 int FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int *,int *,int ,struct update_info*) ;
 int VAR_1 ;

update_info_t *FUNC_11(const char *VAR_2,
      const char *VAR_3,
      const char *VAR_4, const char *VAR_5,
      const char *VAR_6,
      confirm_file_callback_t VAR_7,
      void *VAR_8)
{
 struct update_info *VAR_9;
 struct dstr VAR_10 = {0};

 if (!VAR_2)
  VAR_2 = "";

 if (FUNC_9(VAR_6) < 0) {
  FUNC_0(VAR_0, "%sCould not create cache directory %s",
       VAR_2, VAR_6);
  return ((void*)0);
 }

 FUNC_5(&VAR_10, VAR_6);
 if (FUNC_6(&VAR_10) != '/' && FUNC_6(&VAR_10) != '\\')
  FUNC_4(&VAR_10, '/');
 FUNC_3(&VAR_10, ".temp");

 if (FUNC_9(VAR_10.array) < 0) {
  FUNC_0(VAR_0, "%sCould not create temp directory %s",
       VAR_2, VAR_6);
  FUNC_7(&VAR_10);
  return ((void*)0);
 }

 VAR_9 = FUNC_2(sizeof(*VAR_9));
 VAR_9->log_prefix = FUNC_1(VAR_2);
 VAR_9->user_agent = FUNC_1(VAR_3);
 VAR_9->temp = VAR_10.array;
 VAR_9->local = FUNC_1(VAR_5);
 VAR_9->cache = FUNC_1(VAR_6);
 VAR_9->url = FUNC_8(VAR_4, "package.json");
 VAR_9->callback = VAR_7;
 VAR_9->param = VAR_8;

 if (FUNC_10(&VAR_9->thread, ((void*)0), VAR_1, VAR_9) == 0)
  VAR_9->thread_created = 1;

 return VAR_9;
}
