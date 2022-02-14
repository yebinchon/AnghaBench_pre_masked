
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct zip_eocd64 {scalar_t__ numentries; int dir_offset; } ;
typedef int off64_t ;
typedef int data ;
typedef int ar_stream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

off64_t FUNC_6(ar_stream *VAR_3, struct zip_eocd64 *VAR_4)
{
    uint8_t VAR_5[VAR_2];
    uint64_t VAR_6;

    if (!FUNC_1(VAR_3, VAR_4->dir_offset, VAR_0))
        return -1;
    for (VAR_6 = 0; VAR_6 < VAR_4->numentries; VAR_6++) {
        if (FUNC_0(VAR_3, VAR_5, sizeof(VAR_5)) != sizeof(VAR_5))
            return -1;
        if (FUNC_5(VAR_5 + 0) != VAR_1)
            return -1;
        if (!FUNC_2(VAR_3, FUNC_4(VAR_5 + 28) + FUNC_4(VAR_5 + 30) + FUNC_4(VAR_5 + 32)))
            return -1;
    }

    return FUNC_3(VAR_3);
}
