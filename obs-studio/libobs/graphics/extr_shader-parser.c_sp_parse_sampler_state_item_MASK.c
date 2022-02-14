
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_sampler {int values; int states; } ;
struct shader_parser {int cfp; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char**,char*,char*) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *,char*,char*,int *) ;
 int FUNC_4 (int ,char**) ;

__attribute__((used)) static int FUNC_5(struct shader_parser *VAR_1,
           struct shader_sampler *VAR_2)
{
 int VAR_3;
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 VAR_3 = FUNC_1(&VAR_1->cfp, &VAR_4, "state name", ";");
 if (VAR_3 != VAR_0)
  goto fail;

 VAR_3 = FUNC_3(&VAR_1->cfp, "=", ";", ((void*)0));
 if (VAR_3 != VAR_0)
  goto fail;

 VAR_3 = FUNC_2(&VAR_1->cfp, &VAR_5);
 if (VAR_3 != VAR_0)
  goto fail;

 VAR_3 = FUNC_3(&VAR_1->cfp, ";", ";", ((void*)0));
 if (VAR_3 != VAR_0)
  goto fail;

 FUNC_4(VAR_2->states, &VAR_4);
 FUNC_4(VAR_2->values, &VAR_5);
 return VAR_3;

fail:
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 return VAR_3;
}
