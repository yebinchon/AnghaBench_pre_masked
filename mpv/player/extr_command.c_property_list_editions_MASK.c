
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct demuxer {int num_editions; int edition; struct demux_edition* editions; } ;
struct demux_edition {int metadata; } ;
struct TYPE_3__ {struct demuxer* demuxer; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,void*,int,int ,TYPE_1__*) ;
 char* FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*,char*,...) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_6, struct m_property *VAR_7,
                                  int VAR_8, void *VAR_9)
{
    MPContext *VAR_10 = VAR_6;
    struct demuxer *VAR_11 = VAR_10->demuxer;
    if (!VAR_11)
        return VAR_2;

    if (VAR_8 == VAR_1) {
        char *VAR_12 = ((void*)0);

        struct demux_edition *VAR_13 = VAR_11->editions;
        int VAR_14 = VAR_11->num_editions;
        int VAR_15 = VAR_11->edition;

        if (!VAR_14)
            VAR_12 = FUNC_2(VAR_12, "No editions.");

        for (int VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
            struct demux_edition *VAR_17 = &VAR_13[VAR_16];

            VAR_12 = FUNC_3(VAR_12, VAR_16 == VAR_15 ? VAR_4
                                                         : VAR_5);
            VAR_12 = FUNC_2(VAR_12, "%d: ", VAR_16);
            char *VAR_18 = FUNC_1(VAR_17->metadata, "title");
            if (!VAR_18)
                VAR_18 = "unnamed";
            VAR_12 = FUNC_2(VAR_12, "'%s'\n", VAR_18);
        }

        *(char **)VAR_9 = VAR_12;
        return VAR_0;
    }
    return FUNC_0(VAR_8, VAR_9, VAR_11->num_editions,
                                VAR_3, VAR_10);
}
