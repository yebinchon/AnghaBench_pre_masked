
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIRequest ;
struct TYPE_5__ {TYPE_1__* nschannel; int nscontext; scalar_t__ nslistener; } ;
typedef TYPE_2__ nsChannelBSC ;
struct TYPE_4__ {int nsIHttpChannel_iface; scalar_t__ load_group; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;

 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;

 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,int *,int *,int ) ;
 int FUNC_4 (scalar_t__,int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(nsChannelBSC *VAR_3, HRESULT VAR_4)
{
    nsresult VAR_5, VAR_6;

    switch(VAR_4) {
    case 128:
        VAR_6 = VAR_2;
        break;
    case 129:
        VAR_6 = VAR_0;
        break;
    default:
        VAR_6 = VAR_1;
    }

    if(VAR_3->nslistener) {
        VAR_5 = FUNC_4(VAR_3->nslistener,
                 (nsIRequest*)&VAR_3->nschannel->nsIHttpChannel_iface, VAR_3->nscontext,
                 VAR_6);
        if(FUNC_1(VAR_5))
            FUNC_2("OnStopRequest failed: %08x\n", VAR_5);
    }

    if(VAR_3->nschannel && VAR_3->nschannel->load_group) {
        VAR_5 = FUNC_3(VAR_3->nschannel->load_group,
                (nsIRequest*)&VAR_3->nschannel->nsIHttpChannel_iface, ((void*)0), VAR_6);
        if(FUNC_1(VAR_5))
            FUNC_0("RemoveRequest failed: %08x\n", VAR_5);
    }
}
