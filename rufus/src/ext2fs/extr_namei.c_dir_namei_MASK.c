
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 scalar_t__ FUNC_0 (int ,int ,char const*,int,char*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int,char*,int *) ;

__attribute__((used)) static errcode_t FUNC_2(ext2_filsys VAR_0, ext2_ino_t VAR_1, ext2_ino_t VAR_2,
      const char *VAR_3, int VAR_4,
      int VAR_5, char *VAR_6,
      const char **VAR_7, int *VAR_8,
      ext2_ino_t *VAR_9)
{
 char VAR_10;
 const char *VAR_11;
 int VAR_12;
 ext2_ino_t VAR_13;
 errcode_t VAR_14;

 if ((VAR_10 = *VAR_3) == '/') {
         VAR_2 = VAR_1;
  VAR_3++;
  VAR_4--;
 }
 while (1) {
         VAR_11 = VAR_3;
  for (VAR_12=0; --VAR_4 >= 0;VAR_12++) {
   VAR_10 = *(VAR_3++);
   if (VAR_10 == '/')
    break;
  }
  if (VAR_4 < 0)
   break;
  VAR_14 = FUNC_0 (VAR_0, VAR_2, VAR_11, VAR_12, VAR_6, &VAR_13);
  if (VAR_14) return VAR_14;
         VAR_14 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_13,
          VAR_5, VAR_6, &VAR_2);
         if (VAR_14) return VAR_14;
     }
 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;
 *VAR_9 = VAR_2;
 return 0;
}
