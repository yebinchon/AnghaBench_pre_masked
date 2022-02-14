
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hwtstamp; scalar_t__ swtstamp; scalar_t__ tstampns; scalar_t__ tstamp; } ;
struct TYPE_5__ {int so_timestamping; scalar_t__ so_timestampns; scalar_t__ so_timestamp; } ;
struct test_case {TYPE_2__ expected; TYPE_1__ sockopt; } ;
struct TYPE_7__ {int mask; char* name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,...) ;
 TYPE_3__* VAR_0 ;

void FUNC_2(struct test_case *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1("sockopts {");
 if (VAR_1->sockopt.so_timestamp)
  FUNC_1(" SO_TIMESTAMP ");
 if (VAR_1->sockopt.so_timestampns)
  FUNC_1(" SO_TIMESTAMPNS ");
 if (VAR_1->sockopt.so_timestamping) {
  FUNC_1(" SO_TIMESTAMPING: {");
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
   if (VAR_1->sockopt.so_timestamping & VAR_0[VAR_2].mask)
    FUNC_1(" %s |", VAR_0[VAR_2].name);
  FUNC_1("}");
 }
 FUNC_1("} expected cmsgs: {");
 if (VAR_1->expected.tstamp)
  FUNC_1(" SCM_TIMESTAMP ");
 if (VAR_1->expected.tstampns)
  FUNC_1(" SCM_TIMESTAMPNS ");
 if (VAR_1->expected.swtstamp || VAR_1->expected.hwtstamp) {
  FUNC_1(" SCM_TIMESTAMPING {");
  if (VAR_1->expected.swtstamp)
   FUNC_1("0");
  if (VAR_1->expected.swtstamp && VAR_1->expected.hwtstamp)
   FUNC_1(",");
  if (VAR_1->expected.hwtstamp)
   FUNC_1("2");
  FUNC_1("}");
 }
 FUNC_1("}\n");
}
