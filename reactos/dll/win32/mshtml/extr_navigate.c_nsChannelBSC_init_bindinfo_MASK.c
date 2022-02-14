
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int request_data; } ;
struct TYPE_6__ {TYPE_1__ bsc; TYPE_3__* nschannel; } ;
typedef TYPE_2__ nsChannelBSC ;
struct TYPE_7__ {int request_headers; int post_data_contains_headers; scalar_t__ post_data_stream; } ;
typedef TYPE_3__ nsChannel ;
typedef int HRESULT ;
typedef int BSCallback ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(BSCallback *VAR_1)
{
    nsChannelBSC *VAR_2 = FUNC_1(VAR_1);
    nsChannel *VAR_3 = VAR_2->nschannel;
    HRESULT VAR_4;

    if(VAR_3 && VAR_3->post_data_stream) {
        VAR_4 = FUNC_2(VAR_3->post_data_stream, VAR_3->post_data_contains_headers,
                &VAR_3->request_headers, &VAR_2->bsc.request_data);
        if(FUNC_0(VAR_4))
            return VAR_4;
    }

    return VAR_0;
}
