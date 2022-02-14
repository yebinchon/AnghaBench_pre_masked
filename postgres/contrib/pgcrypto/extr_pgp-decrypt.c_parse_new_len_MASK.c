
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ b ;
typedef int PullFilter ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(PullFilter *VAR_4, int *VAR_5)
{
 uint8 VAR_6;
 int VAR_7;
 int VAR_8 = VAR_1;

 FUNC_0(VAR_4, VAR_6);
 if (VAR_6 <= 191)
  VAR_7 = VAR_6;
 else if (VAR_6 >= 192 && VAR_6 <= 223)
 {
  VAR_7 = ((unsigned) (VAR_6) - 192) << 8;
  FUNC_0(VAR_4, VAR_6);
  VAR_7 += 192 + VAR_6;
 }
 else if (VAR_6 == 255)
 {
  FUNC_0(VAR_4, VAR_6);
  VAR_7 = VAR_6;
  FUNC_0(VAR_4, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
  FUNC_0(VAR_4, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
  FUNC_0(VAR_4, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
 }
 else
 {
  VAR_7 = 1 << (VAR_6 & 0x1F);
  VAR_8 = VAR_2;
 }

 if (VAR_7 < 0 || VAR_7 > VAR_0)
 {
  FUNC_1("parse_new_len: weird length");
  return VAR_3;
 }

 *VAR_5 = VAR_7;
 return VAR_8;
}
