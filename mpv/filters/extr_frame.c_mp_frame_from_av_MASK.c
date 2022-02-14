
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {int member_0; size_t type; int data; } ;
struct AVRational {int dummy; } ;
struct AVFrame {int pts; } ;
typedef enum mp_frame_type { ____Placeholder_mp_frame_type } mp_frame_type ;
struct TYPE_2__ {int (* from_av_ref ) (struct AVFrame*) ;} ;


 struct mp_frame VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct mp_frame,int ) ;
 int FUNC_1 (int ,struct AVRational*) ;
 int FUNC_2 (struct AVFrame*) ;

struct mp_frame FUNC_3(enum mp_frame_type VAR_2, struct AVFrame *VAR_3,
                                 struct AVRational *VAR_4)
{
    struct mp_frame VAR_5 = {VAR_2};

    if (!VAR_1[VAR_5.type].from_av_ref)
        return VAR_0;

    VAR_5.data = VAR_1[VAR_5.type].from_av_ref(VAR_3);
    if (!VAR_5.data)
        return VAR_0;

    FUNC_0(VAR_5, FUNC_1(VAR_3->pts, VAR_4));
    return VAR_5;
}
