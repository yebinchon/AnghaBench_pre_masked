
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
struct TYPE_2__ {char* bitmap; scalar_t__ start; } ;


 int FUNC_0 (char const*,size_t) ;

__attribute__((used)) static int FUNC_1(ext2fs_generic_bitmap VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2)
{
 ext2fs_generic_bitmap_32 VAR_3 = (ext2fs_generic_bitmap_32) VAR_0;
 size_t VAR_4, VAR_5 = VAR_2 >> 3;
 unsigned int VAR_6, VAR_7 = VAR_2 % 8;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;
 const char *VAR_13 = VAR_3->bitmap;

 VAR_1 -= VAR_3->start;
 VAR_4 = VAR_1 >> 3;
 VAR_6 = VAR_1 % 8;

 if (VAR_6 != 0) {




  VAR_10 = 8 - VAR_6;
  if (VAR_2 < 8 - VAR_6) {
   VAR_10 = (int)VAR_2;
   VAR_11 = VAR_2 + VAR_6 - 1;
  } else
   VAR_11 = 7;

  for (VAR_12 = VAR_10; VAR_12 > 0; VAR_12--, VAR_11--)
   VAR_8 |= 1 << VAR_11;





  if (VAR_8 & VAR_13[VAR_4])
   return 0;
  else if (VAR_2 <= 8 - VAR_6)
   return 1;

  VAR_4++;
  VAR_7 = (VAR_2 - VAR_10) % 8;
  VAR_5 = (VAR_2 - VAR_10) >> 3;
 }





 if (VAR_7 != 0) {




  for (VAR_11 = VAR_7 - 1; VAR_11 >= 0; VAR_11--)
   VAR_9 |= 1 << VAR_11;





  if (VAR_9 & VAR_13[VAR_4 + VAR_5])
   return 0;
  else if (VAR_5 == 0)
   return 1;
 }


 return FUNC_0(VAR_13 + VAR_4, VAR_5);
}
