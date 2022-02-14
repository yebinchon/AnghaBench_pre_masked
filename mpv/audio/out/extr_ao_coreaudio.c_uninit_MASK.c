
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mFormatID; } ;
struct priv {TYPE_1__ original_asbd; int original_asbd_stream; int audio_unit; } ;
struct ao {struct priv* priv; } ;
typedef int OSStatus ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    FUNC_1(VAR_2->audio_unit);
    FUNC_2(VAR_2->audio_unit);
    FUNC_0(VAR_2->audio_unit);

    if (VAR_2->original_asbd.mFormatID) {
        OSStatus VAR_3 = FUNC_3(VAR_2->original_asbd_stream,
                              VAR_0,
                              &VAR_2->original_asbd);
        FUNC_4("could not restore physical stream format");
    }
}
