
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
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (char*,char*,scalar_t__) ;

void
FUNC_8(Page VAR_2, PostingItem *VAR_3, OffsetNumber VAR_4)
{
 OffsetNumber VAR_5 = FUNC_3(VAR_2)->maxoff;
 char *VAR_6;

 FUNC_0(FUNC_5(VAR_3) != VAR_0);
 FUNC_0(!FUNC_4(VAR_2));

 if (VAR_4 == VAR_1)
 {
  VAR_6 = (char *) FUNC_1(VAR_2, VAR_5 + 1);
 }
 else
 {
  VAR_6 = (char *) FUNC_1(VAR_2, VAR_4);
  if (VAR_4 != VAR_5 + 1)
   FUNC_7(VAR_6 + sizeof(PostingItem),
     VAR_6,
     (VAR_5 - VAR_4 + 1) * sizeof(PostingItem));
 }
 FUNC_6(VAR_6, VAR_3, sizeof(PostingItem));

 VAR_5++;
 FUNC_3(VAR_2)->maxoff = VAR_5;






 FUNC_2(VAR_2, VAR_5 * sizeof(PostingItem));
}
