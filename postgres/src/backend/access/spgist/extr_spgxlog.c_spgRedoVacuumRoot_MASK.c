
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nDelete; int * offsets; } ;
typedef TYPE_1__ spgxlogVacuumRoot ;
typedef int XLogRecPtr ;
struct TYPE_7__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *) ;
 char* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(XLogReaderState *VAR_1)
{
 XLogRecPtr VAR_2 = VAR_1->EndRecPtr;
 char *VAR_3 = FUNC_7(VAR_1);
 spgxlogVacuumRoot *VAR_4 = (spgxlogVacuumRoot *) VAR_3;
 OffsetNumber *VAR_5;
 Buffer VAR_6;
 Page VAR_7;

 VAR_5 = VAR_4->offsets;

 if (FUNC_6(VAR_1, 0, &VAR_6) == VAR_0)
 {
  VAR_7 = FUNC_0(VAR_6);


  FUNC_3(VAR_7, VAR_5, VAR_4->nDelete);

  FUNC_4(VAR_7, VAR_2);
  FUNC_2(VAR_6);
 }
 if (FUNC_1(VAR_6))
  FUNC_5(VAR_6);
}
