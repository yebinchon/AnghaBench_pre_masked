
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_8__ {int message; } ;
struct TYPE_7__ {scalar_t__ st_size; int st_mode; } ;
typedef TYPE_1__ STAT_STRUCT ;
typedef TYPE_2__ GError ;
typedef int GDir ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,int ,TYPE_2__**) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__**,int ,int ,char*,char const*,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static gint64
FUNC_10 (const char *VAR_2, GError **VAR_3)
{
    gint64 VAR_4 = 0;

    GError *VAR_5 = ((void*)0);
    GDir *VAR_6 = FUNC_5(VAR_2, 0, &VAR_5);
    if (!VAR_6) {
        FUNC_8 (VAR_3, VAR_0, 0,
                     "g_open() dir %s failed:%s\n", VAR_2, VAR_5->message);
        return -1;
    }

    const char *VAR_7 = ((void*)0);
    while ((VAR_7 = FUNC_6(VAR_6)) != ((void*)0)) {
        STAT_STRUCT VAR_8;
        char *VAR_9= FUNC_3 (VAR_2, VAR_7, ((void*)0));
        if (FUNC_0(VAR_9, &VAR_8) < 0) {
            FUNC_8 (VAR_3, VAR_0, 0, "failed to stat on %s: %s\n",
                         VAR_9, FUNC_9(VAR_1));
            FUNC_7(VAR_9);
            FUNC_4(VAR_6);
            return -1;
        }

        if (FUNC_1(VAR_8.st_mode)) {
            gint64 VAR_10 = FUNC_10(VAR_9, VAR_3);
            if (VAR_10 < 0) {
                FUNC_7 (VAR_9);
                FUNC_4 (VAR_6);
                return -1;
            }
            VAR_4 += VAR_10;
            FUNC_7(VAR_9);
        } else if (FUNC_2(VAR_8.st_mode)) {
            VAR_4 += VAR_8.st_size;
            FUNC_7(VAR_9);
        }
    }

    FUNC_4 (VAR_6);
    return VAR_4;
}
