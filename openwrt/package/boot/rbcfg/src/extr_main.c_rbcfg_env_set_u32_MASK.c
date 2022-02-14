
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int u32; } ;
struct rbcfg_value {TYPE_1__ val; } ;
struct rbcfg_env {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;
 struct rbcfg_value* FUNC_1 (struct rbcfg_env const*,char const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(const struct rbcfg_env *VAR_3, const char *VAR_4)
{
 const struct rbcfg_value *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_2, "invalid value '%s'\n", VAR_4);
  return VAR_0;
 }

 VAR_6 = FUNC_2(VAR_1, VAR_3->id, VAR_5->val.u32);
 return VAR_6;
}
