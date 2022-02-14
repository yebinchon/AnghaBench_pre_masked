
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int upper; int lower; } ;
typedef TYPE_1__ RANGE ;


 char const* FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static inline const char* FUNC_1(const RANGE *VAR_0)
{
    if (!VAR_0) return "(null)";
    return FUNC_0("[%d, %d]", VAR_0->lower, VAR_0->upper);
}
