
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cb; } ;
struct TYPE_8__ {TYPE_1__ mkid; } ;
typedef TYPE_2__* LPCITEMIDLIST ;
typedef int BOOL ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static inline
BOOL FUNC_1 (LPCITEMIDLIST VAR_0, LPCITEMIDLIST VAR_1)
{
    return (VAR_0->mkid.cb > 0 && !FUNC_0(VAR_0, VAR_1, VAR_0->mkid.cb)) ||
            (!VAR_0->mkid.cb && !VAR_1->mkid.cb);
}
