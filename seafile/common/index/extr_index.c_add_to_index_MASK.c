
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct TYPE_8__ {scalar_t__ sec; } ;
struct TYPE_7__ {scalar_t__ sec; } ;
struct cache_entry {int ce_flags; int modifier; int sha1; TYPE_2__ ce_ctime; TYPE_1__ ce_mtime; int ce_mode; int name; } ;
typedef int mode_t ;
typedef int gboolean ;
struct TYPE_9__ {scalar_t__ st_ctime; scalar_t__ st_mtime; int st_mode; } ;
typedef int SeafileCrypt ;
typedef TYPE_3__ SeafStat ;
typedef scalar_t__ (* IndexCB ) (char const*,int,char const*,unsigned char*,int *,int ) ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct index_state*,struct cache_entry*,int) ;
 int FUNC_5 (int) ;
 struct cache_entry* FUNC_6 (int,int) ;
 int FUNC_7 (struct cache_entry*) ;
 int FUNC_8 (struct cache_entry*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct cache_entry*,TYPE_3__*) ;
 int FUNC_11 (struct cache_entry*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct cache_entry*,TYPE_3__*,unsigned int) ;
 struct cache_entry* FUNC_14 (struct index_state*,int ,int ,int) ;
 scalar_t__ FUNC_15 (int ,unsigned char*,int) ;
 int FUNC_16 (int ,...) ;
 int FUNC_17 (struct index_state*,int ) ;
 int FUNC_18 (char*,char const*) ;
 int FUNC_19 (char const*) ;

int FUNC_20(const char *VAR_8,
                 int VAR_9,
                 struct index_state *VAR_10,
                 const char *VAR_11,
                 const char *VAR_12,
                 SeafStat *VAR_13,
                 int VAR_14,
                 SeafileCrypt *VAR_15,
                 IndexCB VAR_16,
                 const char *VAR_17,
                 gboolean *VAR_18)
{
    int VAR_19, VAR_20;
    mode_t VAR_21 = VAR_13->st_mode;
    struct cache_entry *VAR_22, *VAR_23;
    unsigned char VAR_24[20];
    unsigned VAR_25 = VAR_4|VAR_3|VAR_5;
    int VAR_26 = (VAR_0|VAR_1);

    *VAR_18 = VAR_6;

    if (!FUNC_3(VAR_21) && !FUNC_2(VAR_21) && !FUNC_1(VAR_21)) {
        FUNC_18("%s: can only add regular files, symbolic links or git-directories\n", VAR_11);
        return -1;
    }

    VAR_20 = FUNC_19(VAR_11);




    VAR_19 = FUNC_5(VAR_20);
    VAR_22 = FUNC_6(1, VAR_19);
    FUNC_16(VAR_22->name, VAR_11, VAR_20);
    VAR_22->ce_flags = VAR_20;
    FUNC_10(VAR_22, VAR_13);

    VAR_22->ce_mode = FUNC_9(VAR_21);

    VAR_23 = FUNC_14(VAR_10, VAR_22->name, FUNC_7(VAR_22), 0);
    if (VAR_23) {
        if (!FUNC_8(VAR_23) && !FUNC_13(VAR_23, VAR_13, VAR_25)) {
            FUNC_11(VAR_22);
            return 0;
        }
    } else {
    }
    if (VAR_16 (VAR_8, VAR_9, VAR_12, VAR_24, VAR_15, VAR_7) < 0) {
        FUNC_11 (VAR_22);
        return -1;
    }

    FUNC_16 (VAR_22->sha1, VAR_24, 20);
    VAR_22->ce_flags |= VAR_2;
    VAR_22->modifier = FUNC_12(VAR_17);

    if (FUNC_4(VAR_10, VAR_22, VAR_26)) {
        FUNC_18("unable to add %s to index\n",VAR_11);
        return -1;
    }




    *VAR_18 = VAR_7;

    return 0;
}
