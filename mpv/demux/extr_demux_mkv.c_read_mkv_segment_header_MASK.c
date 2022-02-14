
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int eof; } ;
typedef TYPE_2__ stream_t ;
typedef scalar_t__ int64_t ;
struct TYPE_16__ {TYPE_1__* params; TYPE_2__* stream; } ;
typedef TYPE_3__ demuxer_t ;
struct TYPE_14__ {int matroska_wanted_segment; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(demuxer_t *VAR_2, int64_t *VAR_3)
{
    stream_t *VAR_4 = VAR_2->stream;
    int VAR_5 = 0;
    if (VAR_2->params)
        VAR_5 = VAR_2->params->matroska_wanted_segment;

    while (!VAR_4->eof) {
        if (FUNC_3(VAR_4) != VAR_1) {
            FUNC_1(VAR_2, "segment not found\n");
            return 0;
        }
        FUNC_0(VAR_2, "+ a segment...\n");
        uint64_t VAR_6 = FUNC_4(VAR_4);
        *VAR_3 = (VAR_6 == VAR_0) ? 0 : FUNC_8(VAR_4) + VAR_6;
        if (VAR_5 <= 0)
            return 1;
        VAR_5--;
        FUNC_0(VAR_2, "  (skipping)\n");
        if (*VAR_3 <= 0)
            break;
        if (*VAR_3 >= FUNC_6(VAR_4))
            return 0;
        if (!FUNC_7(VAR_4, *VAR_3)) {
            FUNC_2(VAR_2, "Failed to seek in file\n");
            return 0;
        }

        if (!FUNC_5(VAR_2))
            return 0;
    }

    FUNC_1(VAR_2, "End of file, no further segments.\n");
    return 0;
}
