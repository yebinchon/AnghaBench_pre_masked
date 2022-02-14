
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogSegNo ;
typedef scalar_t__ XLogRecPtr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(XLogRecPtr VAR_4, XLogSegNo *VAR_5)
{
 XLogSegNo VAR_6;
 XLogRecPtr VAR_7;

 FUNC_0(VAR_4, VAR_6, VAR_3);
 VAR_7 = FUNC_1();


 if (VAR_2 > 0)
 {

  if (VAR_6 <= VAR_2)
   VAR_6 = 1;
  else
   VAR_6 = VAR_6 - VAR_2;
 }


 if (VAR_1 > 0 && VAR_7 != VAR_0)
 {
  XLogSegNo VAR_8;

  FUNC_0(VAR_7, VAR_8, VAR_3);

  if (VAR_8 <= 0)
   VAR_6 = 1;
  else if (VAR_8 < VAR_6)
   VAR_6 = VAR_8;
 }


 if (VAR_6 < *VAR_5)
  *VAR_5 = VAR_6;
}
