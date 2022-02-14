
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_3__ {scalar_t__ n; } ;
typedef TYPE_1__ LsmString ;


 int FUNC_0 (TYPE_1__*,char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, i64 VAR_2){
  LsmString *VAR_3 = (LsmString *)VAR_0;
  FUNC_0(VAR_3, "%s{%d %lld}", (VAR_3->n?" ":""), VAR_1, VAR_2);
  return 0;
}
