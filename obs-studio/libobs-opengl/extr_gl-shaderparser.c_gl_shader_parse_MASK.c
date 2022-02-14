
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shader_parser {int parser; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct gl_shader_parser*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 char* FUNC_4 (int *) ;

bool FUNC_5(struct gl_shader_parser *VAR_1, const char *VAR_2,
       const char *VAR_3)
{
 bool VAR_4 = FUNC_3(&VAR_1->parser, VAR_2, VAR_3);
 char *VAR_5 = FUNC_4(&VAR_1->parser);
 if (VAR_5) {
  FUNC_1(VAR_0, "Shader parser errors/warnings:\n%s\n", VAR_5);
  FUNC_0(VAR_5);
 }

 if (VAR_4)
  VAR_4 = FUNC_2(VAR_1);

 return VAR_4;
}
