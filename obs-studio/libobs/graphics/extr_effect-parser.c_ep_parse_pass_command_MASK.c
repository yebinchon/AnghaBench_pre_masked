
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct darray {int dummy; } ;
struct TYPE_4__ {struct darray da; } ;
struct TYPE_3__ {struct darray da; } ;
struct ep_pass {TYPE_2__ fragment_program; TYPE_1__ vertex_program; } ;
struct effect_parser {int cfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int ,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (struct effect_parser*,struct darray*) ;

__attribute__((used)) static int FUNC_7(struct effect_parser *VAR_4, struct ep_pass *VAR_5)
{
 struct darray *VAR_6;

 if (!FUNC_4(&VAR_4->cfp))
  return VAR_2;

 if (FUNC_5(&VAR_4->cfp, "vertex_shader") ||
     FUNC_5(&VAR_4->cfp, "vertex_program")) {
  VAR_6 = &VAR_5->vertex_program.da;

 } else if (FUNC_5(&VAR_4->cfp, "pixel_shader") ||
     FUNC_5(&VAR_4->cfp, "pixel_program")) {
  VAR_6 = &VAR_5->fragment_program.da;

 } else {
  FUNC_1(&VAR_4->cfp);
  if (!FUNC_2(&VAR_4->cfp, ";", "}"))
   return VAR_2;
  return VAR_1;
 }

 if (FUNC_3(&VAR_4->cfp, "=", ";", "}") != VAR_3)
  return VAR_1;

 if (!FUNC_4(&VAR_4->cfp))
  return VAR_2;
 if (FUNC_5(&VAR_4->cfp, "compile")) {
  FUNC_0(&VAR_4->cfp, "compile keyword not necessary",
       VAR_0, ((void*)0), ((void*)0), ((void*)0));
  if (!FUNC_4(&VAR_4->cfp))
   return VAR_2;
 }

 return FUNC_6(VAR_4, VAR_6);
}
