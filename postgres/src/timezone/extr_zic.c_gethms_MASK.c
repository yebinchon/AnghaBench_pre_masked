
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char const*,char*,int*,char*,int*,char*,int*,char*,int*,char*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static zic_t
FUNC_5(char const *VAR_6, char const *VAR_7)
{

 int VAR_8;
 int VAR_9,
    VAR_10 = 0,
    VAR_11 = 0;
 char VAR_12,
    VAR_13,
    VAR_14,
    VAR_15 = '0',
    VAR_16;
 int VAR_17 = 0;
 bool VAR_18 = 1;

 if (VAR_6 == ((void*)0) || *VAR_6 == '\0')
  return 0;
 if (*VAR_6 == '-')
 {
  VAR_9 = -1;
  ++VAR_6;
 }
 else
  VAR_9 = 1;
 switch (FUNC_3(VAR_6,
       "%d%c%d%c%d%c%1d%*[0]%c%*[0123456789]%c",
       &VAR_8, &VAR_12, &VAR_10, &VAR_13, &VAR_11, &VAR_14, &VAR_17, &VAR_15, &VAR_16))
 {
  default:
   VAR_18 = 0;
   break;
  case 8:
   VAR_18 = '0' <= VAR_15 && VAR_15 <= '9';

  case 7:
   VAR_18 &= VAR_14 == '.';
   if (VAR_18 && VAR_5)
    FUNC_4(FUNC_0("fractional seconds rejected by"
        " pre-2018 versions of zic"));

  case 5:
   VAR_18 &= VAR_13 == ':';

  case 3:
   VAR_18 &= VAR_12 == ':';

  case 1:
   break;
 }
 if (!VAR_18)
 {
  FUNC_1("%s", VAR_7);
  return 0;
 }
 if (VAR_8 < 0 ||
  VAR_10 < 0 || VAR_10 >= VAR_1 ||
  VAR_11 < 0 || VAR_11 > VAR_3)
 {
  FUNC_1("%s", VAR_7);
  return 0;
 }
 VAR_11 += 5 + ((VAR_11 ^ 1) & (VAR_15 == '0')) <= VAR_17;
 if (VAR_5 && (VAR_8 > VAR_0 ||
      (VAR_8 == VAR_0 && (VAR_10 != 0 || VAR_11 != 0))))
  FUNC_4(FUNC_0("values over 24 hours not handled by pre-2007 versions of zic"));
 return FUNC_2(VAR_9 * (zic_t) VAR_8 * VAR_2,
    VAR_9 * (VAR_10 * VAR_3 + VAR_11));
}
