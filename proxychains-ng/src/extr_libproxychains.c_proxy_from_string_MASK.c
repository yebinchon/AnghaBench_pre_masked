
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rs_proxyType ;





 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0,
 char *VAR_1,
 char* VAR_2,
 int *VAR_3,
 char *VAR_4,
 char* VAR_5)
{
 const char* VAR_6;
 rs_proxyType VAR_7;

 size_t VAR_8 = 6, VAR_9 = 0, VAR_10 = 0, VAR_11;
 if(!VAR_0[0] || !VAR_0[1] || !VAR_0[2] || !VAR_0[3] || !VAR_0[4] || !VAR_0[5]) goto inv_string;
 if(*VAR_0 == 's') {
  switch(VAR_0[5]) {
   case '5': VAR_7 = 128; break;
   case '4': VAR_7 = 129; break;
   default: goto inv_string;
  }
 } else if(*VAR_0 == 'h') {
  VAR_7 = 130;
  VAR_8 = 4;
 } else goto inv_string;
 if(
    VAR_0[VAR_8++] != ':' ||
    VAR_0[VAR_8++] != '/' ||
    VAR_0[VAR_8++] != '/') goto inv_string;
 const char *VAR_12 = FUNC_4(VAR_0+VAR_8, '@');
 if(VAR_12) {
  if(VAR_7 == 129)
   return 0;
  VAR_6 = FUNC_2(VAR_0+VAR_8, ':');
  if(!VAR_6 || VAR_6 >= VAR_12) goto inv_string;
  const char *VAR_13 = VAR_0+VAR_8;
  VAR_9 = VAR_6-VAR_13;
  VAR_6++;
  VAR_10 = VAR_12-VAR_6;
  if(VAR_7 == 128 && (VAR_9 > 255 || VAR_10 > 255))
   return 0;
  FUNC_1(VAR_4, VAR_13, VAR_9);
  VAR_4[VAR_9]=0;
  FUNC_1(VAR_5, VAR_6, VAR_10);
  VAR_5[VAR_10]=0;
  VAR_8 += 2+VAR_9+VAR_10;
 } else {
  VAR_4[0]=0;
  VAR_5[0]=0;
 }
 const char* VAR_14 = VAR_0+VAR_8;
 VAR_6 = FUNC_2(VAR_14, ':');
 if(!VAR_6) goto inv_string;
 VAR_11 = VAR_6-VAR_14;
 if(VAR_11 > 255)
  return 0;
 FUNC_1(VAR_2, VAR_14, VAR_11);
 VAR_2[VAR_11]=0;
 *VAR_3 = FUNC_0(VAR_6+1);
 switch(VAR_7) {
  case 129:
   FUNC_3(VAR_1, "socks4");
   break;
  case 128:
   FUNC_3(VAR_1, "socks5");
   break;
  case 130:
   FUNC_3(VAR_1, "http");
   break;
  default:
   return 0;
 }
 return 1;
inv_string:
 return 0;
}
