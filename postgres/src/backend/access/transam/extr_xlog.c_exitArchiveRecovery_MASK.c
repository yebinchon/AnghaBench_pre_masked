
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XLogSegNo ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int*,int) ;
 int FUNC_7 (char*,int ,scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,...) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_15(TimeLineID VAR_13, XLogRecPtr VAR_14)
{
 char VAR_15[VAR_5];
 XLogSegNo VAR_16;
 XLogSegNo VAR_17;


 FUNC_0(VAR_13 != VAR_8);




 VAR_2 = 0;




 FUNC_1(VAR_3, 1);





 if (VAR_9 >= 0)
 {
  FUNC_10(VAR_9);
  VAR_9 = -1;
 }







 FUNC_2(VAR_14, VAR_16, VAR_12);
 FUNC_3(VAR_14, VAR_17, VAR_12);







 if (VAR_16 == VAR_17)
 {







  FUNC_5(VAR_16, VAR_13, VAR_16,
      FUNC_9(VAR_14, VAR_12));
 }
 else
 {




  bool VAR_18 = 1;
  int VAR_19;

  VAR_19 = FUNC_6(VAR_17, &VAR_18, 1);

  if (FUNC_10(VAR_19) != 0)
   FUNC_12(VAR_0,
     (FUNC_13(),
      FUNC_14("could not close file \"%s\": %m",
       FUNC_8(VAR_8, VAR_17))));
 }





 FUNC_7(VAR_15, VAR_8, VAR_17, VAR_12);
 FUNC_4(VAR_15);





 if (VAR_11)
  FUNC_11(VAR_7, VAR_1);

 if (VAR_10)
  FUNC_11(VAR_6, VAR_1);

 FUNC_12(VAR_4,
   (FUNC_14("archive recovery complete")));
}
