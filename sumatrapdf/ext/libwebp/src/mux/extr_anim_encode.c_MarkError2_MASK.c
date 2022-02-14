
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_str_; } ;
typedef TYPE_1__ WebPAnimEncoder ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(WebPAnimEncoder* const VAR_1,
                       const char* VAR_2, int VAR_3) {
  if (FUNC_1(VAR_1->error_str_, VAR_0, "%s: %d.", VAR_2,
               VAR_3) < 0) {
    FUNC_0(0);
  }
}
