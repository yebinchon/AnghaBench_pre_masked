
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int parse_mnem_args ;
typedef TYPE_1__* ftable ;
struct TYPE_3__ {int args; int res; scalar_t__ pattern; } ;


 scalar_t__ FUNC_0 (char const*,scalar_t__) ;

__attribute__((used)) static parse_mnem_args FUNC_1(int*VAR_0, char const*VAR_1, ftable const VAR_2) {
 int VAR_3 = 0;
 while (VAR_2[VAR_3].pattern) {
  if (FUNC_0 (VAR_1, VAR_2[VAR_3].pattern)) {
   *VAR_0 = VAR_2[VAR_3].args;
   return VAR_2[VAR_3].res;
  }
  else {
   VAR_3 += 1;
  }
 }
 *VAR_0 = VAR_2[VAR_3].args;
 return VAR_2[VAR_3].res;
}
