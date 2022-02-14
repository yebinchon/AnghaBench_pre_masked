
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_5__ {int key_size; int rounds; int * keyhi; int * keylo; } ;
struct TYPE_4__ {int dir; } ;
typedef TYPE_1__ RCrypto ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int,int *,int *,int*,int*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static bool FUNC_3 (RCrypto *VAR_2, const ut8 *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
 ut32 VAR_7, VAR_8, VAR_9;
 if (VAR_4 != VAR_0) {
  return 0;
 }

 VAR_7 = FUNC_0 (VAR_3);
 VAR_8 = FUNC_0 (VAR_3 + 4);

 VAR_1.key_size = VAR_0;
 VAR_1.rounds = 16;
 VAR_2->dir = VAR_6;

 FUNC_1 (&VAR_7, &VAR_8);

 for (VAR_9 = 0; VAR_9 < 16; ++VAR_9) {

  FUNC_2 (VAR_9, &VAR_1.keylo[VAR_9], &VAR_1.keyhi[VAR_9], &VAR_7, &VAR_8);
 }

 return 1;
}
