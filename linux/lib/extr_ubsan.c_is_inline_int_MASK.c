
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_descriptor {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct type_descriptor*) ;
 int FUNC_2 (struct type_descriptor*) ;

__attribute__((used)) static bool FUNC_3(struct type_descriptor *VAR_0)
{
 unsigned VAR_1 = sizeof(unsigned long)*8;
 unsigned VAR_2 = FUNC_1(VAR_0);

 FUNC_0(!FUNC_2(VAR_0));

 return VAR_2 <= VAR_1;
}
