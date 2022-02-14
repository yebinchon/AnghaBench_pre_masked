
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int rcmd; } ;
typedef TYPE_1__ RCore ;


 scalar_t__ FUNC_0 (int ,char const*,int) ;
 scalar_t__ FUNC_1 (char const*,int *) ;

__attribute__((used)) static ut8*FUNC_2(RCore *VAR_0, const char *VAR_1) {
 if (*VAR_1 == '$') {
  return (ut8*) FUNC_0 (VAR_0->rcmd, VAR_1, 1);
 }
 return (ut8*)FUNC_1 (VAR_1, ((void*)0));
}
