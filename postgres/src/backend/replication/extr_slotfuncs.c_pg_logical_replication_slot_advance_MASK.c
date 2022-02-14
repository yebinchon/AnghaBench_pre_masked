
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int XLogRecord ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_9__ {scalar_t__ restart_lsn; scalar_t__ confirmed_flush; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
struct TYPE_11__ {scalar_t__ EndRecPtr; } ;
struct TYPE_10__ {TYPE_3__* reader; } ;
typedef int ResourceOwner ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (scalar_t__,int ,int,int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int * FUNC_11 (TYPE_3__*,scalar_t__,char**) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static XLogRecPtr
FUNC_14(XLogRecPtr VAR_6)
{
 LogicalDecodingContext *VAR_7;
 ResourceOwner VAR_8 = VAR_0;
 XLogRecPtr VAR_9;
 XLogRecPtr VAR_10;

 FUNC_9();
 {





  VAR_7 = FUNC_1(VAR_2,
         VAR_4,
         1,
         VAR_5,
         ((void*)0), ((void*)0), ((void*)0));





  VAR_9 = VAR_3->data.restart_lsn;


  VAR_10 = VAR_3->data.confirmed_flush;


  FUNC_3();


  while ((!FUNC_12(VAR_9) &&
    VAR_9 < VAR_6) ||
      (!FUNC_12(VAR_7->reader->EndRecPtr) &&
    VAR_7->reader->EndRecPtr < VAR_6))
  {
   char *VAR_11 = ((void*)0);
   XLogRecord *VAR_12;





   VAR_12 = FUNC_11(VAR_7->reader, VAR_9, &VAR_11);
   if (VAR_11)
    FUNC_13(VAR_1, "%s", VAR_11);


   VAR_9 = VAR_2;






   if (VAR_12)
    FUNC_5(VAR_7, VAR_7->reader);


   if (VAR_6 <= VAR_7->reader->EndRecPtr)
    break;

   FUNC_0();
  }






  VAR_0 = VAR_8;

  if (VAR_7->reader->EndRecPtr != VAR_2)
  {
   FUNC_4(VAR_6);
   FUNC_10();
  }

  VAR_10 = VAR_3->data.confirmed_flush;


  FUNC_2(VAR_7);

  FUNC_3();
 }
 FUNC_6();
 {

  FUNC_3();

  FUNC_8();
 }
 FUNC_7();

 return VAR_10;
}
