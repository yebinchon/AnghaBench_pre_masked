
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,int,int ) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(LPCSTR VAR_3)
{
 int VAR_4 = (int)FUNC_3(VAR_3);
 int VAR_5;
 int VAR_6 = 0;







 while (VAR_4 > 0) {
  if ((VAR_5 = FUNC_2(FUNC_0(VAR_2), VAR_3 + VAR_6, VAR_4, 0)) < 1)
   return (VAR_0);
  VAR_4 -= VAR_5;
  VAR_6 += VAR_5;
 }
 return (VAR_1);
}
