
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef scalar_t__ bool_t ;
typedef scalar_t__ ULONG ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(ULONG VAR_14, int VAR_15, bool_t VAR_16,
                                     uint32_t *VAR_17, uint32_t *VAR_18,
                                     uint32_t *VAR_19)
{
    int VAR_20 = VAR_11;
    if (VAR_14 == VAR_8) {
        if (VAR_15 == VAR_10)
            *VAR_19 = VAR_1;

        *VAR_17 = VAR_12;
        if (VAR_16) *VAR_18 = VAR_9;
        else *VAR_18 = VAR_2;
    } else if (VAR_14 == VAR_3) {

        if (!VAR_15)
            VAR_20 = VAR_0;
        else {
            *VAR_17 = VAR_12;
            if (VAR_16) *VAR_18 = VAR_9;
            else *VAR_18 = VAR_2;
        }
    } else if (VAR_14 == VAR_4) {
        if (VAR_15 == VAR_10)
            VAR_20 = VAR_1;
        else
            *VAR_17 = VAR_13;
    } else if (VAR_14 == VAR_5) {
        if (VAR_15 == VAR_10) {
            FUNC_0(1, "creating new file\n");
            *VAR_17 = VAR_12;
            *VAR_19 = VAR_1;
        } else {
            FUNC_0(1, "opening existing file\n");
            *VAR_17 = VAR_13;
        }
    } else if (VAR_14 == VAR_6) {
        if (VAR_15 == VAR_10)
            VAR_20 = VAR_1;

        *VAR_17 = VAR_12;
    } else if (VAR_14 == VAR_7) {
        if (VAR_15 == VAR_10)
            *VAR_19 = VAR_1;

        *VAR_17 = VAR_12;
    }
    return VAR_20;
}
