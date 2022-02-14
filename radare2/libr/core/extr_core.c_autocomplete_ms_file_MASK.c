
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rfs; } ;
struct TYPE_5__ {char** cwd; } ;
typedef int RLineCompletion ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (int *,TYPE_2__*,char const*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static void FUNC_4(RCore* VAR_0, RLineCompletion *VAR_1, const char *VAR_2) {
 FUNC_1 (VAR_2);
 char *VAR_3 = FUNC_3 (VAR_2, '>');
 char *VAR_4 = (VAR_0->rfs && *(VAR_0->rfs->cwd)) ? *(VAR_0->rfs->cwd): "/";
 if (VAR_3) {
  VAR_2 = FUNC_2 (VAR_3 + 1);
 }
 if (VAR_2 && !*VAR_2) {
  FUNC_0 (VAR_1, VAR_0, VAR_2, VAR_4);
 } else {
  FUNC_0 (VAR_1, VAR_0, VAR_2, VAR_2);
 }
}
