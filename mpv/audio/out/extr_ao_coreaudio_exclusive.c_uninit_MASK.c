
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int hog_pid; int device; int changed_mixing; int original_asbd; int stream; int render_cb; } ;
struct ao {struct priv* priv; } ;
typedef int OSStatus ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ao*,char*) ;
 int FUNC_4 (struct ao*,int ,int ) ;
 int FUNC_5 (struct ao*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct ao*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    OSStatus VAR_3 = VAR_0;

    VAR_3 = FUNC_7(VAR_1, 0);
    FUNC_2("can't remove device listener, this may cause a crash");

    VAR_3 = FUNC_1(VAR_2->device, VAR_2->render_cb);
    FUNC_2("failed to stop audio device");

    VAR_3 = FUNC_0(VAR_2->device, VAR_2->render_cb);
    FUNC_2("failed to remove device render callback");

    if (!FUNC_4(VAR_1, VAR_2->stream, VAR_2->original_asbd))
        FUNC_3(VAR_1, "can't revert to original device format\n");

    VAR_3 = FUNC_5(VAR_1, VAR_2->device, VAR_2->changed_mixing);
    FUNC_2("can't re-enable mixing");

    VAR_3 = FUNC_6(VAR_2->device, &VAR_2->hog_pid);
    FUNC_2("can't release hog mode");
}
