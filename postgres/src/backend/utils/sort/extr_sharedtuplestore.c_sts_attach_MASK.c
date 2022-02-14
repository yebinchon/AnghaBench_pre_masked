
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nparticipants; } ;
struct TYPE_6__ {int participant; int context; int * fileset; TYPE_2__* sts; } ;
typedef TYPE_1__ SharedTuplestoreAccessor ;
typedef TYPE_2__ SharedTuplestore ;
typedef int SharedFileSet ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

SharedTuplestoreAccessor *
FUNC_2(SharedTuplestore *VAR_1,
     int VAR_2,
     SharedFileSet *VAR_3)
{
 SharedTuplestoreAccessor *VAR_4;

 FUNC_0(VAR_2 < VAR_1->nparticipants);

 VAR_4 = FUNC_1(sizeof(SharedTuplestoreAccessor));
 VAR_4->participant = VAR_2;
 VAR_4->sts = VAR_1;
 VAR_4->fileset = VAR_3;
 VAR_4->context = VAR_0;

 return VAR_4;
}
