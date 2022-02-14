
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_platform {int pbuffer; int * display; scalar_t__ context; } ;
typedef int GLXFBConfig ;
typedef scalar_t__ GLXContext ;
typedef int Display ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (int *,int ,int ,int*) ;
 scalar_t__ FUNC_5 (int *,int ,int *,int,int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct gl_platform *VAR_5)
{
 Display *VAR_6 = VAR_5->display;
 int VAR_7 = 0;
 GLXFBConfig *VAR_8 = ((void*)0);
 GLXContext VAR_9;
 bool VAR_10 = 0;

 if (!VAR_0) {
  FUNC_3(VAR_1, "ARB_GLX_create_context not supported!");
  return 0;
 }

 VAR_8 = FUNC_4(VAR_6, FUNC_0(VAR_6),
       VAR_4, &VAR_7);
 if (!VAR_8) {
  FUNC_3(VAR_1, "Failed to create OpenGL frame buffer config");
  return 0;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_8[0], ((void*)0), 1,
          VAR_2);
 if (!VAR_9) {
  FUNC_3(VAR_1, "Failed to create OpenGL context.");
  goto error;
 }

 VAR_5->context = VAR_9;
 VAR_5->display = VAR_6;

 VAR_5->pbuffer =
  FUNC_6(VAR_6, VAR_8[0], VAR_3);
 if (!VAR_5->pbuffer) {
  FUNC_3(VAR_1, "Failed to create OpenGL pbuffer");
  goto error;
 }

 VAR_10 = 1;

error:
 FUNC_1(VAR_8);
 FUNC_2(VAR_6, 0);
 return VAR_10;
}
