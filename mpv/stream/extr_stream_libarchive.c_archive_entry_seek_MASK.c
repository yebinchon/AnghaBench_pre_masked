
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct priv {int broken_seek; scalar_t__ entry_size; TYPE_3__* mpa; } ;
struct TYPE_9__ {scalar_t__ pos; int cancel; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int locale_t ;
typedef scalar_t__ int64_t ;
typedef int buffer ;
struct TYPE_10__ {int arch; int locale; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(stream_t *VAR_2, int64_t VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    if (VAR_4->mpa && !VAR_4->broken_seek) {
        locale_t VAR_5 = FUNC_11(VAR_4->mpa->locale);
        int VAR_6 = FUNC_6(VAR_4->mpa->arch, VAR_3, VAR_0);
        FUNC_11(VAR_5);
        if (VAR_6 >= 0)
            return 1;
        FUNC_3(VAR_2, "possibly unsupported seeking - switching to reopening\n");
        VAR_4->broken_seek = 1;
        if (FUNC_10(VAR_2) < VAR_1)
            return -1;
    }

    if (VAR_3 < VAR_2->pos) {


        FUNC_2(VAR_2, "trying to reopen archive for performing seek\n");
        if (FUNC_10(VAR_2) < VAR_1)
            return -1;
    }
    if (VAR_3 > VAR_2->pos) {
        if (!VAR_4->mpa && FUNC_10(VAR_2) < VAR_1)
            return -1;


        char VAR_7[4096];
        while (VAR_3 > VAR_2->pos) {
            if (FUNC_9(VAR_2->cancel))
                return -1;

            int VAR_8 = FUNC_0(VAR_3 - VAR_2->pos, sizeof(VAR_7));
            locale_t VAR_9 = FUNC_11(VAR_4->mpa->locale);
            int VAR_10 = FUNC_5(VAR_4->mpa->arch, VAR_7, VAR_8);
            if (VAR_10 <= 0) {
                if (VAR_10 == 0 && VAR_3 > VAR_4->entry_size) {
                    FUNC_1(VAR_2, "demuxer trying to seek beyond end of archive "
                           "entry\n");
                } else if (VAR_10 == 0) {
                    FUNC_1(VAR_2, "end of archive entry reached while seeking\n");
                } else {
                    FUNC_1(VAR_2, "%s\n", FUNC_4(VAR_4->mpa->arch));
                }
                FUNC_11(VAR_9);
                if (FUNC_7(VAR_4->mpa, VAR_10)) {
                    FUNC_8(VAR_4->mpa);
                    VAR_4->mpa = ((void*)0);
                }
                return -1;
            }
            FUNC_11(VAR_9);
            VAR_2->pos += VAR_10;
        }
    }
    return 1;
}
