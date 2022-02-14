
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_3__ {int inCursor; int inBuffer; scalar_t__ Pfdebug; int noticeHooks; int inEnd; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,unsigned long,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,unsigned long) ;

int
FUNC_5(int *VAR_1, size_t VAR_2, PGconn *VAR_3)
{
 uint16 VAR_4;
 uint32 VAR_5;

 switch (VAR_2)
 {
  case 2:
   if (VAR_3->inCursor + 2 > VAR_3->inEnd)
    return VAR_0;
   FUNC_1(&VAR_4, VAR_3->inBuffer + VAR_3->inCursor, 2);
   VAR_3->inCursor += 2;
   *VAR_1 = (int) FUNC_2(VAR_4);
   break;
  case 4:
   if (VAR_3->inCursor + 4 > VAR_3->inEnd)
    return VAR_0;
   FUNC_1(&VAR_5, VAR_3->inBuffer + VAR_3->inCursor, 4);
   VAR_3->inCursor += 4;
   *VAR_1 = (int) FUNC_3(VAR_5);
   break;
  default:
   FUNC_4(&VAR_3->noticeHooks,
        "integer of size %lu not supported by pqGetInt",
        (unsigned long) VAR_2);
   return VAR_0;
 }

 if (VAR_3->Pfdebug)
  FUNC_0(VAR_3->Pfdebug, "From backend (#%lu)> %d\n", (unsigned long) VAR_2, *VAR_1);

 return 0;
}
