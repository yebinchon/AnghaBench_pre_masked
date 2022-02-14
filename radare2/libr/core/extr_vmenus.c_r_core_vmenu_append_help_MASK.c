
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* context; } ;
struct TYPE_4__ {char* args; char* help; char* reset; } ;
struct TYPE_5__ {TYPE_1__ pal; scalar_t__ color_mode; } ;
typedef int RStrBuf ;
typedef TYPE_2__ RConsContext ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int *,char*,char const*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2 (RStrBuf *VAR_0, const char **VAR_1) {
 int VAR_2;
 RConsContext *VAR_3 = FUNC_0 ()->context;
 const char *VAR_4 = VAR_3->color_mode ? VAR_3->pal.args : "",
     *VAR_5 = VAR_3->color_mode ? VAR_3->pal.help : "",
     *VAR_6 = VAR_3->color_mode ? VAR_3->pal.reset : "";

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2 += 2) {
  FUNC_1 (VAR_0, "%s%s %s%s%s",
    VAR_4, VAR_1[VAR_2],
    VAR_5, VAR_1[VAR_2 + 1], VAR_6);
 }
}
