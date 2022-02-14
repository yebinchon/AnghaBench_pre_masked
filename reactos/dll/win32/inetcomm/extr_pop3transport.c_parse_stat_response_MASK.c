
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cbMessages; scalar_t__ cMessages; } ;
struct TYPE_5__ {int state; int valid_info; int ptr; } ;
typedef TYPE_1__ POP3Transport ;
typedef TYPE_2__ POP3STAT ;
typedef int HRESULT ;


 void* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,scalar_t__*,scalar_t__*) ;
 char* FUNC_2 (int ,char) ;

__attribute__((used)) static HRESULT FUNC_3(POP3Transport *VAR_4, POP3STAT *VAR_5)
{
    char *VAR_6;

    VAR_5->cMessages = 0;
    VAR_5->cbMessages = 0;
    switch (VAR_4->state)
    {
    case 128:
        if ((VAR_6 = FUNC_2(VAR_4->ptr, ' ')))
        {
            while (*VAR_6 == ' ') VAR_6++;
            FUNC_1(VAR_6, "%u %u", &VAR_5->cMessages, &VAR_5->cbMessages);
            VAR_4->valid_info = VAR_3;
            VAR_4->state = VAR_0;
            return VAR_2;
        }

    default:
        FUNC_0("parse error\n");
        VAR_4->state = VAR_0;
        return VAR_1;
    }
}
