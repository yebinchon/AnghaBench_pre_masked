
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct ep_struct {int written; char* name; TYPE_1__ vars; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;
 int FUNC_1 (struct dstr*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dstr *VAR_0, struct ep_struct *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->written)
  return;

 FUNC_0(VAR_0, "struct ");
 FUNC_0(VAR_0, VAR_1->name);
 FUNC_0(VAR_0, " {");

 for (VAR_2 = 0; VAR_2 < VAR_1->vars.num; VAR_2++) {
  FUNC_0(VAR_0, "\n\t");
  FUNC_1(VAR_0, VAR_1->vars.array + VAR_2);
  FUNC_0(VAR_0, ";");
 }

 FUNC_0(VAR_0, "\n};\n");
 VAR_1->written = 1;
}
