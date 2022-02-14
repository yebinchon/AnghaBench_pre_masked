
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_4__ {TYPE_1__* video_out; } ;
struct TYPE_3__ {int hwdec_devs; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int,void*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct m_property *VAR_2,
                                     int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    if (!VAR_5->video_out || !VAR_5->video_out->hwdec_devs)
        return VAR_0;

    char *VAR_6 = FUNC_0(VAR_5->video_out->hwdec_devs);
    int VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6);
    FUNC_2(VAR_6);
    return VAR_7;
}
