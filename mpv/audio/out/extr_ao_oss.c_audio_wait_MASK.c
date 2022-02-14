
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int audio_fd; } ;
struct pollfd {int revents; int events; int fd; } ;
struct ao {struct priv* priv; } ;
typedef int pthread_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ao*,struct pollfd*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_3, pthread_mutex_t *VAR_4)
{
    struct priv *VAR_5 = VAR_3->priv;

    struct pollfd VAR_6 = {.fd = VAR_5->audio_fd, .events = VAR_2};
    int VAR_7 = FUNC_0(VAR_3, &VAR_6, 1, VAR_4);
    if (VAR_6.revents & (VAR_0 | VAR_1))
        return -1;
    return VAR_7;
}
