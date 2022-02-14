
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* nschannel; int response_processed; } ;
typedef TYPE_2__ nsChannelBSC ;
typedef char WCHAR ;
struct TYPE_5__ {char* response_status_text; int response_status; } ;
typedef scalar_t__ LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSCallback ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (scalar_t__,char const*,char**) ;
 char* FUNC_6 (scalar_t__,char) ;

__attribute__((used)) static HRESULT FUNC_7(BSCallback *VAR_2, DWORD VAR_3,
        LPCWSTR VAR_4)
{
    nsChannelBSC *VAR_5 = FUNC_3(VAR_2);
    char *VAR_6;
    HRESULT VAR_7;

    VAR_5->response_processed = VAR_1;
    VAR_5->nschannel->response_status = VAR_3;

    if(VAR_4) {
        const WCHAR *VAR_8;

        VAR_8 = FUNC_6(VAR_4, '\r');
        VAR_7 = FUNC_5(VAR_4, VAR_8, &VAR_6);
        if(FUNC_0(VAR_7)) {
            FUNC_1("parsing headers failed: %08x\n", VAR_7);
            return VAR_7;
        }

        FUNC_2(VAR_5->nschannel->response_status_text);
        VAR_5->nschannel->response_status_text = VAR_6;

        if(VAR_8 && VAR_8[1] == '\n') {
            VAR_8 += 2;
            VAR_7 = FUNC_4(VAR_5, VAR_8);
            if(FUNC_0(VAR_7)) {
                FUNC_1("parsing headers failed: %08x\n", VAR_7);
                return VAR_7;
            }
        }
    }

    return VAR_0;
}
