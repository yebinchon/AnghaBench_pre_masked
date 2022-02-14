
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef long long ut64 ;
struct TYPE_4__ {int _const; int _msgrefs; int _selrefs; int db; } ;
typedef TYPE_1__ RCoreObjc ;


 char* FUNC_0 (long long) ;
 scalar_t__ FUNC_1 (int ,long long) ;
 long long FUNC_2 (TYPE_1__*,long long) ;
 long long FUNC_3 (int ,char const*,int,int *) ;

__attribute__((used)) static ut64 FUNC_4(RCoreObjc *VAR_0, ut64 VAR_1, bool *VAR_2) {
 ut64 VAR_3 = FUNC_2 (VAR_0, VAR_1);
 int VAR_4, VAR_5 = 0;
 ut64 VAR_6 = 0LL;
 const char *VAR_7 = FUNC_0 (VAR_3);

 *VAR_2 = 0;
 for (VAR_4 = 0; ; VAR_4++) {
  ut64 VAR_8 = FUNC_3 (VAR_0->db, VAR_7, VAR_4, ((void*)0));
  if (!VAR_8) {
   break;
  }
  if (FUNC_1 (VAR_0->_selrefs, VAR_8)) {
   *VAR_2 = 0;
   VAR_6 = VAR_8;
  } else if (FUNC_1 (VAR_0->_msgrefs, VAR_8)) {
   *VAR_2 = 1;
   VAR_6 = VAR_8;
  } else if (FUNC_1 (VAR_0->_const, VAR_8)) {
   VAR_5++;
  }
 }
 if (VAR_5 > 1) {
  return 0LL;
 }
 return VAR_6;
}
