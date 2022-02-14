
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gs_effect_technique {int name; } ;
struct darray {int num; int array; } ;
struct TYPE_12__ {struct darray da; } ;
struct TYPE_10__ {struct darray da; } ;
struct gs_effect_pass {TYPE_6__ pixelshader_params; int * pixelshader; TYPE_4__ vertshader_params; int * vertshader; } ;
struct TYPE_11__ {int da; } ;
struct TYPE_9__ {int da; } ;
struct ep_pass {TYPE_5__ fragment_program; TYPE_3__ vertex_program; } ;
struct TYPE_7__ {int file; } ;
struct TYPE_8__ {TYPE_1__ lex; } ;
struct effect_parser {TYPE_2__ cfp; } ;
struct dstr {int array; } ;
typedef int gs_shader_t ;
typedef enum gs_shader_type { ____Placeholder_gs_shader_type } gs_shader_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct darray*) ;
 int FUNC_3 (struct darray*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct dstr*,char*) ;
 int FUNC_7 (struct dstr*,char*,int ,unsigned int) ;
 int FUNC_8 (struct dstr*,int ) ;
 int FUNC_9 (struct dstr*) ;
 int FUNC_10 (struct dstr*) ;
 int FUNC_11 (struct effect_parser*,struct darray*,struct darray*,int *) ;
 int FUNC_12 (struct effect_parser*,struct dstr*,int *,struct darray*) ;
 int * FUNC_13 (int ,int ,int *) ;
 int * FUNC_14 (int ,int ,int *) ;

__attribute__((used)) static inline bool FUNC_15(struct effect_parser *VAR_4,
       struct gs_effect_technique *VAR_5,
       struct gs_effect_pass *VAR_6,
       struct ep_pass *VAR_7,
       size_t VAR_8,
       enum gs_shader_type VAR_9)
{
 struct dstr VAR_10;
 struct dstr VAR_11;
 struct darray VAR_12;
 struct darray *VAR_13 = ((void*)0);
 gs_shader_t *VAR_14 = ((void*)0);
 bool VAR_15 = 1;

 FUNC_10(&VAR_10);
 FUNC_3(&VAR_12);
 FUNC_10(&VAR_11);

 FUNC_8(&VAR_11, VAR_4->cfp.lex.file);
 if (VAR_9 == VAR_1)
  FUNC_6(&VAR_11, " (Vertex ");
 else if (VAR_9 == VAR_0)
  FUNC_6(&VAR_11, " (Pixel ");



 FUNC_0(VAR_8 <= VAR_3);
 FUNC_7(&VAR_11, "shader, technique %s, pass %u)", VAR_5->name,
    (unsigned)VAR_8);

 if (VAR_9 == VAR_1) {
  FUNC_12(VAR_4, &VAR_10,
        &VAR_7->vertex_program.da, &VAR_12);

  VAR_6->vertshader = FUNC_14(VAR_10.array,
         VAR_11.array, ((void*)0));

  VAR_14 = VAR_6->vertshader;
  VAR_13 = &VAR_6->vertshader_params.da;
 } else if (VAR_9 == VAR_0) {
  FUNC_12(VAR_4, &VAR_10,
        &VAR_7->fragment_program.da,
        &VAR_12);

  VAR_6->pixelshader = FUNC_13(VAR_10.array,
         VAR_11.array, ((void*)0));

  VAR_14 = VAR_6->pixelshader;
  VAR_13 = &VAR_6->pixelshader_params.da;
 }
 if (VAR_14)
  VAR_15 = FUNC_11(VAR_4, VAR_13,
             &VAR_12, VAR_14);
 else
  VAR_15 = 0;

 FUNC_9(&VAR_11);
 FUNC_5(VAR_12.array, VAR_12.num);
 FUNC_2(&VAR_12);
 FUNC_9(&VAR_10);

 return VAR_15;
}
