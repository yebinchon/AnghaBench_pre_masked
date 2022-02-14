
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int temp_blks_read; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {long curOffset; int curFile; int numFiles; scalar_t__ nbytes; TYPE_1__ buffer; int * files; } ;
typedef int File ;
typedef TYPE_2__ BufFile ;


 scalar_t__ FUNC_0 (int ,int ,int,long,int ) ;
 long VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(BufFile *VAR_3)
{
 File VAR_4;




 if (VAR_3->curOffset >= VAR_0 &&
  VAR_3->curFile + 1 < VAR_3->numFiles)
 {
  VAR_3->curFile++;
  VAR_3->curOffset = 0L;
 }




 VAR_4 = VAR_3->files[VAR_3->curFile];
 VAR_3->nbytes = FUNC_0(VAR_4,
       VAR_3->buffer.data,
       sizeof(VAR_3->buffer),
       VAR_3->curOffset,
       VAR_1);
 if (VAR_3->nbytes < 0)
  VAR_3->nbytes = 0;


 if (VAR_3->nbytes > 0)
  VAR_2.temp_blks_read++;
}
