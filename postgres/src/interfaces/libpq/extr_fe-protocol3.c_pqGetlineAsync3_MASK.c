
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ asyncStatus; int inCursor; int copy_already_done; int inStart; int * inBuffer; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int *,int) ;

int
FUNC_2(PGconn *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (VAR_2->asyncStatus != VAR_1
  && VAR_2->asyncStatus != VAR_0)
  return -1;







 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return -1;
 if (VAR_5 == 0)
  return 0;







 VAR_2->inCursor += VAR_2->copy_already_done;
 VAR_6 = VAR_5 - 4 - VAR_2->copy_already_done;
 if (VAR_6 <= VAR_4)
 {

  FUNC_1(VAR_3, &VAR_2->inBuffer[VAR_2->inCursor], VAR_6);

  VAR_2->inStart = VAR_2->inCursor + VAR_6;

  VAR_2->copy_already_done = 0;
  return VAR_6;
 }
 else
 {

  FUNC_1(VAR_3, &VAR_2->inBuffer[VAR_2->inCursor], VAR_4);

  VAR_2->copy_already_done += VAR_4;
  return VAR_4;
 }
}
