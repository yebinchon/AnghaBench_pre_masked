
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int open_flags; } ;
struct TYPE_6__ {int pbData; } ;
struct TYPE_8__ {int prov; TYPE_2__ base; int hash; TYPE_1__ data; } ;
typedef TYPE_3__* HCRYPTMSG ;
typedef TYPE_3__ CHashEncodeMsg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(HCRYPTMSG VAR_1)
{
    CHashEncodeMsg *VAR_2 = VAR_1;

    FUNC_1(VAR_2->data.pbData);
    FUNC_0(VAR_2->hash);
    if (VAR_2->base.open_flags & VAR_0)
        FUNC_2(VAR_2->prov, 0);
}
