
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {struct priv* priv; } ;
struct queue_surf {int busy11; scalar_t__ idle11; } ;
struct priv {int ctx11; } ;
typedef int idle ;
typedef int ID3D11Asynchronous ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct ra_hwdec_mapper *VAR_2,
                           struct queue_surf *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    HRESULT VAR_5;
    BOOL VAR_6;

    if (!VAR_3->busy11)
        return 1;

    VAR_5 = FUNC_1(VAR_4->ctx11,
        (ID3D11Asynchronous *)VAR_3->idle11, &VAR_6, sizeof(VAR_6),
        VAR_0);
    if (FUNC_0(VAR_5) || VAR_5 == VAR_1 || !VAR_6)
        return 0;

    VAR_3->busy11 = 0;
    return 1;
}
