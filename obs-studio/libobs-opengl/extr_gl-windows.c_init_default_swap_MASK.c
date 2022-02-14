
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdc; } ;
struct gl_platform {TYPE_1__ window; } ;
typedef int gs_device_t ;
typedef int PIXELFORMATDESCRIPTOR ;


 int FUNC_0 (int ,int,int *) ;

__attribute__((used)) static bool FUNC_1(struct gl_platform *VAR_0, gs_device_t *VAR_1,
         int VAR_2, PIXELFORMATDESCRIPTOR *VAR_3)
{
 if (!FUNC_0(VAR_0->window.hdc, VAR_2, VAR_3))
  return 0;

 return 1;
}
