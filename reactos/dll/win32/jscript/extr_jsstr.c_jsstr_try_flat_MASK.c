
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsstr_t ;
typedef int WCHAR ;
struct TYPE_4__ {int const* buf; } ;
struct TYPE_3__ {int const* buf; } ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline const WCHAR *FUNC_4(jsstr_t *VAR_0)
{
    return FUNC_3(VAR_0) ? FUNC_1(VAR_0)->buf
        : FUNC_2(VAR_0) ? FUNC_0(VAR_0)->buf
        : ((void*)0);
}
