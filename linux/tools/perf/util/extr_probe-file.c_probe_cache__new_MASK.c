
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_cache {int dummy; } ;
struct nsinfo {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct probe_cache* FUNC_1 () ;
 int FUNC_2 (struct probe_cache*) ;
 int FUNC_3 (struct probe_cache*) ;
 int FUNC_4 (struct probe_cache*,char const*,struct nsinfo*) ;

struct probe_cache *FUNC_5(const char *VAR_0, struct nsinfo *VAR_1)
{
 struct probe_cache *VAR_2 = FUNC_1();
 int VAR_3;

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_4(VAR_2, VAR_0, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0("Cache open error: %d\n", VAR_3);
  goto out_err;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0) {
  FUNC_0("Cache read error: %d\n", VAR_3);
  goto out_err;
 }

 return VAR_2;

out_err:
 FUNC_2(VAR_2);
 return ((void*)0);
}
