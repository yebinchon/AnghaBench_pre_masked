
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int registered_buffer ;
typedef int XLogRecData ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_3 (int *,int) ;

void
FUNC_4(int VAR_9, int VAR_10)
{
 int VAR_11;







 FUNC_0(VAR_0 == 0);


 if (VAR_9 < VAR_3)
  VAR_9 = VAR_3;
 if (VAR_10 < VAR_4)
  VAR_10 = VAR_4;

 if (VAR_9 > VAR_2)
  FUNC_2(VAR_1, "maximum number of WAL record block references exceeded");
 VAR_11 = VAR_9 + 1;

 if (VAR_11 > VAR_6)
 {
  VAR_8 = (registered_buffer *)
   FUNC_3(VAR_8, sizeof(registered_buffer) * VAR_11);





  FUNC_1(&VAR_8[VAR_6], 0,
      (VAR_11 - VAR_6) * sizeof(registered_buffer));
  VAR_6 = VAR_11;
 }

 if (VAR_10 > VAR_5)
 {
  VAR_7 = (XLogRecData *) FUNC_3(VAR_7, sizeof(XLogRecData) * VAR_10);
  VAR_5 = VAR_10;
 }
}
