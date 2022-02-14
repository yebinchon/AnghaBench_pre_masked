
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {int reg; } ;
typedef int Sdb ;
typedef TYPE_1__ RAnal ;


 int VAR_0 ;
 int FUNC_0 (int,char const*) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_5(RAnal *VAR_1, Sdb *VAR_2, bool VAR_3, int VAR_4, int VAR_5, const char *VAR_6) {
 if (VAR_3) {
  const char *VAR_7 = FUNC_1 (VAR_1->reg, VAR_0);
  ut64 VAR_8 = FUNC_2 (VAR_1->reg, VAR_7);
  ut64 VAR_9 = FUNC_4 (VAR_2, FUNC_3 ("%d.mem.write", VAR_4), 0);
  return (VAR_9 == VAR_8 + VAR_5);
 }
 return FUNC_0 (VAR_4, VAR_6);
}
