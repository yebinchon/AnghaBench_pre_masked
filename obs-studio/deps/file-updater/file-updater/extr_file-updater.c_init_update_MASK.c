
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {char const* user_agent; void* header; int etag_local; int cache; void* cache_package; int local; void* local_package; int curl; } ;
struct dstr {int array; int member_0; } ;
typedef int obs_data_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (struct dstr*,char const*) ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (struct dstr*) ;
 void* FUNC_6 (int ,char*) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static bool FUNC_10(struct update_info *VAR_0)
{
 struct dstr VAR_1 = {0};

 VAR_0->curl = FUNC_1();
 if (!VAR_0->curl) {
  FUNC_9("Could not initialize Curl");
  return 0;
 }

 VAR_0->local_package = FUNC_6(VAR_0->local, "package.json");
 VAR_0->cache_package = FUNC_6(VAR_0->cache, "package.json");

 obs_data_t *VAR_2 = FUNC_6(VAR_0->cache, "meta.json");
 if (VAR_2) {
  const char *VAR_3 = FUNC_7(VAR_2, "etag");
  if (VAR_3) {
   struct dstr VAR_4 = {0};
   FUNC_4(&VAR_4, "If-None-Match: ");
   FUNC_3(&VAR_4, VAR_3);

   VAR_0->etag_local = FUNC_0(VAR_3);

   VAR_0->header = FUNC_2(VAR_0->header,
        VAR_4.array);

   FUNC_5(&VAR_4);
  }

  FUNC_8(VAR_2);
 }

 FUNC_4(&VAR_1, "User-Agent: ");
 FUNC_3(&VAR_1, VAR_0->user_agent);

 VAR_0->header = FUNC_2(VAR_0->header, VAR_1.array);

 FUNC_5(&VAR_1);
 return 1;
}
