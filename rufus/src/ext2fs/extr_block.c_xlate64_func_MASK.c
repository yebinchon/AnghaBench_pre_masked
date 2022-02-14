
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlate64 {int (* func ) (int ,scalar_t__*,int ,scalar_t__,int,int ) ;int real_private; } ;
typedef int ext2_filsys ;
typedef int e2_blkcnt_t ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;


 int FUNC_0 (int ,scalar_t__*,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(ext2_filsys VAR_0, blk64_t *VAR_1,
   e2_blkcnt_t VAR_2, blk64_t VAR_3,
   int VAR_4, void *VAR_5)
{
 struct xlate64 *VAR_6 = (struct xlate64 *) VAR_5;
 int VAR_7;
 blk_t VAR_8 = *VAR_1;

 VAR_7 = (*VAR_6->func)(VAR_0, &VAR_8, VAR_2, (blk_t) VAR_3, VAR_4,
        VAR_6->real_private);
 *VAR_1 = VAR_8;
 return VAR_7;
}
