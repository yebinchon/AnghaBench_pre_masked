
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int dbuf ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int,scalar_t__*,int,char const**) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const,int) ;

int FUNC_5(const char *VAR_5, int VAR_6,
      u8 *VAR_7,
      int VAR_8, const char **VAR_9)
{
 const char *VAR_10, *VAR_11 = ((void*)0);
 u8 *VAR_12, *VAR_13 = ((void*)0);
 u8 VAR_14[16];
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 129 | VAR_4 | VAR_3;
 int VAR_18 = 0;

 FUNC_2(VAR_14, 0, sizeof(VAR_14));

 VAR_10 = VAR_5;
 VAR_12 = VAR_14;
 if (VAR_6 < 0)
  VAR_6 = FUNC_3(VAR_5);

 while (1) {
  int VAR_19;

  VAR_19 = FUNC_4(VAR_6 > 0 ? *VAR_10 : '\0', VAR_8);
  if (!(VAR_19 & VAR_17))
   goto out;
  if (VAR_19 & (VAR_1 | VAR_0)) {

   if (!(VAR_17 & VAR_3)) {
    *VAR_12++ = (VAR_18 >> 8) & 0xff;
    *VAR_12++ = VAR_18 & 0xff;
   }
   VAR_18 = 0;
   if (VAR_19 & VAR_1) {

    break;
   }





   switch (VAR_17 & VAR_0) {
   case 128:
    VAR_13 = VAR_12;
    VAR_17 = VAR_4 | VAR_1;
    if (VAR_13 - VAR_14 >= sizeof(VAR_14))
     VAR_17 |= VAR_3;
    break;
   case 130|129:
    VAR_17 = VAR_4 | 128;
    break;
   case 130:
    VAR_17 = VAR_4;
    break;
   case 129:
    VAR_17 = 128;
    break;
   default:
    VAR_17 = 0;
   }
   VAR_11 = VAR_10 + 1;
   goto cont;
  }

  if (VAR_19 & VAR_2) {
   VAR_15 = FUNC_0(VAR_11 ? VAR_11 : VAR_10, VAR_6 + (int)(VAR_10 - VAR_11), VAR_12, VAR_8, &VAR_10);
   if (VAR_15 > 0) {
    VAR_12 += 4;
    break;
   }
   goto out;
  }

  VAR_18 = (VAR_18 << 4) | (0xff & VAR_19);
  VAR_17 = 130 | VAR_1;
  if (!(VAR_18 & 0xf000)) {
   VAR_17 |= VAR_4;
  }
  if (!VAR_13 && VAR_12 + 2 < VAR_14 + sizeof(VAR_14)) {
   VAR_17 |= 129;
   VAR_17 &= ~VAR_1;
  }
  if (VAR_12 + 2 >= VAR_14 + sizeof(VAR_14)) {
   VAR_17 &= ~(130|129);
  }
cont:
  if ((VAR_13 && VAR_12 + 4 < VAR_14 + sizeof(VAR_14)) ||
      VAR_12 + 4 == VAR_14 + sizeof(VAR_14)) {
   VAR_17 |= VAR_2;
  }
  if (VAR_12 >= VAR_14 + sizeof(VAR_14)) {
   VAR_17 &= ~(VAR_4|VAR_0);
  }
  VAR_10++;
  VAR_6--;
 }

 VAR_16 = 15; VAR_12--;

 if (VAR_13) {
  while (VAR_12 >= VAR_13)
   VAR_7[VAR_16--] = *VAR_12--;
  while (VAR_16 >= VAR_13 - VAR_14)
   VAR_7[VAR_16--] = 0;
  while (VAR_16 >= 0)
   VAR_7[VAR_16--] = *VAR_12--;
 } else
  FUNC_1(VAR_7, VAR_14, sizeof(VAR_14));

 VAR_15 = 1;
out:
 if (VAR_9)
  *VAR_9 = VAR_10;
 return VAR_15;
}
