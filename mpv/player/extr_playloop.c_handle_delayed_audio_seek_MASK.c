
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {double video_pts; scalar_t__ video_status; TYPE_1__* seek_slave; } ;
struct TYPE_2__ {int demuxer; } ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,double,int ) ;
 double FUNC_2 (struct MPContext*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_2)
{
    if (VAR_2->seek_slave) {
        if (VAR_2->video_pts != VAR_0) {


            double VAR_3 = VAR_2->video_pts +
                            FUNC_2(VAR_2, VAR_2->seek_slave);
            FUNC_1(VAR_2->seek_slave->demuxer, VAR_3, 0);
            VAR_2->seek_slave = ((void*)0);
        } else if (VAR_2->video_status >= VAR_1) {

            FUNC_0(VAR_2->seek_slave->demuxer, 0);
            VAR_2->seek_slave = ((void*)0);
        }
    }
}
