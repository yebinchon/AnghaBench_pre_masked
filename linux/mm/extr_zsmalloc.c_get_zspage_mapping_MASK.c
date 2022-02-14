
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {scalar_t__ magic; int fullness; unsigned int class; } ;
typedef enum fullness_group { ____Placeholder_fullness_group } fullness_group ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct zspage *VAR_1,
    unsigned int *VAR_2,
    enum fullness_group *VAR_3)
{
 FUNC_0(VAR_1->magic != VAR_0);

 *VAR_3 = VAR_1->fullness;
 *VAR_2 = VAR_1->class;
}
