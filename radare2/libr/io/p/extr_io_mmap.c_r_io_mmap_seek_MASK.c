
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {scalar_t__ off; } ;
struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIO ;


 int VAR_0 ;



 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ut64 FUNC_3(RIO *VAR_1, RIOMMapFileObj *VAR_2, ut64 VAR_3, int VAR_4) {
 ut64 VAR_5 = FUNC_2 (VAR_2->buf);
 switch (VAR_4) {
 case 128:
  VAR_5 = (FUNC_1 (VAR_2->buf) < VAR_3)? FUNC_1 (VAR_2->buf): VAR_3;
  FUNC_0 (VAR_2->buf, VAR_1->off = VAR_5, VAR_0);
  return VAR_5;
 case 130:
  VAR_5 = (FUNC_1 (VAR_2->buf) < (VAR_3 + FUNC_2 (VAR_2->buf)))? FUNC_1 (VAR_2->buf): VAR_3 + FUNC_2 (VAR_2->buf);
  FUNC_0 (VAR_2->buf, VAR_1->off = VAR_5, VAR_0);
  return VAR_5;
 case 129:
  VAR_5 = FUNC_1 (VAR_2->buf);
  FUNC_0 (VAR_2->buf, VAR_1->off = VAR_5, VAR_0);
  return VAR_5;
 }
 return VAR_5;
}
