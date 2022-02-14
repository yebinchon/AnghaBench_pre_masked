
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user; int (* unlock ) (int ,int) ;} ;
struct TYPE_6__ {TYPE_1__ locks; } ;
typedef TYPE_2__ fz_context ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void
FUNC_2(fz_context *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_0->locks.unlock(VAR_0->locks.user, VAR_1);
}
