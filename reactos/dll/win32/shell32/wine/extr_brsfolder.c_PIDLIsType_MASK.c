
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef scalar_t__ PIDLTYPE ;
typedef TYPE_1__* LPPIDLDATA ;
typedef int LPCITEMIDLIST ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline BOOL FUNC_1(LPCITEMIDLIST VAR_1, PIDLTYPE VAR_2)
{
    LPPIDLDATA VAR_3 = FUNC_0(VAR_1);
    if (!VAR_3)
        return VAR_0;
    return (VAR_3->type == VAR_2);
}
