
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double score; int ele; } ;
typedef TYPE_1__ zskiplistNode ;
struct zskiplistLevel {int dummy; } ;
typedef int sds ;


 TYPE_1__* FUNC_0 (int) ;

zskiplistNode *FUNC_1(int VAR_0, double VAR_1, sds VAR_2) {
    zskiplistNode *VAR_3 =
        FUNC_0(sizeof(*VAR_3)+VAR_0*sizeof(struct zskiplistLevel));
    VAR_3->score = VAR_1;
    VAR_3->ele = VAR_2;
    return VAR_3;
}
