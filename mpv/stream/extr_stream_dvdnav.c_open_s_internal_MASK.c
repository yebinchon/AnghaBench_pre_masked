
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct priv {char* device; scalar_t__ track; scalar_t__ title; TYPE_4__* opts; int * dvdnav; } ;
struct TYPE_10__ {char* demuxer; char* lavf_type; int close; int control; int fill_buffer; int global; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int int32_t ;
typedef int dvdnav_t ;
struct TYPE_11__ {char* device; int angle; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int**,int*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int VAR_8 ;
 int FUNC_9 (int*) ;
 char* FUNC_10 (int,int) ;
 TYPE_4__* FUNC_11 (TYPE_1__*,int ,int *) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int VAR_9 ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(stream_t *VAR_10)
{
    struct priv *VAR_11, *VAR_12;
    VAR_11 = VAR_12 = VAR_10->priv;
    char *VAR_13;

    VAR_12->opts = FUNC_11(VAR_10, VAR_10->global, &VAR_7);

    if (VAR_12->device && VAR_12->device[0])
        VAR_13 = VAR_12->device;
    else if (VAR_12->opts->device && VAR_12->opts->device[0])
        VAR_13 = VAR_12->opts->device;
    else
        VAR_13 = VAR_0;
    if (!FUNC_12(VAR_10, VAR_13)) {
        FUNC_0(VAR_10, "Couldn't open DVD device: %s\n",
                VAR_13);
        return VAR_4;
    }

    if (VAR_12->track == VAR_5) {
        dvdnav_t *VAR_14 = VAR_11->dvdnav;
        uint64_t VAR_15 = 0;
        int VAR_16 = -1;
        int32_t VAR_17;
        if (FUNC_7(VAR_14, &VAR_17) == VAR_1) {
            FUNC_3(VAR_10, "List of available titles:\n");
            for (int VAR_18 = 1; VAR_18 <= VAR_17; VAR_18++) {
                uint64_t *VAR_19 = ((void*)0), VAR_20 = 0;
                FUNC_5(VAR_14, VAR_18, &VAR_19, &VAR_20);
                if (VAR_19) {
                    if (VAR_20 > VAR_15) {
                        VAR_15 = VAR_20;
                        VAR_16 = VAR_18;
                    }
                    if (VAR_20 > 90000) {
                        char *VAR_21 = FUNC_10(VAR_20 / 90000, 0);
                        FUNC_3(VAR_10, "title: %3d duration: %s\n",
                                   VAR_18 - 1, VAR_21);
                        FUNC_13(VAR_21);
                    }
                    FUNC_9(VAR_19);
                }
            }
        }
        VAR_12->track = VAR_16 - 1;
        FUNC_2(VAR_10, "Selecting title %d.\n", VAR_12->track);
    }

    if (VAR_12->track >= 0) {
        VAR_11->title = VAR_12->track;
        if (FUNC_8(VAR_11->dvdnav, VAR_12->track + 1) != VAR_1) {
            FUNC_1(VAR_10, "dvdnav_stream, couldn't select title %d, error '%s'\n",
                   VAR_12->track, FUNC_6(VAR_11->dvdnav));
            return VAR_4;
        }
    } else {
        FUNC_1(VAR_10, "DVD menu support has been removed.\n");
        return VAR_2;
    }
    if (VAR_12->opts->angle > 1)
        FUNC_4(VAR_11->dvdnav, VAR_12->opts->angle);

    VAR_10->fill_buffer = VAR_8;
    VAR_10->control = VAR_6;
    VAR_10->close = VAR_9;
    VAR_10->demuxer = "+disc";
    VAR_10->lavf_type = "mpeg";

    return VAR_3;
}
