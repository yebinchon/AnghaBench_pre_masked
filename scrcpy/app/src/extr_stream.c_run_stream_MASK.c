
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stream {int codec_ctx; scalar_t__ decoder; scalar_t__ recorder; TYPE_1__* parser; int pending; scalar_t__ has_pending; } ;
struct TYPE_3__ {int flags; } ;
typedef int AVPacket ;
typedef int AVCodec ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct stream*,int *) ;
 int FUNC_19 (struct stream*,int *) ;

__attribute__((used)) static int
FUNC_20(void *VAR_2) {
    struct stream *VAR_3 = VAR_2;

    AVCodec *VAR_4 = FUNC_8(VAR_0);
    if (!VAR_4) {
        FUNC_2("H.264 decoder not found");
        goto end;
    }

    VAR_3->codec_ctx = FUNC_7(VAR_4);
    if (!VAR_3->codec_ctx) {
        FUNC_0("Could not allocate codec context");
        goto end;
    }

    if (VAR_3->decoder && !FUNC_11(VAR_3->decoder, VAR_4)) {
        FUNC_2("Could not open decoder");
        goto finally_free_codec_ctx;
    }

    if (VAR_3->recorder) {
        if (!FUNC_15(VAR_3->recorder, VAR_4)) {
            FUNC_2("Could not open recorder");
            goto finally_close_decoder;
        }

        if (!FUNC_16(VAR_3->recorder)) {
            FUNC_2("Could not start recorder");
            goto finally_close_recorder;
        }
    }

    VAR_3->parser = FUNC_6(VAR_0);
    if (!VAR_3->parser) {
        FUNC_2("Could not initialize parser");
        goto finally_stop_and_join_recorder;
    }



    VAR_3->parser->flags |= VAR_1;

    for (;;) {
        AVPacket VAR_5;
        bool VAR_6 = FUNC_19(VAR_3, &VAR_5);
        if (!VAR_6) {

            break;
        }

        VAR_6 = FUNC_18(VAR_3, &VAR_5);
        FUNC_4(&VAR_5);
        if (!VAR_6) {

            break;
        }
    }

    FUNC_1("End of frames");

    if (VAR_3->has_pending) {
        FUNC_4(&VAR_3->pending);
    }

    FUNC_5(VAR_3->parser);
finally_stop_and_join_recorder:
    if (VAR_3->recorder) {
        FUNC_17(VAR_3->recorder);
        FUNC_3("Finishing recording...");
        FUNC_14(VAR_3->recorder);
    }
finally_close_recorder:
    if (VAR_3->recorder) {
        FUNC_13(VAR_3->recorder);
    }
finally_close_decoder:
    if (VAR_3->decoder) {
        FUNC_10(VAR_3->decoder);
    }
finally_free_codec_ctx:
    FUNC_9(&VAR_3->codec_ctx);
end:
    FUNC_12();
    return 0;
}
