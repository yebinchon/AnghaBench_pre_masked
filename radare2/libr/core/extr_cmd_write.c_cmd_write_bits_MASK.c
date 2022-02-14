
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ret ;
typedef int orig ;
struct TYPE_5__ {int offset; int io; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int const*,int) ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0, int VAR_1, ut64 VAR_2) {
 ut64 VAR_3, VAR_4;

 FUNC_2 (VAR_0->io, VAR_0->offset, (ut8*)&VAR_4, sizeof (VAR_4));
 if (VAR_1) {
  VAR_3 = VAR_4 | VAR_2;
 } else {
  VAR_3 = VAR_4 & (~(VAR_2));
 }
 if (!FUNC_1 (VAR_0, VAR_0->offset, (const ut8*)&VAR_3, sizeof (VAR_3))) {
  FUNC_0 (VAR_0);
 }
}
