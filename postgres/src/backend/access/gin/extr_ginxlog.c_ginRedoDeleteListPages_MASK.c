
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ndeleted; int metadata; } ;
typedef TYPE_1__ ginxlogDeleteListPages ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Page ;
typedef int GinMetaPageData ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_12(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 ginxlogDeleteListPages *VAR_4 = (ginxlogDeleteListPages *) FUNC_10(VAR_2);
 Buffer VAR_5;
 Page VAR_6;
 int VAR_7;

 VAR_5 = FUNC_9(VAR_2, 0);
 FUNC_0(FUNC_1(VAR_5) == VAR_1);
 VAR_6 = FUNC_2(VAR_5);

 FUNC_4(VAR_5);

 FUNC_11(FUNC_5(VAR_6), &VAR_4->metadata, sizeof(GinMetaPageData));
 FUNC_7(VAR_6, VAR_3);
 FUNC_6(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_4->ndeleted; VAR_7++)
 {
  Buffer VAR_8;
  Page VAR_9;

  VAR_8 = FUNC_9(VAR_2, VAR_7 + 1);
  VAR_9 = FUNC_2(VAR_8);
  FUNC_3(VAR_8, VAR_0);

  FUNC_7(VAR_9, VAR_3);
  FUNC_6(VAR_8);

  FUNC_8(VAR_8);
 }
 FUNC_8(VAR_5);
}
