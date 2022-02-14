
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int st32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (int,char*,int,char*,int*,int*,int,int,int,int ,int*) ;
 char** VAR_1 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;
 char* FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static char *FUNC_9(st32 VAR_3, ut32 VAR_4, ut32 VAR_5, ut32 *VAR_6,
 ut32 *VAR_7, ut32 *VAR_8, ut32 VAR_9, ut8 VAR_10, int *VAR_11)
{
 ut32 VAR_12;
 char *VAR_13, *VAR_14;
 char VAR_15[80];
 ut32 VAR_16, VAR_17;
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);


 VAR_12 = FUNC_2(FUNC_3(VAR_4 + VAR_5, 1));

 VAR_13 = VAR_1[1 + 2 + VAR_3 * 4];
 if (!VAR_13 ) {
  FUNC_0(VAR_2, "Invalid instruction %s /hash %x\n", VAR_13, VAR_3);
  *VAR_11 = -1;
  return ((void*)0);
 }
 if (VAR_3 == 0x19C) {
  VAR_19 = FUNC_4(VAR_3, "MMMMxxxxmm", 10, ((void*)0), VAR_8,
   VAR_7, VAR_9, VAR_4 + VAR_5, VAR_12, VAR_10, VAR_11);
  if (*VAR_11 < 0) {
   return ((void*)0);
  }
 }

 if (VAR_0) {
  FUNC_6 ("PSEUDO INS %s\n", VAR_13);
 }

 VAR_14 = VAR_13;

 *VAR_6 = VAR_12;

 while (*VAR_14) {
  if (*VAR_14 == '`') {
   VAR_14++;
   VAR_20 = FUNC_8(VAR_14, '`');
   if (!VAR_20 || VAR_14 == VAR_20) {
    FUNC_0(VAR_2, "Invalid instruction %s\n", VAR_13);
    FUNC_1 (VAR_19);
    *VAR_11 = -1;
    return ((void*)0);
   }
   VAR_17 = (ut32)(size_t)(VAR_20-VAR_14);
   if (VAR_17 >= 80) {
    FUNC_0(VAR_2, "Invalid length token %d\n", VAR_17);
    FUNC_1 (VAR_19);
    *VAR_11 = -1;
    return ((void*)0);
   }

   FUNC_5(VAR_15, VAR_14, VAR_17);
   VAR_15[VAR_17] = '\0';
   VAR_14 = VAR_20;

   if (VAR_0) {
    FUNC_6 ("TOKEN AUX: %s\n", VAR_15);
   }

   VAR_18 = ((void*)0);
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
    if (VAR_15[VAR_16] == ',') {
     VAR_17 = (unsigned int)(size_t)(&VAR_15[VAR_16] - VAR_15);
     VAR_18 = &VAR_15[VAR_16 + 1];

     if (VAR_0) {
      FUNC_6 ("REG : %s\n", VAR_18);
     }
     break;
    }
   }

   VAR_20 = FUNC_4(VAR_3, VAR_15, VAR_17, VAR_18, VAR_8,
    VAR_7, VAR_9, VAR_4 + VAR_5, VAR_12, VAR_10, VAR_11);
   if (*VAR_11 < 0) {
    return ((void*)0);
   }
   VAR_19 = FUNC_7(VAR_19, VAR_20, 3);
   if (VAR_0) {
    FUNC_6("RET TOKEN %s\n", VAR_19);
   }
  } else {
   VAR_15[0] = *VAR_14;
   VAR_15[1] = '\0';
   VAR_19 = FUNC_7(VAR_19, VAR_15, 1);
  }
  VAR_14++;
 }

 if (VAR_0) {
  FUNC_6 ("RESULT DECODE: %s\n", VAR_19);
 }

 return VAR_19;
}
