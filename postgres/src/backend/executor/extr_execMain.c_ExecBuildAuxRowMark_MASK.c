
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int resname ;
struct TYPE_6__ {void* toidAttNo; void* wholeAttNo; void* ctidAttNo; TYPE_1__* rowmark; } ;
struct TYPE_5__ {scalar_t__ markType; int rowmarkId; scalar_t__ rti; scalar_t__ prti; } ;
typedef int List ;
typedef TYPE_1__ ExecRowMark ;
typedef TYPE_2__ ExecAuxRowMark ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 void* FUNC_1 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*,int) ;

ExecAuxRowMark *
FUNC_5(ExecRowMark *VAR_2, List *VAR_3)
{
 ExecAuxRowMark *VAR_4 = (ExecAuxRowMark *) FUNC_3(sizeof(ExecAuxRowMark));
 char VAR_5[32];

 VAR_4->rowmark = VAR_2;


 if (VAR_2->markType != VAR_1)
 {

  FUNC_4(VAR_5, sizeof(VAR_5), "ctid%u", VAR_2->rowmarkId);
  VAR_4->ctidAttNo = FUNC_1(VAR_3,
                VAR_5);
  if (!FUNC_0(VAR_4->ctidAttNo))
   FUNC_2(VAR_0, "could not find junk %s column", VAR_5);
 }
 else
 {

  FUNC_4(VAR_5, sizeof(VAR_5), "wholerow%u", VAR_2->rowmarkId);
  VAR_4->wholeAttNo = FUNC_1(VAR_3,
              VAR_5);
  if (!FUNC_0(VAR_4->wholeAttNo))
   FUNC_2(VAR_0, "could not find junk %s column", VAR_5);
 }


 if (VAR_2->rti != VAR_2->prti)
 {
  FUNC_4(VAR_5, sizeof(VAR_5), "tableoid%u", VAR_2->rowmarkId);
  VAR_4->toidAttNo = FUNC_1(VAR_3,
                VAR_5);
  if (!FUNC_0(VAR_4->toidAttNo))
   FUNC_2(VAR_0, "could not find junk %s column", VAR_5);
 }

 return VAR_4;
}
