
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pass_shaderparam {int sparam; int eparam; } ;
struct effect_parser {int effect; } ;
struct dstr {int array; } ;
struct darray {size_t num; } ;
typedef int gs_shader_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int,struct darray*,size_t) ;
 int FUNC_2 (int,struct darray*,size_t) ;
 int FUNC_3 (int ,int ,size_t,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static bool FUNC_6(struct effect_parser *VAR_1,
      struct darray *VAR_2,
      struct darray *VAR_3,
      gs_shader_t *VAR_4)
{
 size_t VAR_5;
 FUNC_2(sizeof(struct pass_shaderparam), VAR_2,
        VAR_3->num);

 for (VAR_5 = 0; VAR_5 < VAR_2->num; VAR_5++) {
  struct dstr *VAR_6;
  struct pass_shaderparam *VAR_7;

  VAR_6 = FUNC_1(sizeof(struct dstr), VAR_3, VAR_5);
  VAR_7 = FUNC_1(sizeof(struct pass_shaderparam),
        VAR_2, VAR_5);

  VAR_7->eparam = FUNC_4(VAR_1->effect,
           VAR_6->array);
  VAR_7->sparam =
   FUNC_5(VAR_4, VAR_6->array);





  if (!VAR_7->sparam) {
   FUNC_0(VAR_0, "Effect shader parameter not found");
   return 0;
  }
 }

 return 1;
}
