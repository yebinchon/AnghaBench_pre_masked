
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int version; int pagesPerRange; } ;
typedef TYPE_1__ xl_brin_createidx ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef scalar_t__ Page ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_9(XLogReaderState *VAR_0)
{
 XLogRecPtr VAR_1 = VAR_0->EndRecPtr;
 xl_brin_createidx *VAR_2 = (xl_brin_createidx *) FUNC_7(VAR_0);
 Buffer VAR_3;
 Page VAR_4;


 VAR_3 = FUNC_6(VAR_0, 0);
 FUNC_0(FUNC_2(VAR_3));
 VAR_4 = (Page) FUNC_1(VAR_3);
 FUNC_8(VAR_4, VAR_2->pagesPerRange, VAR_2->version);
 FUNC_4(VAR_4, VAR_1);
 FUNC_3(VAR_3);
 FUNC_5(VAR_3);
}
