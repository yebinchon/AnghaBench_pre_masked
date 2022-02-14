
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_4, zic_t VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 bool VAR_9 = VAR_5 < 0;
 int VAR_10 = VAR_9;

 if (VAR_9)
 {
  VAR_5 = -VAR_5;
  VAR_4[0] = '-';
 }
 VAR_8 = VAR_5 % VAR_3;
 VAR_5 /= VAR_3;
 VAR_7 = VAR_5 % VAR_2;
 VAR_5 /= VAR_2;
 VAR_6 = VAR_5;
 if (VAR_6 >= VAR_1 * VAR_0)
 {
  VAR_4[0] = '\0';
  return 0;
 }
 VAR_10 += FUNC_0(VAR_4 + VAR_10, "%d", VAR_6);
 if (VAR_7 != 0 || VAR_8 != 0)
 {
  VAR_10 += FUNC_0(VAR_4 + VAR_10, ":%02d", VAR_7);
  if (VAR_8 != 0)
   VAR_10 += FUNC_0(VAR_4 + VAR_10, ":%02d", VAR_8);
 }
 return VAR_10;
}
