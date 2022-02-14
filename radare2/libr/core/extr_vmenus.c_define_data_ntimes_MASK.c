
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {int anal; scalar_t__ blocksize; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,char*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (RCore *VAR_1, ut64 VAR_2, int VAR_3, int VAR_4) {
 int VAR_5 = 0;
 FUNC_1 (VAR_1->anal, VAR_2, VAR_2 + VAR_1->blocksize);
 if (VAR_3 < 0) {
  VAR_3 = 1;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_2 += VAR_4) {
  FUNC_0 (VAR_1->anal, VAR_0, VAR_2, VAR_2 + VAR_4, "");
 }
}
