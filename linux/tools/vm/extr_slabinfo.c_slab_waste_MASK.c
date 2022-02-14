
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {int objects; int object_size; } ;


 unsigned long FUNC_0 (struct slabinfo*) ;

__attribute__((used)) static unsigned long FUNC_1(struct slabinfo *VAR_0)
{
 return FUNC_0(VAR_0) - VAR_0->objects * VAR_0->object_size;
}
