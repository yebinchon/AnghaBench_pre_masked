
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cpMin; scalar_t__ cpMax; } ;
struct TYPE_12__ {int nEventMask; int texthost; TYPE_1__ notified_cr; } ;
struct TYPE_10__ {int code; scalar_t__ idFrom; int * hwndFrom; } ;
struct TYPE_11__ {int seltyp; TYPE_2__ nmhdr; TYPE_1__ chrg; } ;
typedef TYPE_3__ SELCHANGE ;
typedef TYPE_4__ ME_TextEditor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__*,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,int,char*,char*) ;

void FUNC_4(ME_TextEditor *VAR_5)
{
  SELCHANGE VAR_6;

  VAR_6.nmhdr.hwndFrom = ((void*)0);
  VAR_6.nmhdr.idFrom = 0;
  VAR_6.nmhdr.code = VAR_1;
  FUNC_2(VAR_5, &VAR_6.chrg.cpMin, &VAR_6.chrg.cpMax);
  VAR_6.seltyp = VAR_2;
  if (VAR_6.chrg.cpMin != VAR_6.chrg.cpMax)
    VAR_6.seltyp |= VAR_4;
  if (VAR_6.chrg.cpMin < VAR_6.chrg.cpMax+1)
    VAR_6.seltyp |= VAR_3;

  if (VAR_6.chrg.cpMin != VAR_5->notified_cr.cpMin || VAR_6.chrg.cpMax != VAR_5->notified_cr.cpMax)
  {
    FUNC_1(VAR_5);

    VAR_5->notified_cr = VAR_6.chrg;

    if (VAR_5->nEventMask & VAR_0)
    {
      FUNC_3("cpMin=%d cpMax=%d seltyp=%d (%s %s)\n",
            VAR_6.chrg.cpMin, VAR_6.chrg.cpMax, VAR_6.seltyp,
            (VAR_6.seltyp & VAR_4) ? "SEL_TEXT" : "",
            (VAR_6.seltyp & VAR_3) ? "SEL_MULTICHAR" : "");
      FUNC_0(VAR_5->texthost, VAR_6.nmhdr.code, &VAR_6);
    }
  }
}
