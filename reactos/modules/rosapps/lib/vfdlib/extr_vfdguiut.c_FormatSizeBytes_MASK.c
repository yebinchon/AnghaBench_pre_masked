
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ PSTR ;


 int FUNC_0 (scalar_t__,char*,int) ;

__attribute__((used)) static PSTR FUNC_1(ULONG VAR_0, PSTR VAR_1)
{
 ULONG VAR_2 = 1;
 int VAR_3;

 while ((VAR_2 * 1000) < VAR_0) {
  VAR_2 *= 1000;
 }

 VAR_3 = FUNC_0(VAR_1, "%lu", VAR_0 / VAR_2);

 while (VAR_2 > 1) {
  VAR_0 %= VAR_2;
  VAR_2 /= 1000;
  VAR_3 += FUNC_0(VAR_1 + VAR_3, ",%03lu", VAR_0 / VAR_2);
 }

 return VAR_1;
}
