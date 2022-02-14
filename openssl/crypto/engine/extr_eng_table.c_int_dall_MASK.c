
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int funct; int sk; int nid; } ;
struct TYPE_5__ {int arg; int (* cb ) (int ,int ,int ,int ) ;} ;
typedef TYPE_1__ ENGINE_PILE_DOALL ;
typedef TYPE_2__ ENGINE_PILE ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const ENGINE_PILE *VAR_0, ENGINE_PILE_DOALL *VAR_1)
{
    VAR_1->cb(VAR_0->nid, VAR_0->sk, VAR_0->funct, VAR_1->arg);
}
