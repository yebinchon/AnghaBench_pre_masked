
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef int QueuePosition ;
typedef scalar_t__ BackendId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 int32 *VAR_11;
 BackendId *VAR_12;
 int VAR_13;
 VAR_11 = (int32 *) FUNC_12(VAR_4 * sizeof(int32));
 VAR_12 = (BackendId *) FUNC_12(VAR_4 * sizeof(BackendId));
 VAR_13 = 0;

 FUNC_1(VAR_0, VAR_3);
 for (BackendId VAR_14 = VAR_9; VAR_14 > 0; VAR_14 = FUNC_6(VAR_14))
 {
  int32 VAR_15 = FUNC_4(VAR_14);
  QueuePosition VAR_16;

  FUNC_0(VAR_15 != VAR_2);
  if (VAR_15 == VAR_6)
   continue;
  VAR_16 = FUNC_5(VAR_14);
  if (FUNC_3(VAR_14) == VAR_5)
  {




   if (FUNC_7(VAR_16, VAR_10))
    continue;
  }
  else
  {




   if (FUNC_10(FUNC_8(VAR_10),
           FUNC_8(VAR_16)) < VAR_8)
    continue;
  }

  VAR_11[VAR_13] = VAR_15;
  VAR_12[VAR_13] = VAR_14;
  VAR_13++;
 }
 FUNC_2(VAR_0);


 for (int VAR_17 = 0; VAR_17 < VAR_13; VAR_17++)
 {
  int32 VAR_18 = VAR_11[VAR_17];







  if (FUNC_9(VAR_18, VAR_7, VAR_12[VAR_17]) < 0)
   FUNC_11(VAR_1, "could not signal backend with PID %d: %m", VAR_18);
 }

 FUNC_13(VAR_11);
 FUNC_13(VAR_12);
}
