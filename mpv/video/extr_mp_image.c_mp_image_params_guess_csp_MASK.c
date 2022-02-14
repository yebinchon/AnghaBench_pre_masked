
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ space; scalar_t__ levels; scalar_t__ gamma; scalar_t__ primaries; int sig_peak; scalar_t__ light; } ;
struct mp_image_params {scalar_t__ chroma_location; TYPE_1__ color; int h; int w; } ;
typedef enum mp_csp { ____Placeholder_mp_csp } mp_csp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mp_image_params*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct mp_image_params *VAR_28)
{
    enum mp_csp VAR_29 = FUNC_2(VAR_28);
    if (VAR_29 == VAR_3) {
        if (VAR_28->color.space != VAR_6 &&
            VAR_28->color.space != VAR_7 &&
            VAR_28->color.space != VAR_5 &&
            VAR_28->color.space != VAR_4 &&
            VAR_28->color.space != VAR_18 &&
            VAR_28->color.space != VAR_26)
        {


            VAR_28->color.space = VAR_3;
        }
        if (VAR_28->color.space == VAR_3)
            VAR_28->color.space = FUNC_0(VAR_28->w, VAR_28->h);
        if (VAR_28->color.levels == VAR_8) {
            if (VAR_28->color.gamma == VAR_24) {
                VAR_28->color.levels = VAR_9;
            } else {
                VAR_28->color.levels = VAR_10;
            }
        }
        if (VAR_28->color.primaries == VAR_14) {

            if (VAR_28->color.space == VAR_5 ||
                VAR_28->color.space == VAR_4) {
                VAR_28->color.primaries = VAR_15;
            } else if (VAR_28->color.space == VAR_7) {
                VAR_28->color.primaries = VAR_16;
            } else {

                VAR_28->color.primaries = FUNC_1(VAR_28->w, VAR_28->h);
            }
        }
        if (VAR_28->color.gamma == VAR_19)
            VAR_28->color.gamma = VAR_20;
    } else if (VAR_29 == VAR_17) {
        VAR_28->color.space = VAR_17;
        VAR_28->color.levels = VAR_9;






        if (VAR_28->color.primaries == VAR_14)
            VAR_28->color.primaries = VAR_16;
        if (VAR_28->color.gamma == VAR_19)
            VAR_28->color.gamma = VAR_23;
    } else if (VAR_29 == VAR_25) {
        VAR_28->color.space = VAR_25;
        VAR_28->color.levels = VAR_9;
        if (VAR_28->color.primaries == VAR_14)
            VAR_28->color.primaries = VAR_15;
        if (VAR_28->color.gamma == VAR_19)
            VAR_28->color.gamma = VAR_22;
    } else {

        VAR_28->color.space = VAR_3;
        VAR_28->color.levels = VAR_8;
        VAR_28->color.primaries = VAR_14;
        VAR_28->color.gamma = VAR_19;
    }

    if (!VAR_28->color.sig_peak) {
        if (VAR_28->color.gamma == VAR_21) {
            VAR_28->color.sig_peak = 1000 / VAR_27;
        } else {


            VAR_28->color.sig_peak = FUNC_4(VAR_28->color.gamma);
        }
    }

    if (!FUNC_3(VAR_28->color.gamma)) {


        VAR_28->color.sig_peak = 1.0;
    }

    if (VAR_28->chroma_location == VAR_0) {
        if (VAR_28->color.levels == VAR_10)
            VAR_28->chroma_location = VAR_2;
        if (VAR_28->color.levels == VAR_9)
            VAR_28->chroma_location = VAR_1;
    }

    if (VAR_28->color.light == VAR_11) {


        if (VAR_28->color.gamma == VAR_21) {
            VAR_28->color.light = VAR_13;
        } else {
            VAR_28->color.light = VAR_12;
        }
    }
}
