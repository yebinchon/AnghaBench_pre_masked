
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sw842_param {size_t* index8; size_t* data8; size_t* index4; size_t* data4; size_t* index2; size_t* data2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (struct sw842_param*,size_t,int) ;
 int FUNC_1 (int *) ;
 size_t** VAR_10 ;
 size_t FUNC_2 (struct sw842_param*,int,int) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,size_t,int,size_t,size_t,size_t,size_t) ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static int FUNC_5(struct sw842_param *VAR_13, u8 VAR_14)
{
 int VAR_15, VAR_16, VAR_17 = 0;
 u8 *VAR_18 = VAR_10[VAR_14];
 bool VAR_19 = 0;

 if (VAR_14 >= VAR_4)
  return -VAR_0;

 FUNC_3("template %x\n", VAR_18[4]);

 VAR_15 = FUNC_0(VAR_13, VAR_18[4], VAR_9);
 if (VAR_15)
  return VAR_15;

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  FUNC_3("op %x\n", VAR_18[VAR_16]);

  switch (VAR_18[VAR_16] & VAR_8) {
  case 128:
   if (VAR_17)
    VAR_19 = 1;
   else if (VAR_18[VAR_16] & VAR_6)
    VAR_15 = FUNC_0(VAR_13, VAR_13->index8[0], VAR_3);
   else if (VAR_18[VAR_16] & VAR_5)
    VAR_15 = FUNC_0(VAR_13, VAR_13->data8[0], 64);
   else
    VAR_19 = 1;
   break;
  case 129:
   if (VAR_17 == 2 && VAR_18[VAR_16] & VAR_5)
    VAR_15 = FUNC_0(VAR_13, FUNC_2(VAR_13, 2, 32), 32);
   else if (VAR_17 != 0 && VAR_17 != 4)
    VAR_19 = 1;
   else if (VAR_18[VAR_16] & VAR_6)
    VAR_15 = FUNC_0(VAR_13, VAR_13->index4[VAR_17 >> 2], VAR_2);
   else if (VAR_18[VAR_16] & VAR_5)
    VAR_15 = FUNC_0(VAR_13, VAR_13->data4[VAR_17 >> 2], 32);
   else
    VAR_19 = 1;
   break;
  case 130:
   if (VAR_17 != 0 && VAR_17 != 2 && VAR_17 != 4 && VAR_17 != 6)
    VAR_19 = 1;
   if (VAR_18[VAR_16] & VAR_6)
    VAR_15 = FUNC_0(VAR_13, VAR_13->index2[VAR_17 >> 1], VAR_1);
   else if (VAR_18[VAR_16] & VAR_5)
    VAR_15 = FUNC_0(VAR_13, VAR_13->data2[VAR_17 >> 1], 16);
   else
    VAR_19 = 1;
   break;
  case 131:
   VAR_19 = (VAR_17 != 8) || !(VAR_18[VAR_16] & VAR_7);
   break;
  default:
   VAR_19 = 1;
   break;
  }

  if (VAR_15)
   return VAR_15;

  if (VAR_19) {
   FUNC_4("Invalid templ %x op %d : %x %x %x %x\n",
          VAR_14, VAR_16, VAR_18[0], VAR_18[1], VAR_18[2], VAR_18[3]);
   return -VAR_0;
  }

  VAR_17 += VAR_18[VAR_16] & VAR_8;
 }

 if (VAR_17 != 8) {
  FUNC_4("Invalid template %x len %x : %x %x %x %x\n",
         VAR_14, VAR_17, VAR_18[0], VAR_18[1], VAR_18[2], VAR_18[3]);
  return -VAR_0;
 }

 if (VAR_11)
  FUNC_1(&VAR_12[VAR_18[4]]);

 return 0;
}
