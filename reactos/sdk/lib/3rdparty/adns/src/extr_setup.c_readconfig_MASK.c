
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; } ;
typedef TYPE_1__ getline_ctx ;
typedef int adns_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int ,char*,char const*) ;
 int FUNC_1 (int ,int,int ,char*,char const*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char const*,int ,TYPE_1__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(adns_state VAR_3, const char *VAR_4, int VAR_5) {
  getline_ctx VAR_6;

  VAR_6.file= FUNC_3(VAR_4,"r");
  if (!VAR_6.file) {
    if (VAR_1 == VAR_0) {
      if (VAR_5)
 FUNC_0(VAR_3,-1,0,"configuration file `%s' does not exist",VAR_4);
      return;
    }
    FUNC_5(VAR_3,VAR_1);
    FUNC_1(VAR_3,-1,0,"cannot open configuration file `%s': %s",
        VAR_4,FUNC_6(VAR_1));
    return;
  }

  FUNC_4(VAR_3,VAR_4,VAR_2,VAR_6);

  FUNC_2(VAR_6.file);
}
