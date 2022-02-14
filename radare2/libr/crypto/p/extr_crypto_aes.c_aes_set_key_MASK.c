
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int key_size; int rounds; int columns; int key; } ;
struct TYPE_4__ {int dir; } ;
typedef TYPE_1__ RCrypto ;


 int FUNC_0 (int ,int const*,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static bool FUNC_1 (RCrypto *VAR_1, const ut8 *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 if (!(VAR_3 == 128 / 8 || VAR_3 == 192 / 8 || VAR_3 == 256 / 8)) {
  return 0;
 }
 VAR_0.key_size = VAR_3;
 VAR_0.rounds = 6 + (int)(VAR_3 / 4);
 VAR_0.columns = (int)(VAR_3 / 4);
 FUNC_0 (VAR_0.key, VAR_2, VAR_3);
 VAR_1->dir = VAR_5;
 return 1;
}
