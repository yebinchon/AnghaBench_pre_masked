
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct mpv_node {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_8__ {int playback_initialized; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;


 char* FUNC_0 (TYPE_1__*,int) ;
 double FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (int,void*,int,int ,TYPE_1__*) ;
 char* FUNC_5 (double,int) ;
 int FUNC_6 (TYPE_1__*,struct mpv_node*) ;
 char* FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(void *VAR_4, struct m_property *VAR_5,
                                     int VAR_6, void *VAR_7)
{
    MPContext *VAR_8 = VAR_4;
    int VAR_9 = FUNC_2(VAR_8);
    switch (VAR_6) {
    case 129: {
        int VAR_10 = VAR_8->playback_initialized ? FUNC_3(VAR_8) : -1;
        char *VAR_11 = ((void*)0);
        int VAR_12;

        if (VAR_9 < 1) {
            VAR_11 = FUNC_7(VAR_11, "No chapters.");
        }

        for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
            char *VAR_13 = FUNC_0(VAR_8, VAR_12);
            double VAR_14 = FUNC_1(VAR_8, VAR_12);
            char* VAR_15 = FUNC_5(VAR_14, 0);
            VAR_11 = FUNC_7(VAR_11, "%s", VAR_15);
            FUNC_8(VAR_15);
            const char *VAR_16 = VAR_12 == VAR_10 ? VAR_2 : VAR_3;
            VAR_11 = FUNC_7(VAR_11, "   %s%s\n", VAR_16, VAR_13);
            FUNC_8(VAR_13);
        }

        *(char **)VAR_7 = VAR_11;
        return VAR_0;
    }
    case 128: {
        struct mpv_node *VAR_17 = VAR_7;
        return FUNC_6(VAR_8, VAR_17);
    }
    }
    return FUNC_4(VAR_6, VAR_7, VAR_9, VAR_1, VAR_8);
}
