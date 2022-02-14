
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** typelib_segment_data; } ;
typedef TYPE_1__ msft_typelib_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,int,int ) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void FUNC_3(msft_typelib_t *VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
    const unsigned int VAR_5 = FUNC_1(VAR_4, VAR_3);
    if ((VAR_5 & 0x3ffffff) == VAR_5) {
        *VAR_2 = 0x80000000;
        *VAR_2 |= VAR_3 << 26;
        *VAR_2 |= VAR_5;
    } else {
        int VAR_6 = FUNC_0(VAR_1, VAR_0, 8, 0);
        *((unsigned short *)&VAR_1->typelib_segment_data[VAR_0][VAR_6]) = VAR_3;
        FUNC_2(&VAR_1->typelib_segment_data[VAR_0][VAR_6+2], &VAR_4, 4);
        *((unsigned short *)&VAR_1->typelib_segment_data[VAR_0][VAR_6+6]) = 0x5757;
        *VAR_2 = VAR_6;
    }
}
