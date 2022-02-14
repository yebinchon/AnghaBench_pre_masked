
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_5__ {int blocksize; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,char const*,int ,int,int ,char*,int *) ;
 int FUNC_4 (char const*) ;

errcode_t FUNC_5(ext2_filsys VAR_1, ext2_ino_t VAR_2, ext2_ino_t VAR_3,
         const char *VAR_4, ext2_ino_t *VAR_5)
{
 char *VAR_6;
 errcode_t VAR_7;

 FUNC_0(VAR_1, VAR_0);

 VAR_7 = FUNC_2(VAR_1->blocksize, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, FUNC_4(VAR_4), 1, 0,
       VAR_6, VAR_5);

 FUNC_1(&VAR_6);
 return VAR_7;
}
