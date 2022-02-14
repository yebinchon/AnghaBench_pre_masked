
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ (* seek_fn ) (int ,int ) ;int cookie; scalar_t__ cancel_fn; int close_fn; int read_fn; int member_0; } ;
struct priv {TYPE_2__ info; int cancel; } ;
struct TYPE_10__ {int seekable; int fast_skip; scalar_t__ cancel; int close; int get_size; int fill_buffer; int seek; int url; int global; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int (* mpv_stream_cb_open_ro_fn ) (void*,int ,TYPE_2__*) ;
typedef TYPE_2__ mpv_stream_cb_info ;
typedef int bstr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct priv*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*,void**,int (*) (void*,int ,TYPE_2__*)) ;
 struct priv* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 struct priv* FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(stream_t *VAR_9)
{
    struct priv *VAR_10 = FUNC_10(VAR_9, VAR_10);
    VAR_9->priv = VAR_10;

    bstr VAR_11 = FUNC_7(FUNC_2(VAR_9->url), ((void*)0));
    char *VAR_12 = FUNC_3(VAR_9, VAR_11);

    void *VAR_13;
    mpv_stream_cb_open_ro_fn VAR_14;

    if (!FUNC_8(VAR_9->global, VAR_12, &VAR_13, VAR_14))
        return VAR_3;

    mpv_stream_cb_info VAR_15 = {0};

    int VAR_16 = VAR_14(VAR_13, VAR_9->url, &VAR_15);
    if (VAR_16 < 0) {
        if (VAR_16 != VAR_0)
            FUNC_1(VAR_9, "unknown error from user callback\n");
        return VAR_1;
    }

    if (!VAR_15.read_fn || !VAR_15.close_fn) {
        FUNC_0(VAR_9, "required read_fn or close_fn callbacks not set.\n");
        return VAR_1;
    }

    VAR_10->info = VAR_15;

    if (VAR_10->info.seek_fn && VAR_10->info.seek_fn(VAR_10->info.cookie, 0) >= 0) {
        VAR_9->seek = VAR_8;
        VAR_9->seekable = 1;
    }
    VAR_9->fast_skip = 1;
    VAR_9->fill_buffer = VAR_4;
    VAR_9->get_size = VAR_5;
    VAR_9->close = VAR_7;

    if (VAR_10->info.cancel_fn && VAR_9->cancel) {
        VAR_10->cancel = FUNC_4(VAR_10);
        FUNC_6(VAR_10->cancel, VAR_9->cancel);
        FUNC_5(VAR_10->cancel, VAR_10->info.cancel_fn, VAR_10->info.cookie);
    }

    return VAR_2;
}
