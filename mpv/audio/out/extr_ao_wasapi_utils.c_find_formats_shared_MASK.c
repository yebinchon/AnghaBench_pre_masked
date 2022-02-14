
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wasapi_state {int pAudioClient; } ;
struct ao {struct wasapi_state* priv; } ;
struct TYPE_4__ {int Format; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
typedef int WAVEFORMATEX ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int **) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int **) ;
 int FUNC_4 (struct wasapi_state*,char*,int ) ;
 int FUNC_5 (struct ao*,char*,int ,...) ;


 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct ao *VAR_2, WAVEFORMATEXTENSIBLE *VAR_3)
{
    struct wasapi_state *VAR_4 = VAR_2->priv;

    WAVEFORMATEX *VAR_5;
    HRESULT VAR_6 = FUNC_3(VAR_4->pAudioClient,
                                                VAR_1,
                                                &VAR_3->Format,
                                                &VAR_5);
    FUNC_5(VAR_2, "Trying %s (shared) -> %s\n",
               FUNC_9(&VAR_3->Format), FUNC_7(VAR_6));
    if (VAR_6 != VAR_0)
        FUNC_1(VAR_6);

    switch (VAR_6) {
    case 128:
        break;
    case 129:
        FUNC_8(VAR_3, VAR_5);
        FUNC_0(VAR_5);
        FUNC_5(VAR_2, "Closest match is %s\n",
                   FUNC_9(&VAR_3->Format));
        break;
    default:
        VAR_6 = FUNC_2(VAR_4->pAudioClient, &VAR_5);
        FUNC_1(VAR_6);
        FUNC_8(VAR_3, VAR_5);
        FUNC_5(VAR_2, "Fallback to mix format %s\n",
                   FUNC_9(&VAR_3->Format));
        FUNC_0(VAR_5);
    }

    return 1;
exit_label:
    FUNC_4(VAR_4, "Error finding shared mode format: %s\n",
           FUNC_6(VAR_6));
    return 0;
}
