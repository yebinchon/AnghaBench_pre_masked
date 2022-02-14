
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct playlist {int current; int first; } ;
struct m_property {int dummy; } ;
struct m_option {int min; int max; int flags; int type; } ;
struct TYPE_3__ {struct playlist* playlist; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,struct playlist_entry*) ;
 int FUNC_1 (struct playlist*) ;
 struct playlist_entry* FUNC_2 (struct playlist*,int) ;
 int FUNC_3 (struct playlist*,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_6, struct m_property *VAR_7,
                                      int VAR_8, void *VAR_9, int VAR_10)
{
    MPContext *VAR_11 = VAR_6;
    struct playlist *VAR_12 = VAR_11->playlist;
    if (!VAR_12->first)
        return VAR_5;

    switch (VAR_8) {
    case 130: {
        int VAR_13 = FUNC_3(VAR_12, VAR_12->current);
        if (VAR_13 < 0)
            return VAR_5;
        *(int *)VAR_9 = VAR_13 + VAR_10;
        return VAR_4;
    }
    case 128: {
        int VAR_14 = *(int *)VAR_9 - VAR_10;
        struct playlist_entry *VAR_15 = FUNC_2(VAR_12, VAR_14);
        if (!VAR_15)
            return VAR_2;
        FUNC_0(VAR_11, VAR_15);
        return VAR_4;
    }
    case 129: {
        struct m_option VAR_16 = {
            .type = VAR_1,
            .flags = VAR_0,
            .min = VAR_10,
            .max = FUNC_1(VAR_12) - 1 + VAR_10,
        };
        *(struct m_option *)VAR_9 = VAR_16;
        return VAR_4;
    }
    }
    return VAR_3;
}
