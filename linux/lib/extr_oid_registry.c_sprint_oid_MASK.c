
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,...) ;

int FUNC_1(const void *VAR_2, size_t VAR_3, char *VAR_4, size_t VAR_5)
{
 const unsigned char *VAR_6 = VAR_2, *VAR_7 = VAR_6 + VAR_3;
 unsigned long VAR_8;
 unsigned char VAR_9;
 size_t VAR_10;
 int VAR_11;

 if (VAR_6 >= VAR_7)
  goto bad;

 VAR_9 = *VAR_6++;
 VAR_10 = VAR_11 = FUNC_0(VAR_4, VAR_5, "%u.%u", VAR_9 / 40, VAR_9 % 40);
 if (VAR_11 >= VAR_5)
  return -VAR_1;
 VAR_4 += VAR_11;
 VAR_5 -= VAR_11;

 while (VAR_6 < VAR_7) {
  VAR_8 = 0;
  VAR_9 = *VAR_6++;
  if (!(VAR_9 & 0x80)) {
   VAR_8 = VAR_9;
  } else {
   VAR_8 = VAR_9 & 0x7f;
   do {
    if (VAR_6 >= VAR_7)
     goto bad;
    VAR_9 = *VAR_6++;
    VAR_8 <<= 7;
    VAR_8 |= VAR_9 & 0x7f;
   } while (VAR_9 & 0x80);
  }
  VAR_10 += VAR_11 = FUNC_0(VAR_4, VAR_5, ".%lu", VAR_8);
  if (VAR_11 >= VAR_5)
   return -VAR_1;
  VAR_4 += VAR_11;
  VAR_5 -= VAR_11;
 }

 return VAR_10;

bad:
 FUNC_0(VAR_4, VAR_5, "(bad)");
 return -VAR_0;
}
