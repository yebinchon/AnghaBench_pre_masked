
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sw842_param {unsigned int ilen; unsigned int olen; int * out; int * ostart; scalar_t__ bit; int * in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct sw842_param*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct sw842_param*,int*,int) ;
 int FUNC_6 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(const u8 *VAR_13, unsigned int VAR_14,
       u8 *VAR_15, unsigned int *VAR_16)
{
 struct sw842_param VAR_17;
 int VAR_18;
 u64 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 u64 VAR_24;

 VAR_17.in = (u8 *)VAR_13;
 VAR_17.bit = 0;
 VAR_17.ilen = VAR_14;
 VAR_17.out = VAR_15;
 VAR_17.ostart = VAR_15;
 VAR_17.olen = *VAR_16;

 VAR_23 = VAR_17.olen;

 *VAR_16 = 0;

 do {
  VAR_18 = FUNC_5(&VAR_17, &VAR_19, VAR_3);
  if (VAR_18)
   return VAR_18;

  FUNC_6("template is %lx\n", (unsigned long)VAR_19);

  switch (VAR_19) {
  case 130:
   VAR_18 = FUNC_5(&VAR_17, &VAR_20, VAR_4);
   if (VAR_18)
    return VAR_18;

   if (VAR_17.out == VAR_15)
    return -VAR_1;


   VAR_20++;

   if (VAR_20 * 8 > VAR_17.olen)
    return -VAR_2;

   while (VAR_20-- > 0) {
    FUNC_3(VAR_17.out, VAR_17.out - 8, 8);
    VAR_17.out += 8;
    VAR_17.olen -= 8;
   }

   if (VAR_8)
    FUNC_0(&VAR_10);

   break;
  case 128:
   if (8 > VAR_17.olen)
    return -VAR_2;

   FUNC_4(VAR_17.out, 0, 8);
   VAR_17.out += 8;
   VAR_17.olen -= 8;

   if (VAR_8)
    FUNC_0(&VAR_12);

   break;
  case 129:
   VAR_18 = FUNC_5(&VAR_17, &VAR_22, VAR_5);
   if (VAR_18)
    return VAR_18;

   if (!VAR_22 || VAR_22 > VAR_6)
    return -VAR_1;

   while (VAR_22-- > 0) {
    VAR_18 = FUNC_5(&VAR_17, &VAR_21, 8);
    if (VAR_18)
     return VAR_18;
    *VAR_17.out = (u8)VAR_21;
    VAR_17.out++;
    VAR_17.olen--;
   }

   if (VAR_8)
    FUNC_0(&VAR_11);

   break;
  case 131:
   if (VAR_8)
    FUNC_0(&VAR_9);

   break;
  default:
   VAR_18 = FUNC_2(&VAR_17, VAR_19);
   if (VAR_18)
    return VAR_18;
   break;
  }
 } while (VAR_19 != 131);





 VAR_18 = FUNC_5(&VAR_17, &VAR_24, VAR_0);
 if (VAR_18)
  return VAR_18;




 if (VAR_24 != (u64)FUNC_1(0, VAR_15, VAR_23 - VAR_17.olen)) {
  FUNC_6("CRC mismatch for decompression\n");
  return -VAR_1;
 }

 if (FUNC_7((VAR_23 - VAR_17.olen) > VAR_7))
  return -VAR_2;

 *VAR_16 = VAR_23 - VAR_17.olen;

 return 0;
}
