
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wasapi_state {int pAudioClient; } ;
struct ao {struct wasapi_state* priv; } ;
struct TYPE_3__ {int Format; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (struct ao*,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct ao *VAR_1, WAVEFORMATEXTENSIBLE *VAR_2)
{
    struct wasapi_state *VAR_3 = VAR_1->priv;
    HRESULT VAR_4 = FUNC_0(VAR_3->pAudioClient,
                                                VAR_0,
                                                &VAR_2->Format, ((void*)0));
    FUNC_1(VAR_1, "Trying %s (exclusive) -> %s\n",
               FUNC_4(&VAR_2->Format), FUNC_3(VAR_4));
    return FUNC_2(VAR_4);
}
