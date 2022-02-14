
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_alloc_efficiency; int rd_alloc_efficiency; int st_comp_ratio; int rd_comp_ratio; int st_savings; int rd_original_size; int rd_savings_size; int st_usage; int rd_metadata_size; int rd_compr_data_size; int file; } ;
typedef TYPE_1__ ZRAM_DEVICE ;
struct TYPE_6__ {int compr_data_size; int mem_used_total; int orig_data_size; } ;
typedef TYPE_2__ MM_STAT ;
typedef int DICTIONARY ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(char* VAR_0, ZRAM_DEVICE *VAR_1, int VAR_2, DICTIONARY* VAR_3) {
    MM_STAT VAR_4;
    int VAR_5;
    if (FUNC_6(FUNC_2(VAR_1->file, &VAR_4) < 0))
    {
        FUNC_0(VAR_3, VAR_0);
        return -1;
    }

    if (FUNC_1(VAR_2))
    {
        FUNC_5(VAR_1->st_usage);
        FUNC_5(VAR_1->st_savings);
        FUNC_5(VAR_1->st_comp_ratio);
        FUNC_5(VAR_1->st_alloc_efficiency);
    }

    FUNC_3(VAR_1->st_usage, VAR_1->rd_compr_data_size, VAR_4.compr_data_size);
    FUNC_3(VAR_1->st_usage, VAR_1->rd_metadata_size, VAR_4.mem_used_total - VAR_4.compr_data_size);
    FUNC_4(VAR_1->st_usage);

    FUNC_3(VAR_1->st_savings, VAR_1->rd_savings_size, VAR_4.compr_data_size - VAR_4.orig_data_size);
    FUNC_3(VAR_1->st_savings, VAR_1->rd_original_size, VAR_4.orig_data_size);
    FUNC_4(VAR_1->st_savings);

    VAR_5 = VAR_4.compr_data_size == 0 ? 1 : VAR_4.orig_data_size * 100 / VAR_4.compr_data_size;
    FUNC_3(VAR_1->st_comp_ratio, VAR_1->rd_comp_ratio, VAR_5);
    FUNC_4(VAR_1->st_comp_ratio);

    VAR_5 = VAR_4.mem_used_total == 0 ? 100 : (VAR_4.compr_data_size * 1000000 / VAR_4.mem_used_total);
    FUNC_3(VAR_1->st_alloc_efficiency, VAR_1->rd_alloc_efficiency, VAR_5);
    FUNC_4(VAR_1->st_alloc_efficiency);
    return 0;
}
