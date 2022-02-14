
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int cdc_average_block_size; } ;
struct TYPE_5__ {scalar_t__ st_size; } ;
typedef int SeafileCrypt ;
typedef TYPE_1__ SeafStat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,TYPE_1__*,int *,int,int,int,int,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 TYPE_2__* VAR_3 ;

int
FUNC_4 (const char *VAR_4, SeafStat *VAR_5, const unsigned char *VAR_6,
                      SeafileCrypt *VAR_7, int VAR_8)
{
    unsigned char VAR_9[20];

    if (VAR_5->st_size == 0) {
        FUNC_3 (VAR_9, 0, 20);
        return FUNC_2 (VAR_9, VAR_6);
    } else {
        if (VAR_3->cdc_average_block_size == 0) {
            if (FUNC_1 (VAR_4, VAR_5, VAR_7, VAR_8,
                                          VAR_0,
                                          VAR_2,
                                          VAR_1,
                                          VAR_9) < 0) {
                return -1;
            }
        } else {
            if (FUNC_1 (VAR_4, VAR_5, VAR_7, VAR_8,
                                          VAR_3->cdc_average_block_size,
                                          VAR_3->cdc_average_block_size >> 1,
                                          VAR_3->cdc_average_block_size << 1,
                                          VAR_9) < 0) {
                return -1;
            }
        }
        if (FUNC_2 (VAR_9, VAR_6) == 0)
            return 0;


        uint32_t VAR_10 = FUNC_0 (VAR_5->st_size);
        if (FUNC_1 (VAR_4, VAR_5, VAR_7, VAR_8,
                                      VAR_10,
                                      VAR_10 >> 2,
                                      VAR_10 << 2,
                                      VAR_9) < 0) {
            return -1;
        }
        return FUNC_2 (VAR_9, VAR_6);
    }
}
