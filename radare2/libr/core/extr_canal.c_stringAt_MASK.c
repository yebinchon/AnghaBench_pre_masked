
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef scalar_t__ ut64 ;
typedef int buf ;
struct TYPE_3__ {int io; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (scalar_t__*,int,int *) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static bool FUNC_2(RCore *VAR_0, ut64 VAR_1) {
 ut8 VAR_2[32];
 FUNC_1 (VAR_0->io, VAR_1 - 1, VAR_2, sizeof (VAR_2));

 if (VAR_2[0] != 0) {
  return 0;
 }
 return FUNC_0 (VAR_2 + 1, 31, ((void*)0));
}
