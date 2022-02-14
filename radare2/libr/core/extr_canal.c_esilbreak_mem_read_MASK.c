
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef scalar_t__ ut64 ;
typedef int str ;
struct TYPE_8__ {int anal; int io; } ;
struct TYPE_7__ {int address; TYPE_1__* anal; } ;
struct TYPE_6__ {int big_endian; } ;
typedef TYPE_2__ RAnalEsil ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_7(RAnalEsil *VAR_6, ut64 VAR_7, ut8 *VAR_8, int VAR_9) {
 ut8 VAR_10[128];
 if (VAR_7 != VAR_1) {
  VAR_3 = VAR_7;
 }
 if (FUNC_1 (VAR_4->io, VAR_7) && FUNC_3 (VAR_4->io, VAR_7, (ut8*)VAR_8, VAR_9)) {
  ut64 VAR_11;
  bool VAR_12 = 1;
  switch (VAR_9) {
  case 2:
   VAR_2 = VAR_11 = (ut64)FUNC_4 (VAR_8, VAR_6->anal->big_endian);
   break;
  case 4:
   VAR_2 = VAR_11 = (ut64)FUNC_5 (VAR_8, VAR_6->anal->big_endian);
   break;
  case 8:
   VAR_2 = VAR_11 = FUNC_6 (VAR_8, VAR_6->anal->big_endian);
   break;
  default:
   VAR_12 = 0;
   FUNC_3 (VAR_4->io, VAR_7, (ut8*)VAR_8, VAR_9);
   break;
  }

  bool VAR_13 = 0;
  if (VAR_12 && FUNC_1 (VAR_4->io, VAR_11)) {
   if (VAR_5 == VAR_1 || VAR_5 == VAR_11) {
    VAR_10[0] = 0;
    if (FUNC_3 (VAR_4->io, VAR_11, VAR_10, sizeof (VAR_10)) < 1) {

     VAR_10[0] = 0;
     VAR_13 = 0;
    } else {
     FUNC_2 (VAR_4->anal, VAR_6->address, VAR_11, VAR_0);
     VAR_10[sizeof (VAR_10) - 1] = 0;
     FUNC_0 (VAR_4, VAR_6->address, VAR_11);
     VAR_2 = VAR_1;
     VAR_13 = 1;
    }
   }
  }


  if (VAR_5 == VAR_1 || VAR_5 == VAR_7 || (VAR_5 == VAR_1 && !VAR_13)) {
   FUNC_2 (VAR_4->anal, VAR_6->address, VAR_7, VAR_0);
  }
 }
 return 0;
}
