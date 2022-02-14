
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlate {int (* func ) (struct ext2_dir_entry*,int,int,char*,void*) ;void* real_private; } ;
typedef int ext2_ino_t ;
typedef int ext2_filsys ;
typedef int errcode_t ;


 int FUNC_0 (int ,int ,int,char*,int ,struct xlate*) ;
 int VAR_0 ;

errcode_t FUNC_1(ext2_filsys VAR_1,
        ext2_ino_t VAR_2,
        int VAR_3,
        char *VAR_4,
        int (*VAR_5)(struct ext2_dir_entry *VAR_6,
      int VAR_7,
      int VAR_8,
      char *VAR_9,
      void *VAR_10),
        void *VAR_11)
{
 struct xlate VAR_12;

 VAR_12.real_private = VAR_11;
 VAR_12.func = VAR_5;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_0, &VAR_12);
}
