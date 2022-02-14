
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_attrib {int index; int type; } ;
struct gs_vertex_buffer {int dummy; } ;
typedef int GLuint ;
typedef int GLint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gs_vertex_buffer*,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static bool FUNC_6(struct shader_attrib *VAR_3,
      struct gs_vertex_buffer *VAR_4, GLint VAR_5)
{
 GLenum VAR_6;
 GLint VAR_7;
 GLuint VAR_8;
 bool VAR_9 = 1;

 VAR_8 = FUNC_1(VAR_4, VAR_3->type, VAR_3->index, &VAR_7, &VAR_6);
 if (!VAR_8) {
  FUNC_0(VAR_2, "Vertex buffer does not have the required "
    "inputs for vertex shader");
  return 0;
 }

 if (!FUNC_4(VAR_0, VAR_8))
  return 0;

 FUNC_3(VAR_5, VAR_7, VAR_6, VAR_1, 0, 0);
 if (!FUNC_5("glVertexAttribPointer"))
  VAR_9 = 0;

 FUNC_2(VAR_5);
 if (!FUNC_5("glEnableVertexAttribArray"))
  VAR_9 = 0;

 if (!FUNC_4(VAR_0, 0))
  VAR_9 = 0;

 return VAR_9;
}
