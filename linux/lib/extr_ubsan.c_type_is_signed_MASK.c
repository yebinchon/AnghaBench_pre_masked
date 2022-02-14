
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_descriptor {int type_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct type_descriptor*) ;

__attribute__((used)) static bool FUNC_2(struct type_descriptor *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));
 return VAR_0->type_info & 1;
}
