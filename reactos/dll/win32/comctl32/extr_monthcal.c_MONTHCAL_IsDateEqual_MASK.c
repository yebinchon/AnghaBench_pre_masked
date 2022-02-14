
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wYear; scalar_t__ wMonth; scalar_t__ wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(const SYSTEMTIME *VAR_0, const SYSTEMTIME *VAR_1)
{
  return (VAR_0->wYear == VAR_1->wYear) && (VAR_0->wMonth == VAR_1->wMonth) &&
         (VAR_0->wDay == VAR_1->wDay);
}
