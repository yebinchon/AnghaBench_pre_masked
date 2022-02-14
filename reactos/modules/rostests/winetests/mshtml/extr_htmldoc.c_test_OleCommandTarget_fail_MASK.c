
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; int cmdID; scalar_t__ cmdf; } ;
typedef TYPE_1__ OLECMD ;
typedef int IOleCommandTarget ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int,TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int FUNC_7 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(IHTMLDocument2 *VAR_12)
{
    IOleCommandTarget *VAR_13;
    int VAR_14;
    HRESULT VAR_15;

    OLECMD VAR_16[2] = {
        {VAR_7, 0xf0f0},
        {VAR_6+1, 0xf0f0}
    };

    VAR_15 = FUNC_2(VAR_12, &VAR_1, (void**)&VAR_13);
    FUNC_7(VAR_15 == VAR_10, "QueryInterface(IIDIOleCommandTarget failed: %08x\n", VAR_15);
    if(FUNC_1(VAR_15))
        return;

    VAR_15 = FUNC_4(VAR_13, ((void*)0), 0, ((void*)0), ((void*)0));
    FUNC_7(VAR_15 == VAR_10, "QueryStatus failed: %08x\n", VAR_15);

    FUNC_6(VAR_9);
    VAR_15 = FUNC_4(VAR_13, ((void*)0), 2, VAR_16, ((void*)0));
    FUNC_0(VAR_9);

    FUNC_7(VAR_15 == VAR_2,
            "QueryStatus failed: %08x, expected OLECMDERR_E_NOTSUPPORTED\n", VAR_15);
    FUNC_7(VAR_16[1].cmdID == VAR_6+1,
            "cmd[0].cmdID=%d, expected OLECMDID_GETPRINTTEMPLATE+1\n", VAR_16[0].cmdID);
    FUNC_7(VAR_16[1].cmdf == 0, "cmd[0].cmdf=%x, expected 0\n", VAR_16[0].cmdf);
    FUNC_7(VAR_16[0].cmdf == VAR_5,
            "cmd[1].cmdf=%x, expected OLECMDF_SUPPORTED\n", VAR_16[1].cmdf);

    VAR_15 = FUNC_4(VAR_13, &VAR_0, 2, VAR_16, ((void*)0));
    FUNC_7(VAR_15 == VAR_3,
            "QueryStatus failed: %08x, expected OLECMDERR_E_UNKNOWNGROUP\n", VAR_15);

    for(VAR_14=0; VAR_14<VAR_6; VAR_14++) {
        if(!VAR_11[VAR_14]) {
            VAR_15 = FUNC_3(VAR_13, ((void*)0), VAR_8,
                    VAR_4, ((void*)0), ((void*)0));
            FUNC_7(VAR_15 == VAR_2,
                    "Exec failed: %08x, expected OLECMDERR_E_NOTSUPPORTED\n", VAR_15);
        }
    }

    VAR_15 = FUNC_3(VAR_13, ((void*)0), VAR_6+1,
            VAR_4, ((void*)0), ((void*)0));
    FUNC_7(VAR_15 == VAR_2,
            "Exec failed: %08x, expected OLECMDERR_E_NOTSUPPORTED\n", VAR_15);

    FUNC_5(VAR_13);
}
