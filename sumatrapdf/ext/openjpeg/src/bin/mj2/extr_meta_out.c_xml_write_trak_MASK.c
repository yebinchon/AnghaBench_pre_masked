
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int opj_event_mgr_t ;
struct TYPE_6__ {scalar_t__ track_type; unsigned int num_samples; int * sample; } ;
typedef TYPE_1__ mj2_tk_t ;
typedef int mj2_sample_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int *,int *,int *,unsigned int,int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*,unsigned int) ;
 int FUNC_3 (int *,int *,TYPE_1__*,unsigned int) ;
 int FUNC_4 (int *,int *,TYPE_1__*,unsigned int) ;

void FUNC_5(FILE* VAR_0, FILE* VAR_1, mj2_tk_t *VAR_2,
                    unsigned int VAR_3, unsigned int VAR_4, opj_event_mgr_t *VAR_5)
{
    FUNC_0(VAR_1, "    <Track BoxType=\"trak\" Instance=\"%d\">\n", VAR_3);
    FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);


    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_4(VAR_0, VAR_1, VAR_2,
                   VAR_3);

    if (VAR_2->track_type == 0) {



        if (VAR_4 > 0 && VAR_4 <= VAR_2->num_samples) {
            mj2_sample_t *VAR_6;
            unsigned int VAR_7;

            VAR_7 = VAR_4 - 1;


            VAR_6 = &VAR_2->sample[VAR_7];
            if (FUNC_1(VAR_0, VAR_1, VAR_6, VAR_7, VAR_5)) {
                return;
            }
        }
    }
    FUNC_0(VAR_1, "    </Track>\n");
}
