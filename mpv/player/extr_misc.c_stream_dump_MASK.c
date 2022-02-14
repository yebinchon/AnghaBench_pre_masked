
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct MPOpts {int quiet; int stream_dump; } ;
struct MPContext {scalar_t__ stop_play; int global; struct MPOpts* opts; } ;
struct TYPE_6__ {int pos; int eof; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ int64_t ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPContext*,char*,int ) ;
 int FUNC_1 (struct MPContext*,int ,char*,long long,long long) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (struct MPContext*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct MPContext*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (char const*,int ) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;

int FUNC_12(struct MPContext *VAR_3, const char *VAR_4)
{
    struct MPOpts *VAR_5 = VAR_3->opts;
    stream_t *VAR_6 = FUNC_10(VAR_4, VAR_3->global);
    if (!VAR_6)
        return -1;

    int64_t VAR_7 = FUNC_9(VAR_6);

    FILE *VAR_8 = FUNC_3(VAR_5->stream_dump, "wb");
    if (!VAR_8) {
        FUNC_0(VAR_3, "Error opening dump file: %s\n", FUNC_7(VAR_2));
        return -1;
    }

    bool VAR_9 = 1;

    while (VAR_3->stop_play == VAR_0 && VAR_9) {
        if (!VAR_5->quiet && ((VAR_6->pos / (1024 * 1024)) % 2) == 1) {
            uint64_t VAR_10 = VAR_6->pos;
            FUNC_1(VAR_3, VAR_1, "Dumping %lld/%lld...",
                   (long long int)VAR_10, (long long int)VAR_7);
        }
        uint8_t VAR_11[4096];
        int VAR_12 = FUNC_11(VAR_6, VAR_11, sizeof(VAR_11));
        if (!VAR_12) {
            VAR_9 &= VAR_6->eof;
            break;
        }
        VAR_9 &= FUNC_5(VAR_11, VAR_12, 1, VAR_8) == 1;
        FUNC_8(VAR_3);
        FUNC_6(VAR_3);
    }

    VAR_9 &= FUNC_2(VAR_8) == 0;
    FUNC_4(VAR_6);
    return VAR_9 ? 0 : -1;
}
