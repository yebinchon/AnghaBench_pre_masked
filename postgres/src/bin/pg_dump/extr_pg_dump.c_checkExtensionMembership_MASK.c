
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int remoteVersion; TYPE_1__* dopt; } ;
struct TYPE_13__ {int ext_member; int dump; int catId; } ;
struct TYPE_11__ {int dump; int dump_contains; int dumpId; } ;
struct TYPE_12__ {TYPE_2__ dobj; } ;
struct TYPE_10__ {scalar_t__ binary_upgrade; } ;
typedef TYPE_3__ ExtensionInfo ;
typedef TYPE_4__ DumpableObject ;
typedef TYPE_5__ Archive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(DumpableObject *VAR_4, Archive *VAR_5)
{
 ExtensionInfo *VAR_6 = FUNC_1(VAR_4->catId);

 if (VAR_6 == ((void*)0))
  return 0;

 VAR_4->ext_member = 1;


 FUNC_0(VAR_4, VAR_6->dobj.dumpId);
 if (VAR_5->dopt->binary_upgrade)
  VAR_4->dump = VAR_6->dobj.dump;
 else
 {
  if (VAR_5->remoteVersion < 90600)
   VAR_4->dump = VAR_1;
  else
   VAR_4->dump = VAR_6->dobj.dump_contains & (VAR_0 |
             VAR_3 |
             VAR_2);
 }

 return 1;
}
