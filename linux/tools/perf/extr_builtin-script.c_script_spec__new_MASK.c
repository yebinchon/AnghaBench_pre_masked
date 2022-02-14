
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_ops {int dummy; } ;
struct script_spec {struct scripting_ops* ops; int spec; } ;


 struct script_spec* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static struct script_spec *FUNC_3(const char *VAR_0,
         struct scripting_ops *VAR_1)
{
 struct script_spec *VAR_2 = FUNC_0(sizeof(*VAR_2) + FUNC_2(VAR_0) + 1);

 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_2->spec, VAR_0);
  VAR_2->ops = VAR_1;
 }

 return VAR_2;
}
