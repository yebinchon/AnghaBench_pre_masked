
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int* p; } ;
typedef TYPE_1__ ulebr ;
typedef int st64 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static st64 FUNC_1(ulebr *VAR_0, ut8 *VAR_1) {
 st64 VAR_2 = 0;
 int VAR_3 = 0;
 ut8 VAR_4 = 0;
 ut8 *VAR_5 = VAR_0->p;
 do {
  if (VAR_5 == VAR_1) {
   FUNC_0 ("malformed sleb128\n");
   break;
  }
  VAR_4 = *VAR_5++;
  VAR_2 |= (((st64)(VAR_4 & 0x7f)) << VAR_3);
  VAR_3 += 7;
  if (VAR_3 > 63) {
   FUNC_0 ("too large sleb128 shift\n");
   return VAR_2;
  }
 } while (VAR_4 & 0x80);

 if ((VAR_4 & 0x40)) {
  VAR_2 |= (-1LL) << VAR_3;
 }
 VAR_0->p = VAR_5;
 return VAR_2;
}
