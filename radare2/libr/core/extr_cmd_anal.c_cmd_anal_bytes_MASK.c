
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blocksize; int block; int num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,int ,int,int ,char const) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ,char const*) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0, const char *VAR_1) {
 int VAR_2 = VAR_0->blocksize;
 int VAR_3 = VAR_2;
 if (VAR_1[0]) {
  VAR_2 = (int)FUNC_2 (VAR_0->num, VAR_1 + 1);
  if (VAR_2 > VAR_3) {
   FUNC_1 (VAR_0, VAR_2);
  }
 }
 FUNC_0 (VAR_0, VAR_0->block, VAR_2, 0, VAR_1[0]);
 if (VAR_3 != VAR_0->blocksize) {
  FUNC_1 (VAR_0, VAR_3);
 }
}
