
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_attrib {int name; } ;
struct gs_program {int attribs; int obj; } ;
typedef int GLint ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(struct gs_program *VAR_1,
      struct shader_attrib *VAR_2)
{
 GLint VAR_3 = FUNC_2(VAR_1->obj, VAR_2->name);
 if (!FUNC_3("glGetAttribLocation"))
  return 0;

 if (VAR_3 == -1) {
  FUNC_0(VAR_0,
       "glGetAttribLocation: Could not find "
       "attribute '%s'",
       VAR_2->name);
  return 0;
 }

 FUNC_1(VAR_1->attribs, &VAR_3);
 return 1;
}
