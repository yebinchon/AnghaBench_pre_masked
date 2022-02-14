
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,char const*,size_t,int,char*,char const**,int*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,char const*,int,char*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,char*,int *) ;
 int FUNC_3 (char*,int,int ,...) ;

__attribute__((used)) static errcode_t FUNC_4(ext2_filsys VAR_0, ext2_ino_t VAR_1, ext2_ino_t VAR_2,
       const char *VAR_3, size_t VAR_4, int VAR_5,
       int VAR_6, char *VAR_7, ext2_ino_t *VAR_8)
{
 const char *VAR_9;
 int VAR_10;
 ext2_ino_t VAR_11, VAR_12;
 errcode_t VAR_13;





 VAR_13 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_6, VAR_7, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_13) return VAR_13;
 if (!VAR_10) {
  *VAR_8=VAR_11;
  return 0;
 }
 VAR_13 = FUNC_1 (VAR_0, VAR_11, VAR_9, VAR_10, VAR_7, &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_5) {
  VAR_13 = FUNC_2(VAR_0, VAR_1, VAR_11, VAR_12, VAR_6,
         VAR_7, &VAR_12);
  if (VAR_13)
   return VAR_13;
 }




 *VAR_8 = VAR_12;
 return 0;
}
