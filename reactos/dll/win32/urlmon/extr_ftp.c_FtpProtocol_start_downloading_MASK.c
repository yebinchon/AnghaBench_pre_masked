
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int content_length; int request; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int Protocol ;
typedef int HRESULT ;
typedef TYPE_2__ FtpProtocol ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(Protocol *VAR_1)
{
    FtpProtocol *VAR_2 = FUNC_3(VAR_1);
    DWORD VAR_3;
    BOOL VAR_4;

    VAR_4 = FUNC_0(VAR_2->base.request, &VAR_3);
    if(VAR_4)
        VAR_2->base.content_length = VAR_3;
    else
        FUNC_2("FtpGetFileSize failed: %d\n", FUNC_1());

    return VAR_0;
}
