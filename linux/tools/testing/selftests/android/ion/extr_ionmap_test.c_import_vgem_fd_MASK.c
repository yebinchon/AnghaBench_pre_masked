
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_prime_handle {int fd; scalar_t__ handle; scalar_t__ flags; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct drm_prime_handle*) ;

int FUNC_1(int VAR_1, int VAR_2, uint32_t *VAR_3)
{
 struct drm_prime_handle VAR_4 = { 0 };
 int VAR_5;

 VAR_4.fd = VAR_2;
 VAR_4.flags = 0;
 VAR_4.handle = 0;

 VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (VAR_5 == 0)
  *VAR_3 = VAR_4.handle;
 return VAR_5;
}
