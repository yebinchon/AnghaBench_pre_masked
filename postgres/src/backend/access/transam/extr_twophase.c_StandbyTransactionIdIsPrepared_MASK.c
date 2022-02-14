
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xid; } ;
typedef TYPE_1__ TwoPhaseFileHeader ;
typedef int TransactionId ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;

bool
FUNC_5(TransactionId VAR_1)
{
 char *VAR_2;
 TwoPhaseFileHeader *VAR_3;
 bool VAR_4;

 FUNC_0(FUNC_3(VAR_1));

 if (VAR_0 <= 0)
  return 0;


 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2 == ((void*)0))
  return 0;


 VAR_3 = (TwoPhaseFileHeader *) VAR_2;
 VAR_4 = FUNC_2(VAR_3->xid, VAR_1);
 FUNC_4(VAR_2);

 return VAR_4;
}
