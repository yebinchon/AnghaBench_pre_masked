
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fbo_info {int dummy; } ;
typedef int gs_texture_t ;


 struct fbo_info* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static inline struct fbo_info *FUNC_2(gs_texture_t *VAR_0)
{
 uint32_t VAR_1, VAR_2;
 if (!FUNC_1(VAR_0, &VAR_1, &VAR_2))
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
