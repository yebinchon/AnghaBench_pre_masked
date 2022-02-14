
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {scalar_t__ forward_compatible; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct options *VAR_1, const int VAR_2)
{
    return VAR_1->forward_compatible ? VAR_0 : VAR_2;
}
