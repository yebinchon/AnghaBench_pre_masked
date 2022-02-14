
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map {int dso; } ;
struct machine {int kmaps; } ;
struct kmod_path {int name; } ;
struct dso {int dummy; } ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct dso*) ;
 scalar_t__ FUNC_2 (struct kmod_path*,char const*) ;
 struct dso* FUNC_3 (struct machine*,struct kmod_path*,char const*) ;
 struct map* FUNC_4 (int ,struct dso*) ;
 int FUNC_5 (struct map*) ;
 struct map* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct map*) ;
 int FUNC_8 (int *) ;

struct map *FUNC_9(struct machine *VAR_0, u64 VAR_1,
     const char *VAR_2)
{
 struct map *VAR_3 = ((void*)0);
 struct dso *VAR_4 = ((void*)0);
 struct kmod_path VAR_5;

 if (FUNC_2(&VAR_5, VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_6(&VAR_0->kmaps, VAR_5.name);
 if (VAR_3) {





  FUNC_0(VAR_3->dso, VAR_2);
  goto out;
 }

 VAR_4 = FUNC_3(VAR_0, &VAR_5, VAR_2);
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_3 = FUNC_4(VAR_1, VAR_4);
 if (VAR_3 == ((void*)0))
  goto out;

 FUNC_7(&VAR_0->kmaps, VAR_3);


 FUNC_5(VAR_3);
out:

 FUNC_1(VAR_4);
 FUNC_8(&VAR_5.name);
 return VAR_3;
}
