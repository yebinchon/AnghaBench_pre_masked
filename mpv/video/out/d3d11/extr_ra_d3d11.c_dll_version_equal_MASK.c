
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dll_version {scalar_t__ major; scalar_t__ minor; scalar_t__ build; scalar_t__ revision; } ;



__attribute__((used)) static bool FUNC_0(struct dll_version VAR_0, struct dll_version VAR_1)
{
    return VAR_0.major == VAR_1.major &&
           VAR_0.minor == VAR_1.minor &&
           VAR_0.build == VAR_1.build &&
           VAR_0.revision == VAR_1.revision;
}
