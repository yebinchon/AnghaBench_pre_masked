
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_9__ {int vt; } ;
struct TYPE_6__ {int wParamFlags; int pparamdescex; } ;
struct TYPE_7__ {TYPE_1__ paramdesc; } ;
struct TYPE_8__ {TYPE_2__ u; TYPE_4__ tdesc; } ;
typedef TYPE_3__ ELEMDESC ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,char*) ;

__attribute__((used)) static void FUNC_2(const ELEMDESC *VAR_7) {
  char VAR_8[200];
  USHORT VAR_9 = VAR_7->u.paramdesc.wParamFlags;
  FUNC_1(&VAR_7->tdesc,VAR_8);
  FUNC_0("\t\ttdesc.vartype %d (%s)\n",VAR_7->tdesc.vt,VAR_8);
  FUNC_0("\t\tu.paramdesc.wParamFlags");
  if (!VAR_9) FUNC_0(" PARAMFLAGS_NONE");
  if (VAR_9 & VAR_2) FUNC_0(" PARAMFLAG_FIN");
  if (VAR_9 & VAR_5) FUNC_0(" PARAMFLAG_FOUT");
  if (VAR_9 & VAR_3) FUNC_0(" PARAMFLAG_FLCID");
  if (VAR_9 & VAR_6) FUNC_0(" PARAMFLAG_FRETVAL");
  if (VAR_9 & VAR_4) FUNC_0(" PARAMFLAG_FOPT");
  if (VAR_9 & VAR_1) FUNC_0(" PARAMFLAG_FHASDEFAULT");
  if (VAR_9 & VAR_0) FUNC_0(" PARAMFLAG_FHASCUSTDATA");
  FUNC_0("\n\t\tu.paramdesc.lpex %p\n",VAR_7->u.paramdesc.pparamdescex);
}
