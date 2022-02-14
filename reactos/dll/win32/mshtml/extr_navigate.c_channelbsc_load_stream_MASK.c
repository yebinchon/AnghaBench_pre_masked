
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int IBindStatusCallback_iface; TYPE_5__* window; } ;
struct TYPE_12__ {TYPE_2__ bsc; TYPE_3__* nschannel; } ;
typedef TYPE_4__ nsChannelBSC ;
struct TYPE_9__ {int outer_window; } ;
struct TYPE_13__ {TYPE_1__ base; TYPE_4__* bscallback; } ;
struct TYPE_11__ {int content_type; } ;
typedef int IStream ;
typedef int IMoniker ;
typedef TYPE_5__ HTMLInnerWindow ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (int ,int *,int ) ;

HRESULT FUNC_8(HTMLInnerWindow *VAR_4, IMoniker *VAR_5, IStream *VAR_6)
{
    nsChannelBSC *VAR_7 = VAR_4->bscallback;
    HRESULT VAR_8 = VAR_3;

    if(!VAR_7->nschannel) {
        FUNC_0("NULL nschannel\n");
        return VAR_1;
    }

    VAR_7->nschannel->content_type = FUNC_5("text/html");
    if(!VAR_7->nschannel->content_type)
        return VAR_2;

    FUNC_7(VAR_4->base.outer_window, VAR_5, 0);

    VAR_7->bsc.window = VAR_4;
    if(VAR_6)
        VAR_8 = FUNC_6(VAR_7, VAR_6);
    if(FUNC_3(VAR_8))
        VAR_8 = FUNC_4(VAR_7);
    if(FUNC_1(VAR_8))
        FUNC_2(&VAR_7->bsc.IBindStatusCallback_iface, VAR_8,
                VAR_0);

    return VAR_8;
}
