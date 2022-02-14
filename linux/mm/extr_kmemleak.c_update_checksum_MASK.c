
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kmemleak_object {scalar_t__ checksum; int size; scalar_t__ pointer; } ;


 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct kmemleak_object *VAR_0)
{
 u32 VAR_1 = VAR_0->checksum;

 FUNC_1();
 VAR_0->checksum = FUNC_0(0, (void *)VAR_0->pointer, VAR_0->size);
 FUNC_2();

 return VAR_0->checksum != VAR_1;
}
