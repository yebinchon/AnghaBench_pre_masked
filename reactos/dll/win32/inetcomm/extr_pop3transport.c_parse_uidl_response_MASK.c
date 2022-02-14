
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int state; char* ptr; char* response; void* valid_info; int type; } ;
struct TYPE_5__ {char* pszUidl; scalar_t__ dwPopId; } ;
typedef TYPE_1__ POP3UIDL ;
typedef TYPE_2__ POP3Transport ;
typedef int HRESULT ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,scalar_t__*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static HRESULT FUNC_3(POP3Transport *VAR_6, POP3UIDL *VAR_7)
{
    char *VAR_8;

    VAR_7->dwPopId = 0;
    VAR_7->pszUidl = ((void*)0);
    switch (VAR_6->state)
    {
    case 128:
        if (VAR_6->type == VAR_1)
        {
            if ((VAR_8 = FUNC_2(VAR_6->ptr, ' ')))
            {
                while (*VAR_8 == ' ') VAR_8++;
                FUNC_1(VAR_8, "%u", &VAR_7->dwPopId);
                if ((VAR_8 = FUNC_2(VAR_8, ' ')))
                {
                    while (*VAR_8 == ' ') VAR_8++;
                    VAR_7->pszUidl = VAR_8;
                    VAR_6->valid_info = VAR_5;
                }
             }
             VAR_6->state = VAR_2;
             return VAR_4;
        }
        VAR_6->state = 129;
        return VAR_4;

    case 129:
        if (VAR_6->response[0] == '.' && !VAR_6->response[1])
        {
            VAR_6->valid_info = VAR_0;
            VAR_6->state = VAR_2;
            return VAR_4;
        }
        FUNC_1(VAR_6->response, "%u", &VAR_7->dwPopId);
        if ((VAR_8 = FUNC_2(VAR_6->response, ' ')))
        {
            while (*VAR_8 == ' ') VAR_8++;
            VAR_7->pszUidl = VAR_8;
            VAR_6->valid_info = VAR_5;
            return VAR_4;
        }

    default:
        FUNC_0("parse error\n");
        VAR_6->state = VAR_2;
        return VAR_3;
    }
}
