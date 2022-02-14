
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t num; char** array; } ;
struct TYPE_3__ {char** array; } ;
struct ep_sampler {int written; char* name; TYPE_2__ values; TYPE_1__ states; } ;
struct dstr {int dummy; } ;


 int FUNC_0 (struct dstr*,char*) ;

__attribute__((used)) static void FUNC_1(struct dstr *VAR_0, struct ep_sampler *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->written)
  return;

 FUNC_0(VAR_0, "sampler_state ");
 FUNC_0(VAR_0, VAR_1->name);
 FUNC_0(VAR_0, " {");

 for (VAR_2 = 0; VAR_2 < VAR_1->values.num; VAR_2++) {
  FUNC_0(VAR_0, "\n\t");
  FUNC_0(VAR_0, VAR_1->states.array[VAR_2]);
  FUNC_0(VAR_0, " = ");
  FUNC_0(VAR_0, VAR_1->values.array[VAR_2]);
  FUNC_0(VAR_0, ";\n");
 }

 FUNC_0(VAR_0, "\n};\n");
 VAR_1->written = 1;
}
