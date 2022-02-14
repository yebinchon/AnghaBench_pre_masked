
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {unsigned long long (* read_8 ) (void*) ;} ;


 unsigned long long FUNC_0 (void*) ;

__attribute__((used)) static unsigned long long FUNC_1(struct kbuffer *VAR_0, void *VAR_1)
{
 return VAR_0->read_8(VAR_1);
}
