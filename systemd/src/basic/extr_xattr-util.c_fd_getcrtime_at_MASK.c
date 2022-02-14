
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_5__ {int stx_mask; TYPE_1__ stx_btime; } ;
typedef TYPE_2__ struct_statx ;
typedef int le64_t ;
typedef int le ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,char const*,char*,int *,int,int,size_t*) ;
 int FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int,int ,int,int,TYPE_2__*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(int VAR_9, const char *VAR_10, usec_t *VAR_11, int VAR_12) {
        struct_statx VAR_13




                ;
        usec_t VAR_14, VAR_15;
        le64_t VAR_16;
        size_t VAR_17;
        int VAR_18;

        FUNC_1(VAR_11);

        if (VAR_12 & ~(VAR_0|VAR_2))
                return -VAR_3;
        if (FUNC_4(VAR_9, FUNC_5(VAR_10), VAR_12|VAR_1, VAR_6, &VAR_13) >= 0 &&
            (VAR_13.stx_mask & VAR_6) &&
            VAR_13.stx_btime.tv_sec != 0)
                VAR_14 = (usec_t) VAR_13.stx_btime.tv_sec * VAR_8 +
                        (usec_t) VAR_13.stx_btime.tv_nsec / VAR_5;
        else
                VAR_14 = VAR_7;

        VAR_18 = FUNC_2(VAR_9, VAR_10, "user.crtime_usec", &VAR_16, sizeof(VAR_16), VAR_12, &VAR_17);
        if (VAR_18 >= 0) {
                if (VAR_17 != sizeof(VAR_16))
                        VAR_18 = -VAR_4;
                else
                        VAR_18 = FUNC_3(VAR_16, &VAR_15);
        }
        if (VAR_18 < 0) {
                if (VAR_14 != VAR_7) {
                        *VAR_11 = VAR_14;
                        return 0;
                }

                return VAR_18;
        }

        if (VAR_14 != VAR_7)
                *VAR_11 = FUNC_0(VAR_14, VAR_15);
        else
                *VAR_11 = VAR_15;

        return 0;
}
