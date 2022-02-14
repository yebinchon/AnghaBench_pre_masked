
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct priv {int device; } ;
struct ao {struct priv* priv; } ;
struct TYPE_4__ {int mSelector; int mElement; int mScope; } ;
typedef scalar_t__ OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;
typedef int AudioDeviceID ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,struct ao*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int ,struct ao*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static OSStatus FUNC_4(struct ao *VAR_7, bool VAR_8)
{
    struct priv *VAR_9 = VAR_7->priv;

    uint32_t VAR_10[] = {VAR_0,
                            VAR_1};
    AudioDeviceID VAR_11[] = {VAR_9->device,
                            VAR_4};
    FUNC_3(FUNC_2(VAR_10) == FUNC_2(VAR_11));

    OSStatus VAR_12 = VAR_5;
    for (int VAR_13 = 0; VAR_13 < FUNC_2(VAR_11); VAR_13++) {
        AudioObjectPropertyAddress VAR_14 = {
            .mScope = VAR_3,
            .mElement = VAR_2,
            .mSelector = VAR_10[VAR_13],
        };
        AudioDeviceID VAR_15 = VAR_11[VAR_13];

        OSStatus VAR_16;
        if (VAR_8) {
            VAR_16 = FUNC_0(
                VAR_15, &VAR_14, VAR_6, VAR_7);
        } else {
            VAR_16 = FUNC_1(
                VAR_15, &VAR_14, VAR_6, VAR_7);
        }
        if (VAR_12 == VAR_5)
            VAR_12 = VAR_16;
    }

    return VAR_12;
}
