
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grouping_des {double beta; double beta_other; } ;
typedef int RRDR ;


 double FUNC_0 (int *,struct grouping_des*) ;

__attribute__((used)) static inline void FUNC_1(RRDR *VAR_0, struct grouping_des *VAR_1) {



    VAR_1->beta = 2.0 / (FUNC_0(VAR_0, VAR_1) + 1.0);
    VAR_1->beta_other = 1.0 - VAR_1->beta;


}
