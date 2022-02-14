
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_access_info {int access_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 char const* FUNC_1 (struct kasan_access_info*) ;
 char const* FUNC_2 (struct kasan_access_info*) ;

const char *FUNC_3(struct kasan_access_info *VAR_0)
{
 if (FUNC_0(VAR_0->access_addr))
  return FUNC_1(VAR_0);
 return FUNC_2(VAR_0);
}
