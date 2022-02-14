
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bytes; } ;
struct TYPE_5__ {int own_argv_; char const** argv_; int argc_; TYPE_3__ argv_data_; } ;
typedef TYPE_1__ CommandLineArguments ;


 int FUNC_0 (char const*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int,char const**,TYPE_1__* const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*,char const*) ;

int FUNC_7(int VAR_2, const char* VAR_3[],
                                   CommandLineArguments* const VAR_4) {
  if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0)) return 0;
  FUNC_1(VAR_2, VAR_3, VAR_4);
  if (VAR_2 == 1 && VAR_3[0][0] != '-') {
    char* VAR_5;
    const char VAR_6[] = " \t\r\n\f\v";
    if (!FUNC_0(VAR_3[0], &VAR_4->argv_data_)) {
      return 0;
    }
    VAR_4->own_argv_ = 1;
    VAR_4->argv_ = (const char**)FUNC_2(VAR_0 * sizeof(*VAR_4->argv_));
    if (VAR_4->argv_ == ((void*)0)) return 0;

    VAR_2 = 0;
    for (VAR_5 = FUNC_6((char*)VAR_4->argv_data_.bytes, VAR_6);
         VAR_5 != ((void*)0);
         VAR_5 = FUNC_6(((void*)0), VAR_6)) {
      if (VAR_2 == VAR_0) {
        FUNC_4(VAR_1, "ERROR: Arguments limit %d reached\n", VAR_0);
        return 0;
      }
      FUNC_3(FUNC_5(VAR_5) != 0);
      VAR_4->argv_[VAR_2++] = VAR_5;
    }
    VAR_4->argc_ = VAR_2;
  }
  return 1;
}
