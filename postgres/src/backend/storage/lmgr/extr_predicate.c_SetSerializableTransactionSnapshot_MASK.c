
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VirtualTransactionId ;
typedef int Snapshot ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void
FUNC_7(Snapshot VAR_4,
           VirtualTransactionId *VAR_5,
           int VAR_6)
{
 FUNC_0(FUNC_3());
 if (FUNC_2())
  return;







 if (VAR_3 && VAR_2)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("a snapshot-importing transaction must not be READ ONLY DEFERRABLE")));

 (void) FUNC_1(VAR_4, VAR_5,
             VAR_6);
}
