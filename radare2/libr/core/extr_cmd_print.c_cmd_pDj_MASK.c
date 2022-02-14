
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int offset; int io; int num; } ;
typedef TYPE_1__ RCore ;
typedef int PJ ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int *,int,int ,int *) ;
 int FUNC_10 (int ,int ,int *,int) ;
 int FUNC_11 (int ,char const*) ;

__attribute__((used)) static void FUNC_12(RCore *VAR_0, const char *VAR_1) {
 int VAR_2 = FUNC_11 (VAR_0->num, VAR_1);
 if (VAR_2 < 0) {
  VAR_2 = -VAR_2;
 }
 PJ *VAR_3 = FUNC_6 ();
 if (!VAR_3) {
  return;
 }
 FUNC_3 (VAR_3);
 ut8 *VAR_4 = FUNC_2 (VAR_2);
 if (VAR_4) {
  FUNC_10 (VAR_0->io, VAR_0->offset, VAR_4, VAR_2);
  FUNC_9 (VAR_0, VAR_0->offset, VAR_4, VAR_2, 0, VAR_3);
  FUNC_1 (VAR_4);
 } else {
  FUNC_0 ("cannot allocate %d byte(s)\n", VAR_2);
 }
 FUNC_4 (VAR_3);
 FUNC_8 ("%s", FUNC_7 (VAR_3));
 FUNC_5 (VAR_3);
}
