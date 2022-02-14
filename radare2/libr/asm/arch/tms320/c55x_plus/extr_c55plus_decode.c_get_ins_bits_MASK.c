
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,int,int*) ;
 int FUNC_3 () ;
 char** VAR_1 ;
 int FUNC_4 (char*,int) ;
 int VAR_2 ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static ut32 FUNC_6(ut32 VAR_3, ut32 VAR_4, char *VAR_5,
 ut32 VAR_6, ut32 VAR_7, int *VAR_8)
{
 ut32 VAR_9 = 0;
 ut8 VAR_10;
 ut32 VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15;

 if (VAR_5[0] == 'q') {
  return FUNC_2 (VAR_7, VAR_5, VAR_6, VAR_8);
 }

 VAR_14 = VAR_1[1 + VAR_3 * 4];


 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_15 = FUNC_5(&VAR_14[VAR_12], VAR_5[VAR_13]);
  if (!VAR_15) {
   VAR_15 = FUNC_5(VAR_14, VAR_5[VAR_13]);
   if (!VAR_15) {
    FUNC_0(VAR_2, "Invalid token %s\n", VAR_5); *VAR_8 = -1; return 0;
   }
  }

  VAR_11 = (unsigned int)(VAR_15 - VAR_14);

  VAR_10 = FUNC_1(VAR_4 + VAR_11 / 8, 1);


  VAR_12 = VAR_11 + 1;
  VAR_9 = (VAR_9 * 2) | ((VAR_10 >> ((1023 - VAR_11) % 8)) & 1);
  if (!VAR_14[VAR_12]) {
   VAR_12 = 0;
  }
 }

 if (VAR_0) {
  FUNC_4("INS_BITS => 0x%x\n", VAR_9);
  FUNC_3();
 }

 return VAR_9;
}
