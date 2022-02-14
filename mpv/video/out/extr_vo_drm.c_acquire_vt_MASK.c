
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {TYPE_1__* kms; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (struct vo*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vo*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
    struct vo *VAR_3 = VAR_2;
    if (VAR_0) {
        struct priv *VAR_4 = VAR_3->priv;
        if (FUNC_2(VAR_4->kms->fd)) {
            FUNC_0(VAR_3, "Failed to acquire DRM master: %s\n", FUNC_3(VAR_1));
        }
    }

    FUNC_1(VAR_3);
}
