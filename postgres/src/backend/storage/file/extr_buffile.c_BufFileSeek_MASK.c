
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_4__ {int curFile; scalar_t__ curOffset; int pos; scalar_t__ nbytes; int numFiles; } ;
typedef TYPE_1__ BufFile ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(BufFile *VAR_3, int VAR_4, off_t VAR_5, int VAR_6)
{
 int VAR_7;
 off_t VAR_8;

 switch (VAR_6)
 {
  case 128:
   if (VAR_4 < 0)
    return VAR_0;
   VAR_7 = VAR_4;
   VAR_8 = VAR_5;
   break;
  case 130:






   VAR_7 = VAR_3->curFile;
   VAR_8 = (VAR_3->curOffset + VAR_3->pos) + VAR_5;
   break;





  default:
   FUNC_1(VAR_1, "invalid whence: %d", VAR_6);
   return VAR_0;
 }
 while (VAR_8 < 0)
 {
  if (--VAR_7 < 0)
   return VAR_0;
  VAR_8 += VAR_2;
 }
 if (VAR_7 == VAR_3->curFile &&
  VAR_8 >= VAR_3->curOffset &&
  VAR_8 <= VAR_3->curOffset + VAR_3->nbytes)
 {






  VAR_3->pos = (int) (VAR_8 - VAR_3->curOffset);
  return 0;
 }

 if (FUNC_0(VAR_3) != 0)
  return VAR_0;
 if (VAR_7 == VAR_3->numFiles && VAR_8 == 0)
 {
  VAR_7--;
  VAR_8 = VAR_2;
 }
 while (VAR_8 > VAR_2)
 {
  if (++VAR_7 >= VAR_3->numFiles)
   return VAR_0;
  VAR_8 -= VAR_2;
 }
 if (VAR_7 >= VAR_3->numFiles)
  return VAR_0;

 VAR_3->curFile = VAR_7;
 VAR_3->curOffset = VAR_8;
 VAR_3->pos = 0;
 VAR_3->nbytes = 0;
 return 0;
}
