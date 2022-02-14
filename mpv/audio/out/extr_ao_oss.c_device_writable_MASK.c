
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int audio_fd; } ;
struct pollfd {int events; int fd; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct pollfd*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    struct pollfd VAR_3 = {.fd = VAR_2->audio_fd, .events = VAR_0};
    return FUNC_0(&VAR_3, 1, 0);
}
