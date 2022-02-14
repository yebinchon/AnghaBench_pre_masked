
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PullFilter ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(PullFilter *VAR_3, int *VAR_4, int VAR_5)
{
 uint8 VAR_6;
 int VAR_7;

 FUNC_0(VAR_3, VAR_6);
 VAR_7 = VAR_6;

 if (VAR_5 == 1)
 {
  FUNC_0(VAR_3, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
 }
 else if (VAR_5 == 2)
 {
  FUNC_0(VAR_3, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
  FUNC_0(VAR_3, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
  FUNC_0(VAR_3, VAR_6);
  VAR_7 = (VAR_7 << 8) | VAR_6;
 }

 if (VAR_7 < 0 || VAR_7 > VAR_0)
 {
  FUNC_1("parse_old_len: weird length");
  return VAR_2;
 }
 *VAR_4 = VAR_7;
 return VAR_1;
}
