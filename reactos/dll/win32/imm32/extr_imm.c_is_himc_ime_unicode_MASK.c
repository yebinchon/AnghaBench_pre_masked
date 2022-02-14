
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* immKbd; } ;
struct TYPE_5__ {int fdwProperty; } ;
struct TYPE_6__ {TYPE_1__ imeInfo; } ;
typedef TYPE_3__ InputContextData ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const InputContextData *VAR_1)
{
    return !!(VAR_1->immKbd->imeInfo.fdwProperty & VAR_0);
}
