
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uptrval ;
typedef int tableType_t ;
struct TYPE_2__ {int internal_donotuse; } ;
typedef int LZ4_stream_t_internal ;
typedef int LZ4_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int * const,char const*,char*,int,int *,int,int ,int const,int ,int ,int) ;
 TYPE_1__* FUNC_2 (void*,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_4(void* VAR_10, const char* VAR_11, char* VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
    LZ4_stream_t_internal* const VAR_16 = & FUNC_2(VAR_10, sizeof(LZ4_stream_t)) -> internal_donotuse;
    FUNC_3(VAR_16 != ((void*)0));
    if (VAR_15 < 1) VAR_15 = VAR_0;
    if (VAR_14 >= FUNC_0(VAR_13)) {
        if (VAR_13 < VAR_1) {
            return FUNC_1(VAR_16, VAR_11, VAR_12, VAR_13, ((void*)0), 0, VAR_9, VAR_4, VAR_7, VAR_8, VAR_15);
        } else {
            const tableType_t VAR_17 = ((sizeof(void*)==4) && ((uptrval)VAR_11 > VAR_2)) ? VAR_3 : VAR_5;
            return FUNC_1(VAR_16, VAR_11, VAR_12, VAR_13, ((void*)0), 0, VAR_9, VAR_17, VAR_7, VAR_8, VAR_15);
        }
    } else {
        if (VAR_13 < VAR_1) {
            return FUNC_1(VAR_16, VAR_11, VAR_12, VAR_13, ((void*)0), VAR_14, VAR_6, VAR_4, VAR_7, VAR_8, VAR_15);
        } else {
            const tableType_t VAR_18 = ((sizeof(void*)==4) && ((uptrval)VAR_11 > VAR_2)) ? VAR_3 : VAR_5;
            return FUNC_1(VAR_16, VAR_11, VAR_12, VAR_13, ((void*)0), VAR_14, VAR_6, VAR_18, VAR_7, VAR_8, VAR_15);
        }
    }
}
