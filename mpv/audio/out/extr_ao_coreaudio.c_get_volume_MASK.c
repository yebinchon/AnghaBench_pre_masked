
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int audio_unit; } ;
struct ao_control_vol {float left; float right; } ;
struct ao {struct priv* priv; } ;
typedef int OSStatus ;


 int FUNC_0 (int ,int ,int ,int ,float*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ao *VAR_4, struct ao_control_vol *VAR_5) {
    struct priv *VAR_6 = VAR_4->priv;
    float VAR_7;
    OSStatus VAR_8 =
        FUNC_0(VAR_6->audio_unit, VAR_3,
                              VAR_2, 0, &VAR_7);

    FUNC_1("could not get HAL output volume");
    VAR_5->left = VAR_5->right = VAR_7 * 100.0;
    return VAR_1;
coreaudio_error:
    return VAR_0;
}
