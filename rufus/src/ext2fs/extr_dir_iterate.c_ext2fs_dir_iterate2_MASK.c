
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct dir_context {int flags; char* buf; int (* func ) (int ,int,struct ext2_dir_entry*,int,int,char*,void*) ;scalar_t__ errcode; void* priv_data; int dir; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {int blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int ,struct dir_context*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (int ,char**) ;
 int FUNC_5 (TYPE_1__*,int ,struct dir_context*) ;
 int VAR_3 ;

errcode_t FUNC_6(ext2_filsys VAR_4,
         ext2_ino_t VAR_5,
         int VAR_6,
         char *VAR_7,
         int (*VAR_8)(ext2_ino_t VAR_9,
       int VAR_10,
       struct ext2_dir_entry *VAR_11,
       int VAR_12,
       int VAR_13,
       char *VAR_14,
       void *VAR_15),
         void *VAR_16)
{
 struct dir_context VAR_17;
 errcode_t VAR_18;

 FUNC_0(VAR_4, VAR_2);

 VAR_18 = FUNC_2(VAR_4, VAR_5);
 if (VAR_18)
  return VAR_18;

 VAR_17.dir = VAR_5;
 VAR_17.flags = VAR_6;
 if (VAR_7)
  VAR_17.buf = VAR_7;
 else {
  VAR_18 = FUNC_4(VAR_4->blocksize, &VAR_17.buf);
  if (VAR_18)
   return VAR_18;
 }
 VAR_17.func = VAR_8;
 VAR_17.priv_data = VAR_16;
 VAR_17.errcode = 0;
 VAR_18 = FUNC_1(VAR_4, VAR_5, VAR_0, 0,
           VAR_3, &VAR_17);
 if (!VAR_7)
  FUNC_3(&VAR_17.buf);
 if (VAR_18 == VAR_1) {
  (void) FUNC_5(VAR_4, VAR_5, &VAR_17);
  VAR_18 = 0;
 }
 if (VAR_18)
  return VAR_18;
 return VAR_17.errcode;
}
