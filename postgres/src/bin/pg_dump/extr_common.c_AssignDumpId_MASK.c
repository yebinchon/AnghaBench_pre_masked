
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dumpId; int ext_member; scalar_t__ allocDeps; scalar_t__ nDeps; int * dependencies; int dump; int * namespace; int * name; } ;
typedef TYPE_1__ DumpableObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__**,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int) ;

void
FUNC_3(DumpableObject *VAR_5)
{
 VAR_5->dumpId = ++VAR_4;
 VAR_5->name = ((void*)0);
 VAR_5->namespace = ((void*)0);
 VAR_5->dump = VAR_0;
 VAR_5->ext_member = 0;
 VAR_5->dependencies = ((void*)0);
 VAR_5->nDeps = 0;
 VAR_5->allocDeps = 0;

 while (VAR_5->dumpId >= VAR_1)
 {
  int VAR_6;

  if (VAR_1 <= 0)
  {
   VAR_6 = 256;
   VAR_3 = (DumpableObject **)
    FUNC_1(VAR_6 * sizeof(DumpableObject *));
  }
  else
  {
   VAR_6 = VAR_1 * 2;
   VAR_3 = (DumpableObject **)
    FUNC_2(VAR_3, VAR_6 * sizeof(DumpableObject *));
  }
  FUNC_0(VAR_3 + VAR_1, 0,
      (VAR_6 - VAR_1) * sizeof(DumpableObject *));
  VAR_1 = VAR_6;
 }
 VAR_3[VAR_5->dumpId] = VAR_5;


 VAR_2 = 0;
}
