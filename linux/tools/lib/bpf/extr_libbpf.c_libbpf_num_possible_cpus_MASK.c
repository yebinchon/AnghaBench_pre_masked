
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (char*,char*,unsigned int*,unsigned int*) ;
 int FUNC_7 (int) ;

int FUNC_8(void)
{
 static const char *VAR_4 = "/sys/devices/system/cpu/possible";
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0;
 static int VAR_12;
 char VAR_13[128];
 int VAR_14 = 0;
 int VAR_15 = -1;

 VAR_11 = FUNC_0(VAR_12);
 if (VAR_11 > 0)
  return VAR_11;

 VAR_15 = FUNC_3(VAR_4, VAR_2);
 if (VAR_15 < 0) {
  VAR_14 = VAR_3;
  FUNC_4("Failed to open file %s: %s\n",
      VAR_4, FUNC_7(VAR_14));
  return -VAR_14;
 }
 VAR_5 = FUNC_5(VAR_15, VAR_13, sizeof(VAR_13));
 FUNC_2(VAR_15);
 if (VAR_5 <= 0) {
  VAR_14 = VAR_5 ? VAR_3 : VAR_0;
  FUNC_4("Failed to read # of possible cpus from %s: %s\n",
      VAR_4, FUNC_7(VAR_14));
  return -VAR_14;
 }
 if (VAR_5 == sizeof(VAR_13)) {
  FUNC_4("File %s size overflow\n", VAR_4);
  return -VAR_1;
 }
 VAR_13[VAR_5] = '\0';

 for (VAR_8 = 0, VAR_11 = 0; VAR_8 <= VAR_5; VAR_8++) {

  if (VAR_13[VAR_8] == ',' || VAR_13[VAR_8] == '\0') {
   VAR_13[VAR_8] = '\0';
   VAR_6 = FUNC_6(&VAR_13[VAR_7], "%u-%u", &VAR_9, &VAR_10);
   if (VAR_6 <= 0) {
    FUNC_4("Failed to get # CPUs from %s\n",
        &VAR_13[VAR_7]);
    return -VAR_0;
   } else if (VAR_6 == 1) {
    VAR_10 = VAR_9;
   }
   VAR_11 += VAR_10 - VAR_9 + 1;
   VAR_7 = VAR_8 + 1;
  }
 }
 if (VAR_11 <= 0) {
  FUNC_4("Invalid #CPUs %d from %s\n", VAR_11, VAR_4);
  return -VAR_0;
 }

 FUNC_1(VAR_12, VAR_11);
 return VAR_11;
}
