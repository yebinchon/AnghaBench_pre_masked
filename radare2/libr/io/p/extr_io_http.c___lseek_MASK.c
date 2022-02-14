
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {scalar_t__ off; } ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;


 scalar_t__ FUNC_0 (int *) ;




__attribute__((used)) static ut64 FUNC_1(RIO *VAR_0, RIODesc *VAR_1, ut64 VAR_2, int VAR_3) {
 switch (VAR_3) {
 case 128: return VAR_2;
 case 130: return VAR_0->off + VAR_2;
 case 129: return FUNC_0 (VAR_1);
 }
 return VAR_2;
}
