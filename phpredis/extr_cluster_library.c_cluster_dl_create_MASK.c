
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int clusterKeyVal ;
struct TYPE_3__ {int size; scalar_t__ len; void* entry; } ;
typedef TYPE_1__ clusterDistList ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static clusterDistList *FUNC_1() {
    clusterDistList *VAR_1;

    VAR_1 = FUNC_0(sizeof(clusterDistList));
    VAR_1->entry = FUNC_0(VAR_0 * sizeof(clusterKeyVal));
    VAR_1->size = VAR_0;
    VAR_1->len = 0;

    return VAR_1;
}
