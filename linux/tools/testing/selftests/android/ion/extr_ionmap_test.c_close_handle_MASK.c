
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_close {int handle; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct drm_gem_close*) ;

void FUNC_1(int VAR_1, uint32_t VAR_2)
{
 struct drm_gem_close VAR_3 = { 0 };

 VAR_3.handle = VAR_2;
 FUNC_0(VAR_1, VAR_0, &VAR_3);
}
