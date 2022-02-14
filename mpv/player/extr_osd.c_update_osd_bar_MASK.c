
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; float value; } ;
struct MPContext {TYPE_1__ osd_progbar; int osd; } ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_0, int VAR_1,
                           double VAR_2, double VAR_3, double VAR_4)
{
    if (VAR_0->osd_progbar.type != VAR_1)
        return;

    float VAR_5 = (VAR_4 - VAR_2) / (VAR_3 - VAR_2);
    if (VAR_5 != VAR_0->osd_progbar.value) {
        VAR_0->osd_progbar.value = VAR_5;
        FUNC_0(VAR_0->osd, &VAR_0->osd_progbar);
    }
}
