
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
struct hwcontext_create_dev_params {int dummy; } ;
struct AVBufferRef {int dummy; } ;
typedef int ID3D11Device ;
typedef int HRESULT ;
typedef struct AVBufferRef AVBufferRef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int ,int *,int ,int ,int **,int *,int *) ;
 struct AVBufferRef* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mp_log*,char*,...) ;

__attribute__((used)) static struct AVBufferRef *FUNC_7(struct mpv_global *VAR_3,
        struct mp_log *VAR_4, struct hwcontext_create_dev_params *VAR_5)
{
    ID3D11Device *VAR_6 = ((void*)0);
    HRESULT VAR_7;

    FUNC_4();
    if (!&FUNC_2) {
        FUNC_6(VAR_4, "Failed to load D3D11 library\n");
        return ((void*)0);
    }

    VAR_7 = FUNC_2(((void*)0), VAR_2, ((void*)0),
                                 VAR_0, ((void*)0), 0,
                                 VAR_1, &VAR_6, ((void*)0), ((void*)0));
    if (FUNC_0(VAR_7)) {
        FUNC_6(VAR_4, "Failed to create D3D11 Device: %s\n",
               FUNC_5(VAR_7));
        return ((void*)0);
    }

    AVBufferRef *VAR_8 = FUNC_3(VAR_6);
    FUNC_1(VAR_6);
    if (!VAR_8)
        FUNC_6(VAR_4, "Failed to allocate AVHWDeviceContext.\n");

    return VAR_8;
}
