
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int blocksize; int offset; int num; } ;
typedef TYPE_1__ RCore ;
typedef int PJ ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int *,int ,int,int *) ;
 int FUNC_7 (int ,char const*) ;

__attribute__((used)) static void FUNC_8(RCore *VAR_0, const char *VAR_1, ut8* VAR_2) {
 int VAR_3 = FUNC_7 (VAR_0->num, VAR_1);
 PJ *VAR_4 = FUNC_3 ();
 if (!VAR_4) {
  return;
 }
 FUNC_0 (VAR_4);
 FUNC_6 (VAR_0, VAR_0->offset, VAR_2, VAR_0->blocksize, VAR_3, VAR_4);
 FUNC_1 (VAR_4);
 FUNC_5 ("%s\n", FUNC_4 (VAR_4));
 FUNC_2 (VAR_4);
}
