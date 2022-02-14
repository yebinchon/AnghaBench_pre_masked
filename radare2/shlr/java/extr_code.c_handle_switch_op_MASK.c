
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
struct TYPE_2__ {int addr; int cur_val; int min_val; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (char*,int,char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int const*) ;

__attribute__((used)) static int FUNC_4 (ut64 VAR_1, const ut8 * VAR_2, char *VAR_3, int VAR_4 ) {
 int VAR_5 = 4;
 ut32 VAR_6 = (int)(FUNC_0 (VAR_2, 0)) + VAR_0.addr;
 int VAR_7 = VAR_0.cur_val + VAR_0.min_val;
 FUNC_1 (VAR_3, VAR_4, "case %d: goto 0x%04x", VAR_7, VAR_6);
 FUNC_3 (VAR_1, VAR_2);
 return FUNC_2 (VAR_5);
}
