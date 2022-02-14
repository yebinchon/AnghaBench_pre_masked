
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bits; int sig; scalar_t__ le; int bps; int rate; int appbufsz; int round; scalar_t__ msb; int pchan; } ;
struct priv {int * hdl; TYPE_1__ par; int pfd; int havevol; } ;
struct pollfd {int dummy; } ;
struct mp_chmap_sel {int member_0; } ;
struct TYPE_6__ {int num; } ;
struct ao {scalar_t__ format; int samplerate; int period_size; TYPE_4__ channels; struct priv* priv; } ;
typedef int af_to_par ;





 int FUNC_0 (struct ao*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct ao*,char*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ao*,struct mp_chmap_sel*,TYPE_4__*) ;
 int FUNC_5 (int ,int) ;
 int VAR_4 ;
 int FUNC_6 (struct mp_chmap_sel*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,struct priv*) ;
 int FUNC_12 (int *,int ,struct priv*) ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *,TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_16(struct ao *VAR_7)
{
    struct priv *VAR_8 = VAR_7->priv;

    struct af_to_par {
        int format, bits, sig;
    };
    static const struct af_to_par VAR_9[] = {
        {128, 8, 0},
        {130, 16, 1},
        {129, 32, 1},
    };
    const struct af_to_par *VAR_10;
    int VAR_11;

    VAR_8->hdl = FUNC_13(VAR_1, VAR_3, 0);
    if (VAR_8->hdl == ((void*)0)) {
        FUNC_0(VAR_7, "can't open sndio %s\n", VAR_1);
        goto error;
    }

    VAR_7->format = FUNC_3(VAR_7->format);

    FUNC_9(&VAR_8->par);
    for (VAR_11 = 0, VAR_10 = VAR_9;; VAR_11++, VAR_10++) {
        if (VAR_11 == sizeof(VAR_9) / sizeof(struct af_to_par)) {
            FUNC_1(VAR_7, "unsupported format\n");
            VAR_8->par.bits = 16;
            VAR_8->par.sig = 1;
            VAR_8->par.le = VAR_2;
            break;
        }
        if (VAR_10->format == VAR_7->format) {
            VAR_8->par.bits = VAR_10->bits;
            VAR_8->par.sig = VAR_10->sig;
            if (VAR_10->bits > 8)
                VAR_8->par.le = VAR_2;
            if (VAR_10->bits != FUNC_2(VAR_10->bits))
                VAR_8->par.bps = VAR_10->bits / 8;
            break;
        }
    }
    VAR_8->par.rate = VAR_7->samplerate;

    struct mp_chmap_sel VAR_12 = {0};
    for (int VAR_13 = 0; VAR_13 < VAR_0+1; VAR_13++)
        FUNC_6(&VAR_12, &VAR_5[VAR_13]);

    if (!FUNC_4(VAR_7, &VAR_12, &VAR_7->channels))
        goto error;

    VAR_8->par.pchan = VAR_7->channels.num;
    VAR_8->par.appbufsz = VAR_8->par.rate * 250 / 1000;
    VAR_8->par.round = VAR_8->par.rate * 10 / 1000;
    if (!FUNC_14(VAR_8->hdl, &VAR_8->par)) {
        FUNC_0(VAR_7, "couldn't set params\n");
        goto error;
    }
    if (!FUNC_8(VAR_8->hdl, &VAR_8->par)) {
        FUNC_0(VAR_7, "couldn't get params\n");
        goto error;
    }
    if (VAR_8->par.bps > 1 && VAR_8->par.le != VAR_2) {
        FUNC_0(VAR_7, "swapped endian output not supported\n");
        goto error;
    }
    if (VAR_8->par.bits == 8 && VAR_8->par.bps == 1 && !VAR_8->par.sig) {
        VAR_7->format = 128;
    } else if (VAR_8->par.bits == 16 && VAR_8->par.bps == 2 && VAR_8->par.sig) {
        VAR_7->format = 130;
    } else if ((VAR_8->par.bits == 32 || VAR_8->par.msb) && VAR_8->par.bps == 4 && VAR_8->par.sig) {
        VAR_7->format = 129;
    } else {
        FUNC_0(VAR_7, "couldn't set format\n");
        goto error;
    }

    VAR_8->havevol = FUNC_12(VAR_8->hdl, VAR_6, VAR_8);
    FUNC_11(VAR_8->hdl, VAR_4, VAR_8);
    if (!FUNC_15(VAR_8->hdl))
        FUNC_0(VAR_7, "init: couldn't start\n");

    VAR_8->pfd = FUNC_5 (FUNC_10(VAR_8->hdl), sizeof (struct pollfd));
    if (!VAR_8->pfd)
        goto error;

    VAR_7->period_size = VAR_8->par.round;

    return 0;

error:
    if (VAR_8->hdl)
      FUNC_7(VAR_8->hdl);

    return -1;
}
