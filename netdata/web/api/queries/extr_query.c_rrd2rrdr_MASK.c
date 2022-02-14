
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef int time_t ;
struct rrdeng_region_info {int update_every; } ;
struct TYPE_8__ {int update_every; scalar_t__ rrd_memory_mode; } ;
typedef TYPE_1__ RRDSET ;
typedef int RRDR_OPTIONS ;
typedef int RRDR_GROUPING ;
typedef int RRDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rrdeng_region_info*) ;
 int * FUNC_1 (TYPE_1__*,long,long long,long long,int ,long,int ,char const*,int,int ,int ,int) ;
 int * FUNC_2 (TYPE_1__*,long,long long,long long,int ,long,int ,char const*,int,int ,int ,int,struct rrdeng_region_info*) ;
 unsigned int FUNC_3 (TYPE_1__*,long long,long long,struct rrdeng_region_info**,unsigned int*) ;
 int FUNC_4 (long long*,long long*,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

RRDR *FUNC_7(
        RRDSET *VAR_1
        , long VAR_2
        , long long VAR_3
        , long long VAR_4
        , RRDR_GROUPING VAR_5
        , long VAR_6
        , RRDR_OPTIONS VAR_7
        , const char *VAR_8
) {
    int VAR_9;
    int VAR_10;
    time_t VAR_11 = FUNC_5(VAR_1);
    time_t VAR_12 = FUNC_6(VAR_1);

    VAR_9 = VAR_1->update_every;
    VAR_10 = FUNC_4(&VAR_3, &VAR_4,
                                                                      VAR_9, VAR_11,
                                                                      VAR_12);
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                              VAR_6, VAR_7, VAR_8,
                              VAR_9, VAR_11, VAR_12, VAR_10);
}
