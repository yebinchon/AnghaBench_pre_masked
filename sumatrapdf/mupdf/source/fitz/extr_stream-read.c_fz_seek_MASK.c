
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ eof; int (* seek ) (int *,TYPE_1__*,scalar_t__,int) ;scalar_t__ avail; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*,scalar_t__,int) ;

void
FUNC_4(fz_context *VAR_1, fz_stream *VAR_2, int64_t VAR_3, int VAR_4)
{
 VAR_2->avail = 0;
 if (VAR_2->seek)
 {
  if (VAR_4 == 1)
  {
   VAR_3 += FUNC_1(VAR_1, VAR_2);
   VAR_4 = 0;
  }
  VAR_2->seek(VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_2->eof = 0;
 }
 else if (VAR_4 != 2)
 {
  if (VAR_4 == 0)
   VAR_3 -= FUNC_1(VAR_1, VAR_2);
  if (VAR_3 < 0)
   FUNC_2(VAR_1, "cannot seek backwards");

  while (VAR_3-- > 0)
  {
   if (FUNC_0(VAR_1, VAR_2) == VAR_0)
   {
    FUNC_2(VAR_1, "seek failed");
    break;
   }
  }
 }
 else
  FUNC_2(VAR_1, "cannot seek");
}
