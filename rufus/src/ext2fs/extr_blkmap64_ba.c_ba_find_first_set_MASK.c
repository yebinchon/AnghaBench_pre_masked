
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
typedef int errcode_t ;
typedef int __u64 ;
struct TYPE_5__ {scalar_t__ bitarray; } ;
struct TYPE_4__ {int start; int private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static errcode_t FUNC_1(ext2fs_generic_bitmap_64 VAR_1,
        __u64 VAR_2, __u64 VAR_3, __u64 *VAR_4)
{
 ext2fs_ba_private VAR_5 = (ext2fs_ba_private)VAR_1->private;
 unsigned long VAR_6 = VAR_2 - VAR_1->start;
 unsigned long VAR_7 = VAR_3 - VAR_2 + 1;
 int VAR_8 = 0;
 const unsigned char *VAR_9;
 unsigned long VAR_10, VAR_11;


 while ((VAR_6 & 0x7) != 0 && VAR_7 > 0) {
  if (FUNC_0(VAR_6, VAR_5->bitarray)) {
   *VAR_4 = VAR_6 + VAR_1->start;
   return 0;
  }
  VAR_6++;
  VAR_7--;
 }

 if (!VAR_7)
  return VAR_0;

 VAR_9 = ((unsigned char *)VAR_5->bitarray) + (VAR_6 >> 3);

 while (VAR_7 >= 8 && (((uintptr_t)VAR_9) & 0x07)) {
  if (*VAR_9 != 0) {
   VAR_8 = 1;
   break;
  }
  VAR_9++;
  VAR_7 -= 8;
  VAR_6 += 8;
 }

 if (!VAR_8) {
  VAR_10 = VAR_7 >> 6;
  VAR_11 = VAR_10;
  while (VAR_11) {
   if (*((const __u64 *)VAR_9) != 0)
    break;
   VAR_9 += 8;
   VAR_11--;
  }
  VAR_7 -= 64 * (VAR_10 - VAR_11);
  VAR_6 += 64 * (VAR_10 - VAR_11);

  VAR_10 = VAR_7 >> 3;
  VAR_11 = VAR_10;
  while (VAR_11) {
   if (*VAR_9 != 0) {
    VAR_8 = 1;
    break;
   }
   VAR_9++;
   VAR_11--;
  }
  VAR_7 -= 8 * (VAR_10 - VAR_11);
  VAR_6 += 8 * (VAR_10 - VAR_11);
 }


 while (VAR_7-- > 0) {
  if (FUNC_0(VAR_6, VAR_5->bitarray)) {
   *VAR_4 = VAR_6 + VAR_1->start;
   return 0;
  }
  VAR_6++;
 }

 return VAR_0;
}
