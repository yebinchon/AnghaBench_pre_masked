
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int parsed_config_file ;
typedef int VARIANT ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_3__ ISAXContentHandler_iface; TYPE_2__ ISAXErrorHandler_iface; int * result; scalar_t__ statenum; int * states; } ;
typedef int LPVOID ;
typedef int ISAXXMLReader ;
typedef int HRESULT ;
typedef TYPE_1__ ConfigFileHandler ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_9(VARIANT VAR_8, parsed_config_file *VAR_9)
{
    ISAXXMLReader *VAR_10;
    ConfigFileHandler *VAR_11;
    HRESULT VAR_12;

    VAR_11 = FUNC_2(FUNC_1(), 0, sizeof(ConfigFileHandler));
    if (!VAR_11)
        return VAR_4;

    VAR_11->ISAXContentHandler_iface.lpVtbl = &VAR_3;
    VAR_11->ISAXErrorHandler_iface.lpVtbl = &VAR_2;
    VAR_11->ref = 1;
    VAR_11->states[0] = VAR_6;
    VAR_11->statenum = 0;
    VAR_11->result = VAR_9;

    VAR_12 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_5, (LPVOID*)&VAR_10);

    if (FUNC_8(VAR_12))
    {
        VAR_12 = FUNC_6(VAR_10, &VAR_11->ISAXContentHandler_iface);

        if (FUNC_8(VAR_12))
            VAR_12 = FUNC_7(VAR_10, &VAR_11->ISAXErrorHandler_iface);

        if (FUNC_8(VAR_12))
            VAR_12 = FUNC_5(VAR_10, VAR_8);

        FUNC_4(VAR_10);
    }

    FUNC_3(&VAR_11->ISAXContentHandler_iface);

    return VAR_7;
}
