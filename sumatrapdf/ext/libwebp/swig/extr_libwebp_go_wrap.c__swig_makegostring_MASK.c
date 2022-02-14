
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* p; size_t n; } ;
typedef TYPE_1__ _gostring_ ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static _gostring_ FUNC_2(const char *VAR_0, size_t VAR_1) {
  _gostring_ VAR_2;
  VAR_2.p = (char*)FUNC_0(VAR_1 + 1);
  FUNC_1(VAR_2.p, VAR_0, VAR_1);
  VAR_2.n = VAR_1;
  return VAR_2;
}
