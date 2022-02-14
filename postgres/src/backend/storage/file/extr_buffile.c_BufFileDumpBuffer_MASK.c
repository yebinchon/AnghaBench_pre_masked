
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_8__ {int temp_blks_written; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_7__ {int nbytes; scalar_t__ curOffset; scalar_t__ curFile; scalar_t__ numFiles; int dirty; scalar_t__ pos; TYPE_1__ buffer; int * files; } ;
typedef int File ;
typedef TYPE_2__ BufFile ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(BufFile *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 File VAR_6;





 while (VAR_4 < VAR_3->nbytes)
 {
  off_t VAR_7;




  if (VAR_3->curOffset >= VAR_0)
  {
   while (VAR_3->curFile + 1 >= VAR_3->numFiles)
    FUNC_2(VAR_3);
   VAR_3->curFile++;
   VAR_3->curOffset = 0L;
  }




  VAR_5 = VAR_3->nbytes - VAR_4;
  VAR_7 = VAR_0 - VAR_3->curOffset;

  if ((off_t) VAR_5 > VAR_7)
   VAR_5 = (int) VAR_7;

  VAR_6 = VAR_3->files[VAR_3->curFile];
  VAR_5 = FUNC_1(VAR_6,
         VAR_3->buffer.data + VAR_4,
         VAR_5,
         VAR_3->curOffset,
         VAR_1);
  if (VAR_5 <= 0)
   return;
  VAR_3->curOffset += VAR_5;
  VAR_4 += VAR_5;

  VAR_2.temp_blks_written++;
 }
 VAR_3->dirty = 0;







 VAR_3->curOffset -= (VAR_3->nbytes - VAR_3->pos);
 if (VAR_3->curOffset < 0)
 {
  VAR_3->curFile--;
  FUNC_0(VAR_3->curFile >= 0);
  VAR_3->curOffset += VAR_0;
 }




 VAR_3->pos = 0;
 VAR_3->nbytes = 0;
}
