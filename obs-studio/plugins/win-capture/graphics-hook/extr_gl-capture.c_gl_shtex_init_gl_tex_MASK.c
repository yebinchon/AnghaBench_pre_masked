
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gl_dxobj; int texture; int d3d11_tex; int gl_device; int d3d11_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline bool FUNC_5(void)
{
 VAR_2.gl_device = FUNC_3(VAR_2.d3d11_device);
 if (!VAR_2.gl_device) {
  FUNC_2("gl_shtex_init_gl_tex: failed to open device");
  return 0;
 }

 FUNC_0(1, &VAR_2.texture);
 if (FUNC_1("gl_shtex_init_gl_tex", "failed to generate texture")) {
  return 0;
 }

 VAR_2.gl_dxobj = FUNC_4(VAR_2.gl_device, VAR_2.d3d11_tex,
      VAR_2.texture, VAR_0,
      VAR_1);
 if (!VAR_2.gl_dxobj) {
  FUNC_2("gl_shtex_init_gl_tex: failed to register object");
  return 0;
 }

 return 1;
}
