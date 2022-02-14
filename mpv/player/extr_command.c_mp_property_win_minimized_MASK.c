
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_2__ {struct vo* video_out; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*,int) ;
 int FUNC_1 (struct vo*,int ,int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                                     int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    struct vo *VAR_8 = VAR_7->video_out;
    if (!VAR_8)
        return VAR_0;

    int VAR_9 = 0;
    if (FUNC_1(VAR_8, VAR_1, &VAR_9) < 1)
        return VAR_0;

    return FUNC_0(VAR_5, VAR_6, VAR_9 & VAR_2);
}
