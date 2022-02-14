
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char* member_0; int member_1; } ;
struct TYPE_7__ {size_t nStreams; TYPE_2__* streams; } ;
struct TYPE_9__ {TYPE_1__ Link; } ;
struct TYPE_8__ {int id; int playpath; } ;
typedef TYPE_3__ RTMP ;
typedef TYPE_4__ AVal ;


 int FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;

int FUNC_2(RTMP *VAR_0, const char *VAR_1)
{
    int VAR_2 = -1;
    AVal VAR_3 = { (char*)VAR_1, VAR_1?(int)FUNC_1(VAR_1):0 };

    FUNC_0(&VAR_3, &VAR_0->Link.streams[VAR_0->Link.nStreams].playpath);
    VAR_0->Link.streams[VAR_0->Link.nStreams].id = -1;

    VAR_2 = VAR_0->Link.nStreams;
    VAR_0->Link.nStreams++;

    return VAR_2;
}
