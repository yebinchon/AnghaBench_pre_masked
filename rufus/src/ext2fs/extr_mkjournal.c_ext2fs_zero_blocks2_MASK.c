
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_3__ {int blocksize; int io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,int,int,void*) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (void*,int ,int) ;
 void* FUNC_4 (void*,int) ;

errcode_t FUNC_5(ext2_filsys VAR_2, blk64_t VAR_3, int VAR_4,
         blk64_t *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 static void *VAR_9;
 static int VAR_10 = 0;
 errcode_t VAR_11;


 if (!VAR_2) {
  if (VAR_9) {
   FUNC_0(VAR_9);
   VAR_9 = 0;
   VAR_10 = 0;
  }
  return 0;
 }


 if (VAR_4 <= 0)
  return 0;


 VAR_11 = FUNC_2(VAR_2->io, VAR_3, VAR_4);
 if (VAR_11 == 0)
  return 0;


 if (VAR_4 > VAR_10 && VAR_10 < VAR_1) {
  void *VAR_12;
  int VAR_13 = VAR_4;

  if (VAR_13 > VAR_1)
   VAR_13 = VAR_1;
  VAR_12 = FUNC_4(VAR_9, VAR_2->blocksize * VAR_13);
  if (!VAR_12)
   return VAR_0;
  VAR_9 = VAR_12;
  VAR_10 = VAR_13;
  FUNC_3(VAR_9, 0, VAR_2->blocksize * VAR_10);
 }

 VAR_7=0;
 while (VAR_7 < VAR_4) {
  if (VAR_3 % VAR_10) {
   VAR_8 = VAR_10 - (VAR_3 % VAR_10);
   if (VAR_8 > (VAR_4 - VAR_7))
    VAR_8 = VAR_4 - VAR_7;
  } else {
   VAR_8 = VAR_4 - VAR_7;
   if (VAR_8 > VAR_10)
    VAR_8 = VAR_10;
  }
  VAR_11 = FUNC_1(VAR_2->io, VAR_3, VAR_8, VAR_9);
  if (VAR_11) {
   if (VAR_6)
    *VAR_6 = VAR_8;
   if (VAR_5)
    *VAR_5 = VAR_3;
   return VAR_11;
  }
  VAR_7 += VAR_8; VAR_3 += VAR_8;
 }
 return 0;
}
