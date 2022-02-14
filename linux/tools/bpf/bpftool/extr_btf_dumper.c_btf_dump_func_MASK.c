
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int info; int name_off; scalar_t__ type; } ;
struct btf_param {int name_off; scalar_t__ type; } ;
struct btf {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct btf const*,int ) ;

__attribute__((used)) static int FUNC_4(const struct btf *VAR_0, char *VAR_1,
    const struct btf_type *VAR_2,
    const struct btf_type *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_2(VAR_2->type);
 if (VAR_3)
  FUNC_1("%s(", FUNC_3(VAR_0, VAR_3->name_off));
 else
  FUNC_1("(");
 VAR_7 = FUNC_0(VAR_2->info);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct btf_param *VAR_8 = &((struct btf_param *)(VAR_2 + 1))[VAR_6];

  if (VAR_6)
   FUNC_1(", ");
  if (VAR_8->type) {
   FUNC_2(VAR_8->type);
   FUNC_1("%s",
          FUNC_3(VAR_0, VAR_8->name_off));
  } else {
   FUNC_1("...");
  }
 }
 FUNC_1(")");

 return VAR_4;
}
