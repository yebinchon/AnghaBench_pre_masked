
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_7__ {scalar_t__ ws_tli; } ;
struct TYPE_6__ {int ws_segsize; } ;
struct TYPE_8__ {scalar_t__ currTLI; scalar_t__ currTLIValidUntil; TYPE_2__ seg; TYPE_1__ segcxt; } ;
typedef TYPE_3__ XLogReaderState ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_6 (long) ;

int
FUNC_7(XLogReaderState *VAR_2, XLogRecPtr VAR_3,
      int VAR_4, XLogRecPtr VAR_5, char *VAR_6)
{
 XLogRecPtr VAR_7,
    VAR_8;
 int VAR_9;

 VAR_8 = VAR_3 + VAR_4;


 while (1)
 {
  if (!FUNC_3())
   VAR_7 = FUNC_1();
  else
   VAR_7 = FUNC_2(&VAR_0);
  VAR_2->seg.ws_tli = VAR_0;
  FUNC_5(VAR_2, VAR_3, VAR_4);

  if (VAR_2->currTLI == VAR_0)
  {

   if (VAR_8 <= VAR_7)
    break;

   FUNC_0();
   FUNC_6(1000L);
  }
  else
  {
   VAR_7 = VAR_2->currTLIValidUntil;
   VAR_2->seg.ws_tli = VAR_2->currTLI;


   break;
  }
 }

 if (VAR_3 + VAR_1 <= VAR_7)
 {




  VAR_9 = VAR_1;
 }
 else if (VAR_3 + VAR_4 > VAR_7)
 {

  return -1;
 }
 else
 {

  VAR_9 = VAR_7 - VAR_3;
 }






 FUNC_4(VAR_6, VAR_2->segcxt.ws_segsize, VAR_2->seg.ws_tli, VAR_3,
    VAR_1);


 return VAR_9;
}
