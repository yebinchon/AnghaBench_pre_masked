
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_6__ {TYPE_2__* video_out; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int * name; } ;
typedef TYPE_3__ MPContext ;


 int FUNC_0 (int,void*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct m_property *VAR_1, int VAR_2, void *VAR_3)
{
    MPContext *VAR_4 = VAR_0;
    return FUNC_0(VAR_2, VAR_3,
                    VAR_4->video_out ? VAR_4->video_out->driver->name : ((void*)0));
}
