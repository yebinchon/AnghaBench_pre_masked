
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** typelib_segment_data; } ;
typedef TYPE_1__ msft_typelib_t ;
typedef int len ;


 size_t VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t,int,int ) ;
 int FUNC_1 (int *,...) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(msft_typelib_t *VAR_2, int *VAR_3, const char *VAR_4)
{
    int VAR_5 = FUNC_2(VAR_4), VAR_6 = (VAR_5 + 6 + 3) & ~0x3;
    int VAR_7 = FUNC_0(VAR_2, VAR_0, VAR_6, 0);
    *((unsigned short *)&VAR_2->typelib_segment_data[VAR_0][VAR_7]) = VAR_1;
    FUNC_1(&VAR_2->typelib_segment_data[VAR_0][VAR_7+2], &VAR_5, sizeof(VAR_5));
    FUNC_1(&VAR_2->typelib_segment_data[VAR_0][VAR_7+6], VAR_4, VAR_5);
    VAR_5 += 6;
    while(VAR_5 < VAR_6) {
        *((char *)&VAR_2->typelib_segment_data[VAR_0][VAR_7+VAR_5]) = 0x57;
        VAR_5++;
    }
    *VAR_3 = VAR_7;
}
