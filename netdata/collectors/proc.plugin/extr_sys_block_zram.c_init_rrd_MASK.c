
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* st_alloc_efficiency; void* rd_alloc_efficiency; void* st_comp_ratio; void* rd_comp_ratio; void* st_savings; void* rd_original_size; void* rd_savings_size; void* st_usage; void* rd_metadata_size; void* rd_compr_data_size; } ;
typedef TYPE_1__ ZRAM_DEVICE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (void*,char*,int *,int,int,int ) ;
 void* FUNC_1 (char*,char*,char*,char const*,char*,char*,char*,int ,int ,int ,int,int ) ;
 int FUNC_2 (char*,int ,char*,char const*) ;

__attribute__((used)) static inline void FUNC_3(const char *VAR_10, ZRAM_DEVICE *VAR_11, int VAR_12) {
    char VAR_13[VAR_9 + 1];

    FUNC_2(VAR_13, VAR_9, "zram_usage.%s", VAR_10);
    VAR_11->st_usage = FUNC_1(
        "mem"
        , VAR_13
        , VAR_13
        , VAR_10
        , "mem.zram_usage"
        , "ZRAM Memory Usage"
        , "MiB"
        , VAR_5
        , VAR_4
        , VAR_0
        , VAR_12
        , VAR_6);
    VAR_11->rd_compr_data_size = FUNC_0(VAR_11->st_usage, "compressed", ((void*)0), 1, 1024 * 1024, VAR_8);
    VAR_11->rd_metadata_size = FUNC_0(VAR_11->st_usage, "metadata", ((void*)0), 1, 1024 * 1024, VAR_8);

    FUNC_2(VAR_13, VAR_9, "zram_savings.%s", VAR_10);
    VAR_11->st_savings = FUNC_1(
        "mem"
        , VAR_13
        , VAR_13
        , VAR_10
        , "mem.zram_savings"
        , "ZRAM Memory Savings"
        , "MiB"
        , VAR_5
        , VAR_4
        , VAR_3
        , VAR_12
        , VAR_6);
    VAR_11->rd_savings_size = FUNC_0(VAR_11->st_savings, "savings", ((void*)0), 1, 1024 * 1024, VAR_8);
    VAR_11->rd_original_size = FUNC_0(VAR_11->st_savings, "original", ((void*)0), 1, 1024 * 1024, VAR_8);

    FUNC_2(VAR_13, VAR_9, "zram_ratio.%s", VAR_10);
    VAR_11->st_comp_ratio = FUNC_1(
        "mem"
        , VAR_13
        , VAR_13
        , VAR_10
        , "mem.zram_ratio"
        , "ZRAM Compression Ratio (original to compressed)"
        , "ratio"
        , VAR_5
        , VAR_4
        , VAR_2
        , VAR_12
        , VAR_7);
    VAR_11->rd_comp_ratio = FUNC_0(VAR_11->st_comp_ratio, "ratio", ((void*)0), 1, 100, VAR_8);

    FUNC_2(VAR_13, VAR_9, "zram_efficiency.%s", VAR_10);
    VAR_11->st_alloc_efficiency = FUNC_1(
        "mem"
        , VAR_13
        , VAR_13
        , VAR_10
        , "mem.zram_efficiency"
        , "ZRAM Efficiency"
        , "percentage"
        , VAR_5
        , VAR_4
        , VAR_1
        , VAR_12
        , VAR_7);
    VAR_11->rd_alloc_efficiency = FUNC_0(VAR_11->st_alloc_efficiency, "percent", ((void*)0), 1, 10000, VAR_8);
}
