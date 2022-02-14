
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {char const* name; } ;
typedef int RNum ;
typedef int RList ;
typedef TYPE_1__ RFlagItem ;
typedef int RFlag ;


 int * FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int const*) ;

__attribute__((used)) static const char *FUNC_2(RNum *VAR_0, ut64 VAR_1, int *VAR_2) {
 RFlag *VAR_3 = (RFlag*)VAR_0;
 if (VAR_2) {
  *VAR_2 = 0;
 }
 if (VAR_3) {
  const RList *VAR_4 = FUNC_0 (VAR_3, VAR_1);
  RFlagItem *VAR_5 = FUNC_1 (VAR_4);
  if (VAR_5) {
   if (VAR_2) {
    *VAR_2 = 1;
   }
   return VAR_5->name;
  }
 }
 return ((void*)0);
}
