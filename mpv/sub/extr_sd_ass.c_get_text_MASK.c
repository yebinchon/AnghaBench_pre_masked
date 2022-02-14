
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd_ass_priv {char* last_text; TYPE_1__* ass_track; } ;
struct sd {struct sd_ass_priv* priv; } ;
struct buf {char* member_0; int member_1; int len; char* start; } ;
struct TYPE_4__ {long long Start; long long Duration; scalar_t__ Text; } ;
struct TYPE_3__ {int n_events; TYPE_2__* events; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Event ;


 double VAR_0 ;
 int FUNC_0 (struct buf*,char) ;
 int FUNC_1 (struct buf*,scalar_t__) ;
 long long FUNC_2 (struct sd*,double) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static char *FUNC_4(struct sd *VAR_1, double VAR_2)
{
    struct sd_ass_priv *VAR_3 = VAR_1->priv;
    ASS_Track *VAR_4 = VAR_3->ass_track;

    if (VAR_2 == VAR_0)
        return ((void*)0);
    long long VAR_5 = FUNC_2(VAR_1, VAR_2);

    struct buf VAR_6 = {VAR_3->last_text, sizeof(VAR_3->last_text) - 1};

    for (int VAR_7 = 0; VAR_7 < VAR_4->n_events; ++VAR_7) {
        ASS_Event *VAR_8 = VAR_4->events + VAR_7;
        if (VAR_5 >= VAR_8->Start && VAR_5 < VAR_8->Start + VAR_8->Duration) {
            if (VAR_8->Text) {
                int VAR_9 = VAR_6.len;
                FUNC_1(&VAR_6, VAR_8->Text);
                if (FUNC_3(&VAR_6.start[VAR_9], VAR_6.len - VAR_9)) {
                    VAR_6.len = VAR_9;
                } else {
                    FUNC_0(&VAR_6, '\n');
                }
            }
        }
    }

    VAR_6.start[VAR_6.len] = '\0';

    if (VAR_6.len > 0 && VAR_6.start[VAR_6.len - 1] == '\n')
        VAR_6.start[VAR_6.len - 1] = '\0';

    return VAR_3->last_text;
}
