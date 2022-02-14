
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_8__ {scalar_t__ offset; } ;
typedef int RPanel ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

void FUNC_6(RCore *VAR_2, RPanel *VAR_3, ut64 VAR_4) {
 if (VAR_4 != VAR_1) {
  VAR_2->offset = VAR_4;
 }
 int VAR_5 = FUNC_4(VAR_2, "xrefs:x refs:X ");
 switch (VAR_5) {
 case 'x':
  (void)FUNC_5(VAR_2, 1, 0);
  break;
 case 'X':
  (void)FUNC_5(VAR_2, 0, 0);
  break;
 default:
  break;
 }
 if (FUNC_0 (VAR_3, VAR_0)) {
  FUNC_2 (VAR_2, VAR_3, VAR_2->offset);
  FUNC_3 (VAR_2, 0, 0);
  return;
 }
 FUNC_1 (VAR_2, VAR_0, VAR_2->offset);
}
