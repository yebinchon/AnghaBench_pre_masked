
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XLogSegNo ;
typedef double XLogRecPtr ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (int ,double) ;
 scalar_t__ FUNC_1 (double) ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;

__attribute__((used)) static XLogSegNo
FUNC_2(XLogRecPtr VAR_5)
{
 XLogSegNo VAR_6;
 XLogSegNo VAR_7;
 double VAR_8;
 XLogSegNo VAR_9;






 VAR_6 = VAR_5 / VAR_4 +
  FUNC_0(VAR_3, VAR_4) - 1;
 VAR_7 = VAR_5 / VAR_4 +
  FUNC_0(VAR_2, VAR_4) - 1;
 VAR_8 = (1.0 + VAR_0) * VAR_1;

 VAR_8 *= 1.10;

 VAR_9 = (XLogSegNo) FUNC_1(((double) VAR_5 + VAR_8) /
         VAR_4);

 if (VAR_9 < VAR_6)
  VAR_9 = VAR_6;
 if (VAR_9 > VAR_7)
  VAR_9 = VAR_7;

 return VAR_9;
}
