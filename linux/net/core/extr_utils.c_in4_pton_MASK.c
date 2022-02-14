
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int dbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const,int) ;

int FUNC_3(const char *VAR_4, int VAR_5,
      u8 *VAR_6,
      int VAR_7, const char **VAR_8)
{
 const char *VAR_9;
 u8 *VAR_10;
 u8 VAR_11[4];
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14 = 0;

 if (VAR_5 < 0)
  VAR_5 = FUNC_1(VAR_4);
 VAR_9 = VAR_4;
 VAR_10 = VAR_11;
 VAR_13 = 0;
 while (1) {
  int VAR_15;
  VAR_15 = FUNC_2(VAR_5 > 0 ? *VAR_9 : '\0', VAR_7);
  if (!(VAR_15 & (VAR_2 | VAR_3 | VAR_1 | VAR_0))) {
   goto out;
  }
  if (VAR_15 & (VAR_3 | VAR_1 | VAR_0)) {
   if (VAR_14 == 0)
    goto out;
   *VAR_10++ = VAR_14 & 0xff;
   VAR_14 = 0;
   VAR_13++;
   if (VAR_15 & (VAR_1 | VAR_0)) {
    if (VAR_13 != 4)
     goto out;
    break;
   }
   goto cont;
  }
  VAR_14 = (VAR_14 * 10) + VAR_15;
  if ((VAR_14 & 0xffff) > 255) {
   goto out;
  }
cont:
  if (VAR_13 >= 4)
   goto out;
  VAR_9++;
  VAR_5--;
 }
 VAR_12 = 1;
 FUNC_0(VAR_6, VAR_11, sizeof(VAR_11));
out:
 if (VAR_8)
  *VAR_8 = VAR_9;
 return VAR_12;
}
