
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct bluray_priv_s {char* cfg_device; int num_titles; int current_angle; int current_title; scalar_t__ use_nav; int * bd; } ;
struct TYPE_12__ {char* demuxer; struct bluray_priv_s* priv; int control; int close; int fill_buffer; int log; int global; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_13__ {int duration; int playlist; } ;
typedef TYPE_2__ BLURAY_TITLE_INFO ;
typedef int BLURAY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 TYPE_2__* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int * FUNC_8 (char*,int *) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct bluray_priv_s*) ;
 int VAR_9 ;
 char* FUNC_12 (int,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*,int *,char**) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int FUNC_17(stream_t *VAR_10)
{
    struct bluray_priv_s *VAR_11 = VAR_10->priv;

    char *VAR_12 = ((void*)0);

    if (VAR_11->cfg_device && VAR_11->cfg_device[0]) {
        VAR_12 = VAR_11->cfg_device;
    } else {
        FUNC_14(VAR_10->global, "bluray-device", &VAR_9,
                           &VAR_12);
    }

    if (!VAR_12 || !VAR_12[0]) {
        FUNC_0(VAR_10, "No Blu-ray device/location was specified ...\n");
        return VAR_4;
    }

    if (!FUNC_13(VAR_10->log, VAR_1))
        FUNC_9(0);


    BLURAY *VAR_13 = FUNC_8(VAR_12, ((void*)0));
    if (!VAR_13) {
        FUNC_0(VAR_10, "Couldn't open Blu-ray device: %s\n", VAR_12);
        return VAR_4;
    }
    VAR_11->bd = VAR_13;

    if (!FUNC_10(VAR_10)) {
        FUNC_11(VAR_11);
        return VAR_4;
    }

    int VAR_14 = VAR_0;
    if (VAR_11->use_nav) {
        FUNC_1(VAR_10, "BluRay menu support has been removed.\n");
        return VAR_2;
    } else {

        VAR_11->num_titles = FUNC_7(VAR_13, VAR_5, 0);
        if (!VAR_11->num_titles) {
            FUNC_0(VAR_10, "Can't find any Blu-ray-compatible title here.\n");
            FUNC_11(VAR_11);
            return VAR_4;
        }

        FUNC_2(VAR_10, "List of available titles:\n");


        uint64_t VAR_15 = 0;
        for (int VAR_16 = 0; VAR_16 < VAR_11->num_titles; VAR_16++) {
            BLURAY_TITLE_INFO *VAR_17 = FUNC_6(VAR_13, VAR_16, 0);
            if (!VAR_17)
                continue;

            char *VAR_18 = FUNC_12(VAR_17->duration / 90000, 0);
            FUNC_2(VAR_10, "idx: %3d duration: %s (playlist: %05d.mpls)\n",
                       VAR_16, VAR_18, VAR_17->playlist);
            FUNC_16(VAR_18);


            if (VAR_17->duration > VAR_15) {
                VAR_15 = VAR_17->duration;
                VAR_14 = VAR_16;
            }

            FUNC_4(VAR_17);
        }
    }


    VAR_11->current_angle = -1;
    VAR_11->current_title = -1;


    FUNC_5(VAR_13, ((void*)0));

    FUNC_15(VAR_10, VAR_14);

    VAR_10->fill_buffer = VAR_8;
    VAR_10->close = VAR_6;
    VAR_10->control = VAR_7;
    VAR_10->priv = VAR_11;
    VAR_10->demuxer = "+disc";

    FUNC_3(VAR_10, "Blu-ray successfully opened.\n");

    return VAR_3;
}
