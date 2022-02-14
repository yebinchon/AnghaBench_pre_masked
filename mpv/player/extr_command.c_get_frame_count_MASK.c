
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demuxer {int dummy; } ;
struct MPContext {TYPE_2__* vo_chain; struct demuxer* demuxer; } ;
struct TYPE_4__ {TYPE_1__* filter; } ;
struct TYPE_3__ {double container_fps; } ;


 double FUNC_0 (struct MPContext*) ;

__attribute__((used)) static int FUNC_1(struct MPContext *VAR_0)
{
    struct demuxer *VAR_1 = VAR_0->demuxer;
    if (!VAR_1)
        return -1;
    if (!VAR_0->vo_chain)
        return -1;
    double VAR_2 = FUNC_0(VAR_0);
    double VAR_3 = VAR_0->vo_chain->filter->container_fps;
    if (VAR_2 < 0 || VAR_3 <= 0)
        return 0;

    return VAR_2 * VAR_3;
}
