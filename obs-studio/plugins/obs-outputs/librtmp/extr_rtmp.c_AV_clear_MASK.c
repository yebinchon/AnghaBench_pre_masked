
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* av_val; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
typedef TYPE_2__ RTMP_METHOD ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(RTMP_METHOD *VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        FUNC_0(VAR_0[VAR_2].name.av_val);
    FUNC_0(VAR_0);
}
