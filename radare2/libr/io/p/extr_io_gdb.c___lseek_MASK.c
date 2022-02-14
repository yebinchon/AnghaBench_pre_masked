
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int off; } ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;





 int VAR_0 ;

__attribute__((used)) static ut64 FUNC_0(RIO *VAR_1, RIODesc *VAR_2, ut64 VAR_3, int VAR_4) {
 switch (VAR_4) {
 case 128:
  VAR_1->off = VAR_3;
  break;
 case 130:
  VAR_1->off += VAR_3;
  break;
 case 129:
  VAR_1->off = VAR_0;
 }
 return VAR_1->off;
}
