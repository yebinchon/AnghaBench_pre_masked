
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {char* path; int seekable; int streaming; char* demuxer; int close; int get_size; int control; int seek; int fill_buffer; TYPE_4__* priv; int global; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_26__ {int tracks; TYPE_1__* disc_toc; scalar_t__ nsectors; } ;
typedef TYPE_3__ cdrom_drive_t ;
struct TYPE_27__ {int paranoia_mode; int toc_offset; char* device; scalar_t__ speed; int* span; scalar_t__ search_overlap; scalar_t__ start_sector; scalar_t__ sector; int * cdp; scalar_t__ skip; int end_sector; scalar_t__ toc_bias; TYPE_3__* cd; scalar_t__ sector_size; } ;
typedef TYPE_4__ cdda_priv ;
struct TYPE_24__ {int dwStartSector; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (char*,int ,int *) ;
 TYPE_3__* FUNC_5 (char*,char*,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (TYPE_4__*) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* FUNC_13 (TYPE_2__*,int ,int *) ;
 int FUNC_14 (int ,char*,int *,char**) ;
 int * FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,scalar_t__,int ) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_21(stream_t *VAR_16)
{
    VAR_16->priv = FUNC_13(VAR_16, VAR_16->global, &VAR_15);
    cdda_priv *VAR_17 = VAR_16->priv;
    cdda_priv *VAR_18 = VAR_17;
    int VAR_19 = VAR_18->paranoia_mode;
    int VAR_20 = VAR_18->toc_offset;
    cdrom_drive_t *VAR_21 = ((void*)0);
    int VAR_22;

    char *VAR_23;
    FUNC_14(VAR_16->global, "cdrom-device", &VAR_13,
                       &VAR_23);
    FUNC_20(VAR_16, VAR_23);

    if (VAR_16->path[0]) {
        VAR_18->device = VAR_16->path;
    } else if (VAR_23 && VAR_23[0]) {
        VAR_18->device = VAR_23;
    } else {
        VAR_18->device = VAR_1;
    }




    VAR_21 = FUNC_4(VAR_18->device, 0, ((void*)0));


    if (!VAR_21) {
        FUNC_0(VAR_16, "Can't open CDDA device.\n");
        return VAR_7;
    }

    FUNC_11(VAR_21, VAR_0, VAR_0);

    if (VAR_18->sector_size)
        VAR_21->nsectors = VAR_18->sector_size;

    if (FUNC_6(VAR_21) != 0) {
        FUNC_0(VAR_16, "Can't open disc.\n");
        FUNC_1(VAR_21);
        return VAR_7;
    }

    VAR_17->cd = VAR_21;

    if (VAR_18->toc_bias)
        VAR_20 -= FUNC_8(VAR_21, 1);

    if (VAR_20) {
        for (int VAR_24 = 0; VAR_24 < VAR_21->tracks + 1; VAR_24++)
            VAR_21->disc_toc[VAR_24].dwStartSector += VAR_20;
    }

    if (VAR_18->speed > 0)
        FUNC_7(VAR_21, VAR_18->speed);

    VAR_22 = FUNC_10(VAR_21);
    if (VAR_18->span[0] > VAR_22)
        VAR_18->span[0] = VAR_22;
    if (VAR_18->span[1] < VAR_18->span[0])
        VAR_18->span[1] = VAR_18->span[0];
    if (VAR_18->span[1] > VAR_22)
        VAR_18->span[1] = VAR_22;
    if (VAR_18->span[0])
        VAR_17->start_sector = FUNC_8(VAR_21, VAR_18->span[0]);
    else
        VAR_17->start_sector = FUNC_2(VAR_21);

    if (VAR_18->span[1])
        VAR_17->end_sector = FUNC_9(VAR_21, VAR_18->span[1]);
    else
        VAR_17->end_sector = FUNC_3(VAR_21);

    VAR_17->cdp = FUNC_15(VAR_21);
    if (VAR_17->cdp == ((void*)0)) {
        FUNC_1(VAR_21);
        FUNC_12(VAR_17);
        return VAR_7;
    }

    if (VAR_19 == 0)
        VAR_19 = VAR_2;
    else if (VAR_19 == 1)
        VAR_19 = VAR_5;
    else
        VAR_19 = VAR_3;

    if (VAR_18->skip)
        VAR_19 &= ~VAR_4;
    else
        VAR_19 |= VAR_4;

    if (VAR_18->search_overlap > 0)
        VAR_19 |= VAR_5;
    else if (VAR_18->search_overlap == 0)
        VAR_19 &= ~VAR_5;

    FUNC_16(VAR_17->cdp, VAR_19);

    if (VAR_18->search_overlap > 0)
        FUNC_17(VAR_17->cdp, VAR_18->search_overlap);

    FUNC_18(VAR_17->cdp, VAR_17->start_sector, VAR_6);
    VAR_17->sector = VAR_17->start_sector;

    VAR_16->priv = VAR_17;

    VAR_16->fill_buffer = VAR_11;
    VAR_16->seek = VAR_14;
    VAR_16->seekable = 1;
    VAR_16->control = VAR_10;
    VAR_16->get_size = VAR_12;
    VAR_16->close = VAR_9;

    VAR_16->streaming = 1;

    VAR_16->demuxer = "+disc";

    FUNC_19(VAR_16, 0);

    return VAR_8;
}
