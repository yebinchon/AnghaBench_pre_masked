
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ XLogRecPtr ;
typedef int XLogRecData ;
typedef scalar_t__ RmgrId ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 int * FUNC_4 (scalar_t__,int,scalar_t__,int,scalar_t__*) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char*,...) ;

XLogRecPtr
FUNC_7(RmgrId VAR_10, uint8 VAR_11)
{
 XLogRecPtr VAR_12;


 if (!VAR_8)
  FUNC_6(VAR_0, "XLogBeginInsert was not called");





 if ((VAR_11 & ~(VAR_6 |
      VAR_7 |
      VAR_5)) != 0)
  FUNC_6(VAR_2, "invalid xlog info mask %02X", VAR_11);

 FUNC_2(VAR_10, VAR_11);





 if (FUNC_1() && VAR_10 != VAR_3)
 {
  FUNC_5();
  VAR_12 = VAR_4;
  return VAR_12;
 }

 do
 {
  XLogRecPtr VAR_13;
  bool VAR_14;
  XLogRecPtr VAR_15;
  XLogRecData *VAR_16;






  FUNC_0(&VAR_13, &VAR_14);

  VAR_16 = FUNC_4(VAR_10, VAR_11, VAR_13, VAR_14,
         &VAR_15);

  VAR_12 = FUNC_3(VAR_16, VAR_15, VAR_9);
 } while (VAR_12 == VAR_1);

 FUNC_5();

 return VAR_12;
}
