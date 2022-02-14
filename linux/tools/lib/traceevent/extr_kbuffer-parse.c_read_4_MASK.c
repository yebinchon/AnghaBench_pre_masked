
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {unsigned int (* read_4 ) (void*) ;} ;


 unsigned int FUNC_0 (void*) ;

__attribute__((used)) static unsigned int FUNC_1(struct kbuffer *VAR_0, void *VAR_1)
{
 return VAR_0->read_4(VAR_1);
}
