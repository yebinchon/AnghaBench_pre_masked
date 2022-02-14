
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extension_cb; int time_cb; int serial_cb; int signer_md; } ;
typedef TYPE_1__ TS_RESP_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

TS_RESP_CTX *FUNC_3(void)
{
    TS_RESP_CTX *VAR_5;

    if ((VAR_5 = FUNC_1(sizeof(*VAR_5))) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return ((void*)0);
    }

    VAR_5->signer_md = FUNC_0();

    VAR_5->serial_cb = VAR_3;
    VAR_5->time_cb = VAR_4;
    VAR_5->extension_cb = VAR_2;

    return VAR_5;
}
