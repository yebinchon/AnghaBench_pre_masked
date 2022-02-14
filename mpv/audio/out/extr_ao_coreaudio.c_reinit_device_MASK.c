
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int device; } ;
struct ao {int device; struct priv* priv; } ;
typedef int OSStatus ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ao*,int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct ao *VAR_0) {
    struct priv *VAR_1 = VAR_0->priv;

    OSStatus VAR_2 = FUNC_1(VAR_0, VAR_0->device, &VAR_1->device);
    FUNC_0("failed to select device");

    return 1;

coreaudio_error:
    return 0;
}
