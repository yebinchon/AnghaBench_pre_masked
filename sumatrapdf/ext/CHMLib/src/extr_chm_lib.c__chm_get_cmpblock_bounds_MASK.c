
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int start; } ;
struct TYPE_5__ {int block_count; int compressed_len; scalar_t__ table_offset; } ;
struct TYPE_4__ {scalar_t__ start; } ;
struct chmFile {int data_offset; TYPE_3__ cn_unit; TYPE_2__ reset_table; TYPE_1__ rt_unit; } ;
typedef int UInt64 ;
typedef int UChar ;
typedef int Int64 ;


 unsigned int FUNC_0 (struct chmFile*,int *,int,unsigned int) ;
 int FUNC_1 (int **,unsigned int*,int *) ;
 int FUNC_2 (int **,unsigned int*,int*) ;

__attribute__((used)) static int FUNC_3(struct chmFile *VAR_0,
                             UInt64 VAR_1,
                             UInt64 *VAR_2,
                             Int64 *VAR_3)
{
    UChar VAR_4[8], *VAR_5;
    unsigned int VAR_6;


    if (VAR_1 < VAR_0->reset_table.block_count-1)
    {

        VAR_5 = VAR_4;
        VAR_6 = 8;
        if (FUNC_0(VAR_0, VAR_4,
                             (UInt64)VAR_0->data_offset
                                + (UInt64)VAR_0->rt_unit.start
                                + (UInt64)VAR_0->reset_table.table_offset
                                + (UInt64)VAR_1*8,
                             VAR_6) != VAR_6 ||
            !FUNC_2(&VAR_5, &VAR_6, VAR_2))
            return 0;


        VAR_5 = VAR_4;
        VAR_6 = 8;
        if (FUNC_0(VAR_0, VAR_4,
                         (UInt64)VAR_0->data_offset
                                + (UInt64)VAR_0->rt_unit.start
                                + (UInt64)VAR_0->reset_table.table_offset
                                + (UInt64)VAR_1*8 + 8,
                         VAR_6) != VAR_6 ||
            !FUNC_1(&VAR_5, &VAR_6, VAR_3))
            return 0;
    }


    else
    {

        VAR_5 = VAR_4;
        VAR_6 = 8;
        if (FUNC_0(VAR_0, VAR_4,
                             (UInt64)VAR_0->data_offset
                                + (UInt64)VAR_0->rt_unit.start
                                + (UInt64)VAR_0->reset_table.table_offset
                                + (UInt64)VAR_1*8,
                             VAR_6) != VAR_6 ||
            !FUNC_2(&VAR_5, &VAR_6, VAR_2))
            return 0;

        *VAR_3 = VAR_0->reset_table.compressed_len;
    }


    *VAR_3 -= *VAR_2;
    *VAR_2 += VAR_0->data_offset + VAR_0->cn_unit.start;

    return 1;
}
