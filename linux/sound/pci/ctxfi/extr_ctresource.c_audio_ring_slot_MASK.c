
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc {int conj; size_t type; } ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct rsc *VAR_1)
{
    return (VAR_1->conj << 4) + VAR_0[VAR_1->type];
}
