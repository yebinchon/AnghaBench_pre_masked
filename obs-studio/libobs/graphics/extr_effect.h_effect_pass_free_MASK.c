
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_effect_pass {int pixelshader; int vertshader; int pixelshader_params; int vertshader_params; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct gs_effect_pass *VAR_0)
{
 FUNC_0(VAR_0->name);
 FUNC_1(VAR_0->vertshader_params);
 FUNC_1(VAR_0->pixelshader_params);

 FUNC_2(VAR_0->vertshader);
 FUNC_2(VAR_0->pixelshader);
}
