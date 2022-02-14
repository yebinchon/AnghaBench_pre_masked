
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wYear; int wMonth; } ;
typedef TYPE_1__ SYSTEMTIME ;



__attribute__((used)) static inline int FUNC_0(const SYSTEMTIME *VAR_0, const SYSTEMTIME *VAR_1)
{
    return (VAR_1->wYear - VAR_0->wYear)*12 + VAR_1->wMonth - VAR_0->wMonth;
}
