
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fbo; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static inline bool FUNC_2(void)
{
 FUNC_0(1, &VAR_0.fbo);
 return !FUNC_1("gl_init_fbo", "failed to initialize FBO");
}
