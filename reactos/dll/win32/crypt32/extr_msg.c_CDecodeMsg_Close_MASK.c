
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {int info; } ;
struct TYPE_16__ {int pbData; } ;
struct TYPE_15__ {int pbData; } ;
struct TYPE_12__ {int pbData; } ;
struct TYPE_13__ {TYPE_2__ content; int data; scalar_t__ crypt_prov; } ;
struct TYPE_14__ {TYPE_9__ signed_data; TYPE_3__ enveloped_data; int hash; } ;
struct TYPE_11__ {int open_flags; } ;
struct TYPE_17__ {int type; int properties; TYPE_6__ detached_data; TYPE_5__ msg_data; TYPE_4__ u; scalar_t__ crypt_prov; TYPE_1__ base; } ;
typedef TYPE_7__* HCRYPTMSG ;
typedef TYPE_7__ CDecodeMsg ;


 int VAR_0 ;



 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(HCRYPTMSG VAR_1)
{
    CDecodeMsg *VAR_2 = VAR_1;

    if (VAR_2->crypt_prov && VAR_2->base.open_flags & VAR_0)
        FUNC_4(VAR_2->crypt_prov, 0);
    switch (VAR_2->type)
    {
    case 129:
        if (VAR_2->u.hash)
            FUNC_2(VAR_2->u.hash);
        break;
    case 130:
        if (VAR_2->u.enveloped_data.crypt_prov)
            FUNC_4(VAR_2->u.enveloped_data.crypt_prov, 0);
        FUNC_5(VAR_2->u.enveloped_data.data);
        FUNC_3(VAR_2->u.enveloped_data.content.pbData);
        break;
    case 128:
        if (VAR_2->u.signed_data.info)
        {
            FUNC_5(VAR_2->u.signed_data.info);
            FUNC_0(&VAR_2->u.signed_data);
        }
        break;
    }
    FUNC_3(VAR_2->msg_data.pbData);
    FUNC_3(VAR_2->detached_data.pbData);
    FUNC_1(VAR_2->properties);
}
