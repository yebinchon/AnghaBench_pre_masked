
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cbSoFar; char* pszLines; int cbLines; void* fBody; void* fHeader; int dwPopId; } ;
struct TYPE_5__ {int state; char* response; void* valid_info; int msgid; } ;
typedef TYPE_1__ POP3Transport ;
typedef TYPE_2__ POP3RETR ;
typedef int HRESULT ;


 void* VAR_0 ;
 void* VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static HRESULT FUNC_2(POP3Transport *VAR_5, POP3RETR *VAR_6)
{
    switch (VAR_5->state)
    {
    case 128:
        VAR_6->fHeader = VAR_0;
        VAR_6->fBody = VAR_0;
        VAR_6->dwPopId = VAR_5->msgid;
        VAR_6->cbSoFar = 0;
        VAR_6->pszLines = VAR_5->response;
        VAR_6->cbLines = 0;

        VAR_5->state = 129;
        VAR_5->valid_info = VAR_0;
        return VAR_3;

    case 129:
    {
        int VAR_7;

        if (VAR_5->response[0] == '.' && !VAR_5->response[1])
        {
            VAR_6->cbLines = VAR_6->cbSoFar;
            VAR_5->state = VAR_1;
            return VAR_3;
        }
        VAR_6->fHeader = VAR_4;
        if (!VAR_5->response[0]) VAR_6->fBody = VAR_4;

        VAR_7 = FUNC_1(VAR_5->response);
        VAR_6->cbSoFar += VAR_7;
        VAR_6->pszLines = VAR_5->response;
        VAR_6->cbLines = VAR_7;

        VAR_5->valid_info = VAR_4;
        return VAR_3;
    }

    default:
        FUNC_0("parse error\n");
        VAR_5->state = VAR_1;
        return VAR_2;
    }
}
