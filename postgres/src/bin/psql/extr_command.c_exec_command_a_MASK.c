
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int backslashResult ;
struct TYPE_4__ {scalar_t__ format; } ;
struct TYPE_6__ {TYPE_1__ topt; } ;
struct TYPE_5__ {int quiet; TYPE_3__ popt; } ;
typedef int PsqlScanState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,TYPE_3__*,int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static backslashResult
FUNC_1(PsqlScanState VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;

 if (VAR_5)
 {
  if (VAR_3.popt.topt.format != VAR_0)
   VAR_6 = FUNC_0("format", "aligned", &VAR_3.popt, VAR_3.quiet);
  else
   VAR_6 = FUNC_0("format", "unaligned", &VAR_3.popt, VAR_3.quiet);
 }

 return VAR_6 ? VAR_2 : VAR_1;
}
