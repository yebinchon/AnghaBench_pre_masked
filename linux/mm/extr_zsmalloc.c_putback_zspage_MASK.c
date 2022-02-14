
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct size_class {int index; } ;
typedef enum fullness_group { ____Placeholder_fullness_group } fullness_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct size_class*,struct zspage*) ;
 int FUNC_2 (struct size_class*,struct zspage*,int) ;
 int FUNC_3 (struct zspage*) ;
 int FUNC_4 (struct zspage*,int ,int) ;

__attribute__((used)) static enum fullness_group FUNC_5(struct size_class *VAR_0,
   struct zspage *VAR_1)
{
 enum fullness_group VAR_2;

 FUNC_0(FUNC_3(VAR_1));

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_4(VAR_1, VAR_0->index, VAR_2);

 return VAR_2;
}
