
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {char const* name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gen_pool* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,struct gen_pool**) ;
 struct gen_pool** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct gen_pool**) ;
 struct gen_pool* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct device*,char const*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,int ) ;

struct gen_pool *FUNC_8(struct device *VAR_4, int VAR_5,
          int VAR_6, const char *VAR_7)
{
 struct gen_pool **VAR_8, *VAR_9;
 const char *VAR_10 = ((void*)0);


 if (FUNC_5(VAR_4, VAR_7))
  return FUNC_0(-VAR_0);

 if (VAR_7) {
  VAR_10 = FUNC_7(VAR_7, VAR_2);
  if (!VAR_10)
   return FUNC_0(-VAR_1);
 }

 VAR_8 = FUNC_2(VAR_3, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  goto free_pool_name;

 VAR_9 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_9)
  goto free_devres;

 *VAR_8 = VAR_9;
 VAR_9->name = VAR_10;
 FUNC_1(VAR_4, VAR_8);

 return VAR_9;

free_devres:
 FUNC_3(VAR_8);
free_pool_name:
 FUNC_6(VAR_10);

 return FUNC_0(-VAR_1);
}
