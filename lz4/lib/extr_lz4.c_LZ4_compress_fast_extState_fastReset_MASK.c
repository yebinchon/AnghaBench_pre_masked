
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uptrval ;
typedef int tableType_t ;
struct TYPE_5__ {scalar_t__ currentOffset; } ;
struct TYPE_6__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_1__ LZ4_stream_t_internal ;
typedef TYPE_2__ LZ4_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,char*,int,int *,int,int ,int const,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_3(void* VAR_11, const char* VAR_12, char* VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
    LZ4_stream_t_internal* VAR_17 = &((LZ4_stream_t*)VAR_11)->internal_donotuse;
    if (VAR_16 < 1) VAR_16 = VAR_0;

    if (VAR_15 >= FUNC_0(VAR_14)) {
        if (VAR_14 < VAR_1) {
            const tableType_t VAR_18 = VAR_4;
            FUNC_2(VAR_17, VAR_14, VAR_18);
            if (VAR_17->currentOffset) {
                return FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, ((void*)0), 0, VAR_10, VAR_18, VAR_8, VAR_6, VAR_16);
            } else {
                return FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, ((void*)0), 0, VAR_10, VAR_18, VAR_8, VAR_9, VAR_16);
            }
        } else {
            const tableType_t VAR_19 = ((sizeof(void*)==4) && ((uptrval)VAR_12 > VAR_2)) ? VAR_3 : VAR_5;
            FUNC_2(VAR_17, VAR_14, VAR_19);
            return FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, ((void*)0), 0, VAR_10, VAR_19, VAR_8, VAR_9, VAR_16);
        }
    } else {
        if (VAR_14 < VAR_1) {
            const tableType_t VAR_20 = VAR_4;
            FUNC_2(VAR_17, VAR_14, VAR_20);
            if (VAR_17->currentOffset) {
                return FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, ((void*)0), VAR_15, VAR_7, VAR_20, VAR_8, VAR_6, VAR_16);
            } else {
                return FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, ((void*)0), VAR_15, VAR_7, VAR_20, VAR_8, VAR_9, VAR_16);
            }
        } else {
            const tableType_t VAR_21 = ((sizeof(void*)==4) && ((uptrval)VAR_12 > VAR_2)) ? VAR_3 : VAR_5;
            FUNC_2(VAR_17, VAR_14, VAR_21);
            return FUNC_1(VAR_17, VAR_12, VAR_13, VAR_14, ((void*)0), VAR_15, VAR_7, VAR_21, VAR_8, VAR_9, VAR_16);
        }
    }
}
