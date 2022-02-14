
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int device; scalar_t__ change_physical_format; } ;
struct ao {int init_flags; char* redirect; int format; struct priv* priv; } ;
typedef int AudioStreamBasicDescription ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ao*,int *) ;
 int FUNC_3 (struct ao*,int ) ;
 int FUNC_4 (struct ao*,int ) ;
 int FUNC_5 (struct ao*) ;
 int FUNC_6 (struct ao*) ;

__attribute__((used)) static int FUNC_7(struct ao *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;

    if (!FUNC_1(VAR_3->format) || (VAR_3->init_flags & VAR_0)) {
        FUNC_0(VAR_3, "redirecting to coreaudio_exclusive\n");
        VAR_3->redirect = "coreaudio_exclusive";
        return VAR_1;
    }

    if (!FUNC_6(VAR_3))
        goto coreaudio_error;

    if (VAR_4->change_physical_format)
        FUNC_5(VAR_3);

    if (!FUNC_3(VAR_3, VAR_4->device))
        goto coreaudio_error;

    AudioStreamBasicDescription VAR_5;
    FUNC_2(VAR_3, &VAR_5);

    if (!FUNC_4(VAR_3, VAR_5))
        goto coreaudio_error;

    return VAR_2;

coreaudio_error:
    return VAR_1;
}
