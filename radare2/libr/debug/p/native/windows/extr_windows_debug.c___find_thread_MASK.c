
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int threads; } ;
struct TYPE_5__ {int * data; } ;
typedef TYPE_1__ RListIter ;
typedef int RListComparator ;
typedef TYPE_2__ RDebug ;
typedef int * PTHREAD_ITEM ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int*,int ) ;

__attribute__((used)) static inline PTHREAD_ITEM FUNC_1(RDebug *VAR_1, int VAR_2) {
 RListIter *VAR_3 = FUNC_0 (VAR_1->threads, &VAR_2, (RListComparator)VAR_0);
 return VAR_3 ? VAR_3->data : ((void*)0);
}
