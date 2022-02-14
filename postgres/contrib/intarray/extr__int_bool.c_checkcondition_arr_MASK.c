
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {scalar_t__* arre; scalar_t__* arrb; } ;
struct TYPE_4__ {scalar_t__ val; } ;
typedef TYPE_1__ ITEM ;
typedef TYPE_2__ CHKVAL ;



__attribute__((used)) static bool
FUNC_0(void *VAR_0, ITEM *VAR_1)
{
 int32 *VAR_2 = ((CHKVAL *) VAR_0)->arrb;
 int32 *VAR_3 = ((CHKVAL *) VAR_0)->arre;
 int32 *VAR_4;



 while (VAR_2 < VAR_3)
 {
  VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
  if (*VAR_4 == VAR_1->val)
   return 1;
  else if (*VAR_4 < VAR_1->val)
   VAR_2 = VAR_4 + 1;
  else
   VAR_3 = VAR_4;
 }
 return 0;
}
