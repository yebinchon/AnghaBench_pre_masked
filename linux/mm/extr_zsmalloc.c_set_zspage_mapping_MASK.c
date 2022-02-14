
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {unsigned int class; int fullness; } ;
typedef enum fullness_group { ____Placeholder_fullness_group } fullness_group ;



__attribute__((used)) static void FUNC_0(struct zspage *VAR_0,
    unsigned int VAR_1,
    enum fullness_group VAR_2)
{
 VAR_0->class = VAR_1;
 VAR_0->fullness = VAR_2;
}
