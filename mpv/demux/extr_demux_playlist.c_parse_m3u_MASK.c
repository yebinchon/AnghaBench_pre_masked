
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct playlist_entry {int title; } ;
struct pl_parser {scalar_t__ check_level; char* format; int pl; scalar_t__ probing; TYPE_2__* real_stream; } ;
typedef int probe ;
struct TYPE_12__ {char* member_0; int member_1; int len; } ;
typedef TYPE_1__ bstr ;
struct TYPE_13__ {int url; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__,char*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__,char*) ;
 TYPE_1__ FUNC_4 (int ) ;
 char* FUNC_5 (int *,TYPE_1__) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (struct pl_parser*) ;
 int FUNC_9 (struct pl_parser*) ;
 int FUNC_10 (int ,struct playlist_entry*) ;
 struct playlist_entry* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (TYPE_2__*,char*,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct playlist_entry*,char*) ;

__attribute__((used)) static int FUNC_16(struct pl_parser *VAR_2)
{
    bstr VAR_3 = FUNC_4(FUNC_9(VAR_2));
    if (VAR_2->probing && !FUNC_1(VAR_3, "#EXTM3U")) {

        if (VAR_2->check_level == VAR_0) {
            char *VAR_4 = FUNC_7(VAR_2->real_stream->url, ((void*)0));
            char VAR_5[VAR_1];
            int VAR_6 = FUNC_13(VAR_2->real_stream, VAR_5, sizeof(VAR_5));
            bstr VAR_7 = {VAR_5, VAR_6};
            if (VAR_4 && VAR_7.len > 10 && FUNC_6(VAR_7)) {
                const char *VAR_8[] = {"m3u", "m3u8", ((void*)0)};
                for (int VAR_9 = 0; VAR_8[VAR_9]; VAR_9++) {
                    if (FUNC_12(VAR_4, VAR_8[VAR_9]) == 0)
                        goto ok;
                }
            }
        }
        return -1;
    }

ok:
    if (VAR_2->probing)
        return 0;

    char *VAR_10 = ((void*)0);
    while (VAR_3.len || !FUNC_8(VAR_2)) {
        if (FUNC_0(&VAR_3, "#EXTINF:")) {
            bstr VAR_11, VAR_12;
            if (FUNC_2(VAR_3, ",", &VAR_11, &VAR_12) && VAR_12.len) {
                FUNC_14(VAR_10);
                VAR_10 = FUNC_5(((void*)0), VAR_12);
            }
        } else if (FUNC_3(VAR_3, "#EXT-X-")) {
            VAR_2->format = "hls";
        } else if (VAR_3.len > 0 && !FUNC_3(VAR_3, "#")) {
            char *VAR_13 = FUNC_5(((void*)0), VAR_3);
            struct playlist_entry *VAR_14 = FUNC_11(VAR_13);
            FUNC_14(VAR_13);
            VAR_14->title = FUNC_15(VAR_14, VAR_10);
            VAR_10 = ((void*)0);
            FUNC_10(VAR_2->pl, VAR_14);
        }
        VAR_3 = FUNC_4(FUNC_9(VAR_2));
    }
    FUNC_14(VAR_10);
    return 0;
}
