
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
struct TYPE_3__ {int VendorId; int Description; int member_0; } ;
typedef int IDXGIFactory1 ;
typedef int IDXGIAdapter1 ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DXGI_ADAPTER_DESC1 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,unsigned int,int **) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,struct bstr) ;
 int FUNC_6 (int *,struct bstr*,char*,unsigned int,int ,char*) ;
 unsigned int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mp_log*,char*,unsigned int) ;
 char* FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,void**) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static IDXGIAdapter1 *FUNC_12(struct mp_log *VAR_3,
                                        struct bstr VAR_4,
                                        struct bstr *VAR_5)
{
    HRESULT VAR_6 = VAR_2;
    IDXGIFactory1 *VAR_7;
    IDXGIAdapter1 *VAR_8 = ((void*)0);

    VAR_6 = FUNC_10(&VAR_1, (void **)&VAR_7);
    if (FUNC_0(VAR_6)) {
        FUNC_8(VAR_3, "Failed to create a DXGI factory: %s\n",
                 FUNC_7(VAR_6));
        return ((void*)0);
    }

    for (unsigned int VAR_9 = 0; VAR_6 != VAR_0; VAR_9++)
    {
        IDXGIAdapter1 *VAR_10 = ((void*)0);
        DXGI_ADAPTER_DESC1 VAR_11 = { 0 };
        char *VAR_12 = ((void*)0);

        VAR_6 = FUNC_2(VAR_7, VAR_9, &VAR_10);
        if (FUNC_0(VAR_6)) {
            if (VAR_6 != VAR_0) {
                FUNC_8(VAR_3, "Failed to enumerate at adapter %u\n",
                         VAR_9);
            }
            continue;
        }

        if (FUNC_0(FUNC_1(VAR_10, &VAR_11))) {
            FUNC_8(VAR_3, "Failed to get adapter description when listing at adapter %u\n",
                     VAR_9);
            continue;
        }

        VAR_12 = FUNC_9(((void*)0), VAR_11.Description);

        if (VAR_5) {
            FUNC_6(((void*)0), VAR_5,
                                  "Adapter %u: vendor: %u, description: %s\n",
                                  VAR_9, VAR_11.VendorId,
                                  VAR_12);
        }

        if (VAR_4.len &&
            FUNC_5(FUNC_4(VAR_12),
                                 VAR_4))
        {
            VAR_8 = VAR_10;
        }

        FUNC_11(VAR_12);

        if (VAR_8) {
            break;
        }

        FUNC_3(VAR_10);
    }

    FUNC_3(VAR_7);

    return VAR_8;
}
