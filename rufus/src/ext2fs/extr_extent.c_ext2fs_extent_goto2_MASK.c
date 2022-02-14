
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ext2fs_extent {scalar_t__ e_lblk; scalar_t__ e_len; } ;
typedef TYPE_1__* ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_4__ {int max_depth; int ino; int level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,struct ext2fs_extent*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2fs_extent*) ;
 int FUNC_2 (char*,int,int,...) ;

errcode_t FUNC_3(ext2_extent_handle_t VAR_7,
         int VAR_8, blk64_t VAR_9)
{
 struct ext2fs_extent VAR_10;
 errcode_t VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_6, &VAR_10);
 if (VAR_11) {
  if (VAR_11 == VAR_1)
   VAR_11 = VAR_0;
  return VAR_11;
 }

 if (VAR_8 > VAR_7->max_depth) {




  return VAR_2;
 }
 while (1) {
  if (VAR_7->max_depth - VAR_7->level == VAR_8) {

   if ((VAR_9 >= VAR_10.e_lblk) &&
       (VAR_9 < VAR_10.e_lblk + VAR_10.e_len))
    return 0;
   if (VAR_9 < VAR_10.e_lblk) {
    VAR_11 = FUNC_1(VAR_7,
          VAR_5,
          &VAR_10);
    return VAR_0;
   }
   VAR_11 = FUNC_1(VAR_7,
         VAR_4,
         &VAR_10);
   if (VAR_11 == VAR_1)
    return VAR_0;
   if (VAR_11)
    return VAR_11;
   continue;
  }

  VAR_11 = FUNC_1(VAR_7, VAR_4,
        &VAR_10);
  if (VAR_11 == VAR_1)
   goto go_down;
  if (VAR_11)
   return VAR_11;




  if (VAR_9 == VAR_10.e_lblk)
   goto go_down;
  if (VAR_9 > VAR_10.e_lblk)
   continue;

  VAR_11 = FUNC_1(VAR_7, VAR_5,
        &VAR_10);
  if (VAR_11)
   return VAR_11;





 go_down:
  VAR_11 = FUNC_1(VAR_7, VAR_3,
        &VAR_10);
  if (VAR_11)
   return VAR_11;




 }
}
