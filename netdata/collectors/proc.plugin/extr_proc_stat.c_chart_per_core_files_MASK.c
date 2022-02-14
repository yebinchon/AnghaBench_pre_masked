
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_core_single_number_file {int value; scalar_t__ rd; int found; } ;
struct cpu_chart {int id; struct per_core_single_number_file* files; } ;
typedef int collected_number ;
typedef int RRD_ALGORITHM ;
typedef int RRDSET ;


 scalar_t__ FUNC_0 (int *,int ,int *,int ,int ,int ) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cpu_chart *VAR_0, size_t VAR_1, size_t VAR_2, RRDSET *VAR_3, collected_number VAR_4, collected_number VAR_5, RRD_ALGORITHM VAR_6) {
    size_t VAR_7;
    for(VAR_7 = 0; VAR_7 < VAR_1 ; VAR_7++) {
        struct per_core_single_number_file *VAR_8 = &VAR_0[VAR_7].files[VAR_2];

        if(FUNC_2(!VAR_8->found))
            continue;

        if(FUNC_2(!VAR_8->rd))
            VAR_8->rd = FUNC_0(VAR_3, VAR_0[VAR_7].id, ((void*)0), VAR_4, VAR_5, VAR_6);

        FUNC_1(VAR_3, VAR_8->rd, VAR_8->value);
    }
}
