
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lookup_struct {char const* name; int len; scalar_t__ found; int * inode; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef scalar_t__ errcode_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,char*,int ,struct lookup_struct*) ;
 int VAR_2 ;

errcode_t FUNC_2(ext2_filsys VAR_3, ext2_ino_t VAR_4, const char *VAR_5,
   int VAR_6, char *VAR_7, ext2_ino_t *VAR_8)
{
 errcode_t VAR_9;
 struct lookup_struct VAR_10;

 FUNC_0(VAR_3, VAR_1);

 VAR_10.name = VAR_5;
 VAR_10.len = VAR_6;
 VAR_10.inode = VAR_8;
 VAR_10.found = 0;

 VAR_9 = FUNC_1(VAR_3, VAR_4, 0, VAR_7, VAR_2, &VAR_10);
 if (VAR_9)
  return VAR_9;

 return (VAR_10.found) ? 0 : VAR_0;
}
