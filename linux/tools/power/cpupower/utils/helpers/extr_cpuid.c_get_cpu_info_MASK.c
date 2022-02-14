
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpupower_cpu_info {unsigned int vendor; unsigned int family; unsigned int model; unsigned int stepping; int caps; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,unsigned int*) ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,int ) ;

int FUNC_10(struct cpupower_cpu_info *VAR_17)
{
 FILE *VAR_18;
 char VAR_19[64];
 unsigned int VAR_20, VAR_21;
 unsigned int VAR_22 = 0xffffff;
 unsigned int VAR_23, VAR_24;

 int VAR_25 = -VAR_7;

 VAR_17->vendor = VAR_14;
 VAR_17->family = VAR_22;
 VAR_17->model = VAR_22;
 VAR_17->stepping = VAR_22;
 VAR_17->caps = 0;

 VAR_18 = FUNC_6("/proc/cpuinfo", "r");
 if (!VAR_18)
  return -VAR_8;

 while (!FUNC_4(VAR_18)) {
  if (!FUNC_5(VAR_19, 64, VAR_18))
   continue;
  VAR_19[63 - 1] = '\0';

  if (!FUNC_8(VAR_19, "processor\t: ", 12))
   FUNC_7(VAR_19, "processor\t: %u", &VAR_20);

  if (VAR_20 != (unsigned int)VAR_15)
   continue;


  if (!FUNC_8(VAR_19, "vendor_id", 9)) {
   for (VAR_21 = 1; VAR_21 < VAR_13; VAR_21++) {
    if (FUNC_9(VAR_19, VAR_16[VAR_21]))
     VAR_17->vendor = VAR_21;
   }

  } else if (!FUNC_8(VAR_19, "cpu family\t: ", 13)) {
   FUNC_7(VAR_19, "cpu family\t: %u",
          &VAR_17->family);
  } else if (!FUNC_8(VAR_19, "model\t\t: ", 9)) {
   FUNC_7(VAR_19, "model\t\t: %u",
          &VAR_17->model);
  } else if (!FUNC_8(VAR_19, "stepping\t: ", 10)) {
   FUNC_7(VAR_19, "stepping\t: %u",
          &VAR_17->stepping);


   if (VAR_17->vendor == VAR_14 ||
       VAR_17->family == VAR_22 ||
       VAR_17->model == VAR_22 ||
       VAR_17->stepping == VAR_22) {
    VAR_25 = -VAR_7;
    goto out;
   }

   VAR_25 = 0;
   goto out;
  }
 }
 VAR_25 = -VAR_9;
out:
 FUNC_3(VAR_18);

 if (VAR_17->vendor != VAR_10 &&
     VAR_17->vendor != VAR_11 &&
     VAR_17->vendor != VAR_12)
  return VAR_25;

 VAR_23 = FUNC_0(0);
 VAR_24 = FUNC_0(0x80000000);


 if (VAR_24 >= 0x80000007 &&
     (FUNC_2(0x80000007) & (1 << 8)))
  VAR_17->caps |= VAR_4;


 if (VAR_23 >= 6 && (FUNC_1(6) & 0x1))
  VAR_17->caps |= VAR_1;


 if (VAR_17->vendor == VAR_10 ||
     VAR_17->vendor == VAR_11) {
  if (VAR_24 >= 0x80000007 &&
      (FUNC_2(0x80000007) & (1 << 9)))
   VAR_17->caps |= VAR_0;
 }

 if (VAR_17->vendor == VAR_12) {
  if (VAR_23 >= 6 &&
      (FUNC_0(6) & (1 << 1)))
   VAR_17->caps |= VAR_3;
 }

 if (VAR_17->vendor == VAR_12) {

  if (VAR_23 >= 6 && (FUNC_1(6) & (1 << 3)))
   VAR_17->caps |= VAR_6;


  if (VAR_17->family == 6) {
   switch (VAR_17->model) {
   case 0x1A:


   case 0x1E:


   case 0x1F:
   case 0x25:


   case 0x2C:
    VAR_17->caps |= VAR_2;
    break;
   case 0x2A:
   case 0x2D:
   case 0x3A:
   case 0x3E:
    VAR_17->caps |= VAR_2;
    VAR_17->caps |= VAR_5;
    break;
   case 0x2E:
   case 0x2F:
   default:
    break;
   }
  }
 }




 return VAR_25;
}
