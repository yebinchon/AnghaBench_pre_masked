
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ rcErr; int szPage; } ;
typedef TYPE_1__ ScrubState ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;

__attribute__((used)) static u8 *FUNC_1(ScrubState *VAR_1){
  u8 *VAR_2;
  if( VAR_1->rcErr ) return 0;
  VAR_2 = FUNC_0( VAR_1->szPage );
  if( VAR_2==0 ) VAR_1->rcErr = VAR_0;
  return VAR_2;
}
