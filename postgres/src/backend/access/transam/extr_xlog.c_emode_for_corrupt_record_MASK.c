
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XLogRecPtr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(int VAR_4, XLogRecPtr VAR_5)
{
 static XLogRecPtr VAR_6 = 0;

 if (VAR_3 == VAR_2 && VAR_4 == VAR_1)
 {
  if (VAR_5 == VAR_6)
   VAR_4 = VAR_0;
  else
   VAR_6 = VAR_5;
 }
 return VAR_4;
}
