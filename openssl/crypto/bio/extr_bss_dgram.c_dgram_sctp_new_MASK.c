
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pr_policy; } ;
struct TYPE_7__ {TYPE_1__ prinfo; } ;
typedef TYPE_2__ bio_dgram_sctp_data ;
struct TYPE_8__ {scalar_t__ flags; TYPE_2__* ptr; scalar_t__ num; scalar_t__ init; } ;
typedef TYPE_3__ BIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(BIO *VAR_3)
{
    bio_dgram_sctp_data *VAR_4 = ((void*)0);

    VAR_3->init = 0;
    VAR_3->num = 0;
    if ((VAR_4 = FUNC_1(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }



    VAR_3->ptr = VAR_4;

    VAR_3->flags = 0;
    return 1;
}
