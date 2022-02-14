
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long long ut64 ;
struct TYPE_5__ {int ht_name; } ;
struct TYPE_4__ {long long offset; scalar_t__ alias; } ;
typedef int RNum ;
typedef TYPE_1__ RFlagItem ;
typedef TYPE_2__ RFlag ;


 TYPE_1__* FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static ut64 FUNC_1(RNum *VAR_0, const char *VAR_1, int *VAR_2) {
 RFlag *VAR_3 = (RFlag *)VAR_0;
 if (VAR_2) {
  *VAR_2 = 0;
 }
 RFlagItem *VAR_4 = FUNC_0 (VAR_3->ht_name, VAR_1, ((void*)0));
 if (VAR_4) {

  if (VAR_4->alias) {
   return 0LL;
  }
  if (VAR_2) {
   *VAR_2 = 1;
  }
  return VAR_4->offset;
 }
 return 0LL;
}
