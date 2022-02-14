
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_object {int fd; } ;
typedef int * drmModePropertyBlobPtr ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_object*,char*,int *) ;

drmModePropertyBlobPtr FUNC_2(struct drm_object *VAR_0, char *VAR_1)
{
   uint64_t VAR_2;

   if (!FUNC_1(VAR_0, VAR_1, &VAR_2)) {
       return FUNC_0(VAR_0->fd, VAR_2);
   }

   return ((void*)0);
}
