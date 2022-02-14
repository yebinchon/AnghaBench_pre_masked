
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int audio_unit; } ;
struct ao_control_vol {double left; double right; } ;
struct ao {struct priv* priv; } ;
typedef int OSStatus ;


 int FUNC_0 (int ,int ,int ,int ,float,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ao *VAR_4, struct ao_control_vol *VAR_5) {
    struct priv *VAR_6 = VAR_4->priv;
    float VAR_7 = (VAR_5->left + VAR_5->right) / 200.0;
    OSStatus VAR_8 =
        FUNC_0(VAR_6->audio_unit, VAR_3,
                              VAR_2, 0, VAR_7, 0);
    FUNC_1("could not set HAL output volume");
    return VAR_1;
coreaudio_error:
    return VAR_0;
}
