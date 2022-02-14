
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ maxoff; } ;
typedef int PostingItem ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

void
FUNC_6(Page VAR_1, OffsetNumber VAR_2)
{
 OffsetNumber VAR_3 = FUNC_3(VAR_1)->maxoff;

 FUNC_0(!FUNC_4(VAR_1));
 FUNC_0(VAR_2 >= VAR_0 && VAR_2 <= VAR_3);

 if (VAR_2 != VAR_3)
  FUNC_5(FUNC_1(VAR_1, VAR_2),
    FUNC_1(VAR_1, VAR_2 + 1),
    sizeof(PostingItem) * (VAR_3 - VAR_2));

 VAR_3--;
 FUNC_3(VAR_1)->maxoff = VAR_3;

 FUNC_2(VAR_1, VAR_3 * sizeof(PostingItem));
}
