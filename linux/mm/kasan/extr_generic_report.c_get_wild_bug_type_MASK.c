
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_access_info {scalar_t__ access_addr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static const char *FUNC_0(struct kasan_access_info *VAR_2)
{
 const char *VAR_3 = "unknown-crash";

 if ((unsigned long)VAR_2->access_addr < VAR_0)
  VAR_3 = "null-ptr-deref";
 else if ((unsigned long)VAR_2->access_addr < VAR_1)
  VAR_3 = "user-memory-access";
 else
  VAR_3 = "wild-memory-access";

 return VAR_3;
}
