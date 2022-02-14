
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int id; } ;
struct test_obj_rhl {TYPE_1__ value; } ;



__attribute__((used)) static u32 FUNC_0(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct test_obj_rhl *VAR_3 = VAR_0;

 return (VAR_3->value.id % 10);
}
