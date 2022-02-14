
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rclist; int cclist; } ;
typedef TYPE_1__ InvalidationListHeader ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(InvalidationListHeader *VAR_0,
         InvalidationListHeader *VAR_1)
{
 FUNC_0(&VAR_0->cclist, &VAR_1->cclist);
 FUNC_0(&VAR_0->rclist, &VAR_1->rclist);
}
