
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dev; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int,unsigned int) ;
 int FUNC_1 (int *,char*,int,int) ;
 unsigned int FUNC_2 (struct hdac_device*,int) ;
 int FUNC_3 (struct hdac_device*,int,int ,int,unsigned int*) ;

int FUNC_4(struct hdac_device *VAR_5, hda_nid_t VAR_6,
        hda_nid_t *VAR_7, int VAR_8)
{
 unsigned int VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 hda_nid_t VAR_17;
 int VAR_18 = 0;

 VAR_9 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_9)
  return 0;

 if (VAR_9 & VAR_1) {

  VAR_14 = 16;
  VAR_15 = 2;
 } else {

  VAR_14 = 8;
  VAR_15 = 4;
 }
 VAR_11 = VAR_9 & VAR_0;
 VAR_16 = (1 << (VAR_14-1)) - 1;

 if (!VAR_11)
  return 0;

 if (VAR_11 == 1) {

  VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_2, 0,
        &VAR_9);
  if (VAR_13 < 0)
   return VAR_13;
  if (VAR_7)
   VAR_7[0] = VAR_9 & VAR_16;
  return 1;
 }


 VAR_12 = 0;
 VAR_17 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  int VAR_19;
  hda_nid_t VAR_20, VAR_21;

  if (VAR_10 % VAR_15 == 0) {
   VAR_13 = FUNC_3(VAR_5, VAR_6,
         VAR_2, VAR_10,
         &VAR_9);
   if (VAR_13 < 0)
    return -VAR_3;
  }
  VAR_19 = !!(VAR_9 & (1 << (VAR_14-1)));
  VAR_20 = VAR_9 & VAR_16;
  if (VAR_20 == 0 && VAR_18++) {
   FUNC_0(&VAR_5->dev,
    "invalid CONNECT_LIST verb %x[%i]:%x\n",
    VAR_6, VAR_10, VAR_9);
   return 0;
  }
  VAR_9 >>= VAR_14;
  if (VAR_19) {

   if (!VAR_17 || VAR_17 >= VAR_20) {
    FUNC_1(&VAR_5->dev,
      "invalid dep_range_val %x:%x\n",
      VAR_17, VAR_20);
    continue;
   }
   for (VAR_21 = VAR_17 + 1; VAR_21 <= VAR_20; VAR_21++) {
    if (VAR_7) {
     if (VAR_12 >= VAR_8)
      return -VAR_4;
     VAR_7[VAR_12] = VAR_21;
    }
    VAR_12++;
   }
  } else {
   if (VAR_7) {
    if (VAR_12 >= VAR_8)
     return -VAR_4;
    VAR_7[VAR_12] = VAR_20;
   }
   VAR_12++;
  }
  VAR_17 = VAR_20;
 }
 return VAR_12;
}
