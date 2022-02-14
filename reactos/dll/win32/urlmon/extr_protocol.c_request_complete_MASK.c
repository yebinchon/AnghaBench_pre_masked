
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int data ;
struct TYPE_13__ {int dwError; scalar_t__ dwResult; } ;
struct TYPE_12__ {int dwState; void* pData; } ;
struct TYPE_11__ {int flags; int bindf; int protocol_sink; scalar_t__ request; } ;
typedef TYPE_1__ Protocol ;
typedef TYPE_2__ PROTOCOLDATA ;
typedef TYPE_3__ INTERNET_ASYNC_RESULT ;
typedef scalar_t__ HINTERNET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*,TYPE_1__*,...) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(Protocol *VAR_6, INTERNET_ASYNC_RESULT *VAR_7)
{
    PROTOCOLDATA VAR_8;

    FUNC_1("(%p)->(%p)\n", VAR_6, VAR_7);


    FUNC_3(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.dwState = 0xf1000000;

    if(VAR_7->dwResult) {
        VAR_6->flags |= VAR_5;

        if(!VAR_6->request) {
            FUNC_1("setting request handle %p\n", (HINTERNET)VAR_7->dwResult);
            VAR_6->request = (HINTERNET)VAR_7->dwResult;
        }

        if(VAR_6->flags & VAR_4)
            VAR_8.pData = FUNC_2(VAR_2);
        else
            VAR_8.pData = FUNC_2(VAR_1);

    }else {
        VAR_6->flags |= VAR_3;
        VAR_8.pData = FUNC_2(VAR_7->dwError);
    }

    if (VAR_6->bindf & VAR_0)
        FUNC_0(VAR_6->protocol_sink, &VAR_8);
    else
        FUNC_4(VAR_6, &VAR_8);
}
