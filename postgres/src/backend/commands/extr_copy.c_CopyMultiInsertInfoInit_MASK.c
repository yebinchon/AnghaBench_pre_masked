
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int ti_options; int mycid; int * estate; int cstate; scalar_t__ bufferedBytes; scalar_t__ bufferedTuples; int multiInsertBuffers; } ;
struct TYPE_11__ {TYPE_2__* ri_RelationDesc; } ;
struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {scalar_t__ relkind; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef int EState ;
typedef int CopyState ;
typedef TYPE_4__ CopyMultiInsertInfo ;
typedef int CommandId ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(CopyMultiInsertInfo *VAR_2, ResultRelInfo *VAR_3,
      CopyState VAR_4, EState *VAR_5, CommandId VAR_6,
      int VAR_7)
{
 VAR_2->multiInsertBuffers = VAR_0;
 VAR_2->bufferedTuples = 0;
 VAR_2->bufferedBytes = 0;
 VAR_2->cstate = VAR_4;
 VAR_2->estate = VAR_5;
 VAR_2->mycid = VAR_6;
 VAR_2->ti_options = VAR_7;






 if (VAR_3->ri_RelationDesc->rd_rel->relkind != VAR_1)
  FUNC_0(VAR_2, VAR_3);
}
