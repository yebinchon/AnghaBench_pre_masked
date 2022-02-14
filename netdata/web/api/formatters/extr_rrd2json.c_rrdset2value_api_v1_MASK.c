
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int time_t ;
typedef int calculated_number ;
struct TYPE_6__ {int result_options; int before; int after; } ;
typedef int RRDSET ;
typedef TYPE_1__ RRDR ;
typedef int BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,long,long long,long long,int,long,int,char const*) ;
 int FUNC_3 (TYPE_1__*,long,int,int*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(
          RRDSET *VAR_6
        , BUFFER *VAR_7
        , calculated_number *VAR_8
        , const char *VAR_9
        , long VAR_10
        , long long VAR_11
        , long long VAR_12
        , int VAR_13
        , long VAR_14
        , uint32_t VAR_15
        , time_t *VAR_16
        , time_t *VAR_17
        , int *VAR_18
) {
    RRDR *VAR_19 = FUNC_2(VAR_6, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_9);
    if(!VAR_19) {
        if(VAR_18) *VAR_18 = 1;
        return VAR_1;
    }

    if(FUNC_5(VAR_19) == 0) {
        FUNC_4(VAR_19);

        if(VAR_16) *VAR_16 = 0;
        if(VAR_17) *VAR_17 = 0;
        if(VAR_18) *VAR_18 = 1;

        return VAR_0;
    }

    if(VAR_7) {
        if (VAR_19->result_options & VAR_5)
            FUNC_1(VAR_7);
        else if (VAR_19->result_options & VAR_4)
            FUNC_0(VAR_7);
    }

    if(VAR_16) *VAR_16 = VAR_19->after;
    if(VAR_17) *VAR_17 = VAR_19->before;

    long VAR_20 = (!(VAR_15 & VAR_3))?FUNC_5(VAR_19) - 1:0;
    *VAR_8 = FUNC_3(VAR_19, VAR_20, VAR_15, VAR_18);

    FUNC_4(VAR_19);
    return VAR_2;
}
