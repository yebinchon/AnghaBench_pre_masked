
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct gl_platform {int context; int pbuffer; int * display; } ;
struct TYPE_3__ {struct gl_platform* plat; } ;
typedef TYPE_1__ gs_device_t ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct gl_platform*) ;
 int FUNC_5 (int ,char*) ;
 struct gl_platform* FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (struct gl_platform*) ;
 int FUNC_9 (struct gl_platform*) ;
 int FUNC_10 () ;
 int * FUNC_11 () ;
 int VAR_2 ;

extern struct gl_platform *FUNC_12(gs_device_t *VAR_3,
           uint32_t VAR_4)
{



 struct gl_platform *VAR_5 = FUNC_6(sizeof(struct gl_platform));
 Display *VAR_6 = FUNC_11();

 if (!VAR_6) {
  goto fail_display_open;
 }

 FUNC_3(VAR_6, VAR_1);
 FUNC_2(VAR_2);


 VAR_3->plat = VAR_5;

 VAR_5->display = VAR_6;

 if (!FUNC_8(VAR_5)) {
  FUNC_5(VAR_0, "Failed to create context!");
  goto fail_context_create;
 }

 if (!FUNC_7(VAR_5->display, VAR_5->pbuffer, VAR_5->pbuffer,
       VAR_5->context)) {
  FUNC_5(VAR_0, "Failed to make context current.");
  goto fail_make_current;
 }

 if (!FUNC_10()) {
  FUNC_5(VAR_0, "Failed to load OpenGL entry functions.");
  goto fail_load_gl;
 }

 goto success;

fail_make_current:
 FUNC_9(VAR_5);
fail_context_create:
fail_load_gl:
 FUNC_1(VAR_6);
fail_display_open:
 FUNC_4(VAR_5);
 VAR_5 = ((void*)0);
success:
 FUNC_0(VAR_4);
 return VAR_5;
}
