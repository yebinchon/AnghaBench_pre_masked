
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ arrb; scalar_t__ arre; } ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_1__ QUERYTYPE ;
typedef TYPE_2__ CHKVAL ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__,void*,int,int ) ;

bool
FUNC_5(QUERYTYPE *VAR_1, ArrayType *VAR_2, bool VAR_3)
{
 CHKVAL VAR_4;

 FUNC_2(VAR_2);
 VAR_4.arrb = FUNC_1(VAR_2);
 VAR_4.arre = VAR_4.arrb + FUNC_0(VAR_2);
 return FUNC_4(FUNC_3(VAR_1) + VAR_1->size - 1,
       (void *) &VAR_4, VAR_3,
       VAR_0);
}
