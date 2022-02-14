
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flagbar_t {int cols; TYPE_1__* core; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int ,int ,struct flagbar_t*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_1, const char *VAR_2) {
 int VAR_3 = FUNC_0 (((void*)0));
 VAR_3 -= 80;
 if (VAR_3 < 0) {
  VAR_3 += 80;
 }

 struct flagbar_t VAR_4 = { .core = VAR_1, .cols = VAR_3 };
 FUNC_1 (VAR_1->flags, VAR_2, FUNC_2 (VAR_1->flags), VAR_0, &VAR_4);
}
