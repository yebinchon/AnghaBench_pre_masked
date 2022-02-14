
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {void* SWLogicOpEnabled; int LogicOp; scalar_t__ IndexLogicOpEnabled; scalar_t__ ColorLogicOpEnabled; } ;
struct TYPE_11__ {scalar_t__ (* LogicOp ) (TYPE_4__*,int ) ;} ;
struct TYPE_13__ {TYPE_3__ Color; TYPE_2__ Driver; TYPE_1__* Visual; } ;
struct TYPE_10__ {scalar_t__ RGBAflag; } ;
typedef TYPE_4__ GLcontext ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_4( GLcontext *VAR_3 )
{
   if (VAR_3->Visual->RGBAflag) {

      if (VAR_3->Color.ColorLogicOpEnabled) {
  if (VAR_3->Driver.LogicOp
             && (*VAR_3->Driver.LogicOp)( VAR_3, VAR_3->Color.LogicOp )) {

     VAR_3->Color.SWLogicOpEnabled = VAR_1;
  }
  else {

     VAR_3->Color.SWLogicOpEnabled = VAR_2;
  }
      }
      else {

  if (VAR_3->Driver.LogicOp) {
            (void) (*VAR_3->Driver.LogicOp)( VAR_3, VAR_0 );
         }
  VAR_3->Color.SWLogicOpEnabled = VAR_1;
      }
   }
   else {

      if (VAR_3->Color.IndexLogicOpEnabled) {
  if (VAR_3->Driver.LogicOp
             && (*VAR_3->Driver.LogicOp)( VAR_3, VAR_3->Color.LogicOp )) {

     VAR_3->Color.SWLogicOpEnabled = VAR_1;
  }
  else {

     VAR_3->Color.SWLogicOpEnabled = VAR_2;
  }
      }
      else {

  if (VAR_3->Driver.LogicOp) {
            (void) (*VAR_3->Driver.LogicOp)( VAR_3, VAR_0 );
         }
  VAR_3->Color.SWLogicOpEnabled = VAR_1;
      }
   }
}
