
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int name; int dump; } ;
struct TYPE_20__ {scalar_t__ typtype; TYPE_1__ dobj; int isDefined; } ;
typedef TYPE_2__ TypeInfo ;
struct TYPE_22__ {TYPE_3__* dopt; } ;
struct TYPE_21__ {scalar_t__ dataOnly; } ;
typedef TYPE_3__ DumpOptions ;
typedef TYPE_4__ Archive ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(Archive *VAR_6, TypeInfo *VAR_7)
{
 DumpOptions *VAR_8 = VAR_6->dopt;


 if (!VAR_7->dobj.dump || VAR_8->dataOnly)
  return;


 if (VAR_7->typtype == VAR_0)
  FUNC_0(VAR_6, VAR_7);
 else if (VAR_7->typtype == VAR_2)
  FUNC_2(VAR_6, VAR_7);
 else if (VAR_7->typtype == VAR_1)
  FUNC_1(VAR_6, VAR_7);
 else if (VAR_7->typtype == VAR_3)
  FUNC_3(VAR_6, VAR_7);
 else if (VAR_7->typtype == VAR_5)
  FUNC_4(VAR_6, VAR_7);
 else if (VAR_7->typtype == VAR_4 && !VAR_7->isDefined)
  FUNC_5(VAR_6, VAR_7);
 else
  FUNC_6("typtype of data type \"%s\" appears to be invalid",
        VAR_7->dobj.name);
}
