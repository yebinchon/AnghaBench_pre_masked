
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int device_failed; int audio_fd; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->device_failed = 0;
    if (VAR_2->audio_fd == -1)
        return;



    FUNC_0(VAR_2->audio_fd);
    VAR_2->audio_fd = -1;
}
