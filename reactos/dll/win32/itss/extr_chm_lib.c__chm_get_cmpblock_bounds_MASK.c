
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int start; } ;
struct TYPE_5__ {int block_count; int table_offset; int compressed_len; } ;
struct TYPE_4__ {int start; } ;
struct chmFile {int data_offset; TYPE_3__ cn_unit; TYPE_2__ reset_table; TYPE_1__ rt_unit; } ;
typedef int UInt64 ;
typedef int UInt32 ;
typedef int UChar ;
typedef int Int64 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chmFile*,int *,int,int) ;
 int FUNC_1 (int **,int*,int *) ;
 int FUNC_2 (int **,int*,int*) ;

__attribute__((used)) static BOOL FUNC_3(struct chmFile *VAR_2,
                                     UInt64 VAR_3,
                                     UInt64 *VAR_4,
                                     Int64 *VAR_5)
{
    UChar VAR_6[8], *VAR_7;
    UInt32 VAR_8;


    if (VAR_3 < VAR_2->reset_table.block_count-1)
    {

        VAR_7 = VAR_6;
        VAR_8 = 8;
        if (FUNC_0(VAR_2, VAR_6,
                             VAR_2->data_offset
                                + VAR_2->rt_unit.start
                                + VAR_2->reset_table.table_offset
                                + VAR_3*8,
                             VAR_8) != VAR_8 ||
            !FUNC_2(&VAR_7, &VAR_8, VAR_4))
            return VAR_0;


        VAR_7 = VAR_6;
        VAR_8 = 8;
        if (FUNC_0(VAR_2, VAR_6,
                             VAR_2->data_offset
                                + VAR_2->rt_unit.start
                                + VAR_2->reset_table.table_offset
                                + VAR_3*8 + 8,
                         VAR_8) != VAR_8 ||
            !FUNC_1(&VAR_7, &VAR_8, VAR_5))
            return VAR_0;
    }


    else
    {

        VAR_7 = VAR_6;
        VAR_8 = 8;
        if (FUNC_0(VAR_2, VAR_6,
                             VAR_2->data_offset
                                + VAR_2->rt_unit.start
                                + VAR_2->reset_table.table_offset
                                + VAR_3*8,
                             VAR_8) != VAR_8 ||
            !FUNC_2(&VAR_7, &VAR_8, VAR_4))
            return VAR_0;

        *VAR_5 = VAR_2->reset_table.compressed_len;
    }


    *VAR_5 -= *VAR_4;
    *VAR_4 += VAR_2->data_offset + VAR_2->cn_unit.start;

    return VAR_1;
}
