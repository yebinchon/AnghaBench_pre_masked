
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* nsstream; scalar_t__ nscontext; scalar_t__ nslistener; TYPE_1__* nschannel; } ;
typedef TYPE_3__ nsChannelBSC ;
struct TYPE_7__ {int nsIInputStream_iface; } ;
struct TYPE_6__ {int nsIHttpChannel_iface; } ;
typedef int BSCallback ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(BSCallback *VAR_0)
{
    nsChannelBSC *VAR_1 = FUNC_1(VAR_0);

    if(VAR_1->nschannel)
        FUNC_2(&VAR_1->nschannel->nsIHttpChannel_iface);
    if(VAR_1->nslistener)
        FUNC_4(VAR_1->nslistener);
    if(VAR_1->nscontext)
        FUNC_5(VAR_1->nscontext);
    if(VAR_1->nsstream)
        FUNC_3(&VAR_1->nsstream->nsIInputStream_iface);
    FUNC_0(VAR_1);
}
