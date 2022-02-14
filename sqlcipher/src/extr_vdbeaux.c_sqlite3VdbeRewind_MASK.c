
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ magic; int nOp; int nMem; scalar_t__ db; int pc; int cacheCtr; int minWriteFileFormat; TYPE_2__* aOp; scalar_t__ nFkConstraint; scalar_t__ iStatement; scalar_t__ nChange; int errorAction; int rc; TYPE_1__* aMem; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_6__ {scalar_t__ cycles; scalar_t__ cnt; } ;
struct TYPE_5__ {scalar_t__ db; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;

void FUNC_1(Vdbe *VAR_5){



  FUNC_0( VAR_5!=0 );
  FUNC_0( VAR_5->magic==VAR_2 || VAR_5->magic==VAR_3 );



  FUNC_0( VAR_5->nOp>0 );


  VAR_5->magic = VAR_4;






  VAR_5->pc = -1;
  VAR_5->rc = VAR_1;
  VAR_5->errorAction = VAR_0;
  VAR_5->nChange = 0;
  VAR_5->cacheCtr = 1;
  VAR_5->minWriteFileFormat = 255;
  VAR_5->iStatement = 0;
  VAR_5->nFkConstraint = 0;






}
