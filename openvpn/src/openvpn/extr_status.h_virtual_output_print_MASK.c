
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_output {int arg; int (* func ) (int ,unsigned int const,char const*) ;} ;


 int FUNC_0 (int ,unsigned int const,char const*) ;

__attribute__((used)) static inline void
FUNC_1(const struct virtual_output *VAR_0, const unsigned int VAR_1, const char *VAR_2)
{
    (*VAR_0->func)(VAR_0->arg, VAR_1, VAR_2);
}
