
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef scalar_t__ ut32 ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ RIODesc ;
typedef int RIO ;





 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static ut64 FUNC_3(RIO* VAR_0, RIODesc *VAR_1, ut64 VAR_2, int VAR_3) {
 ut64 VAR_4 = VAR_2;
 if (!VAR_1 || !VAR_1->data) {
  return VAR_2;
 }
 ut32 VAR_5 = FUNC_2 (VAR_1);
 switch (VAR_3) {
 case 128:
  VAR_4 = (VAR_2 <= VAR_5) ? VAR_2 : VAR_5;
  break;
 case 130:
  VAR_4 = (FUNC_0 (VAR_1) + VAR_2 <= VAR_5 ) ? FUNC_0 (VAR_1) + VAR_2 : VAR_5;
  break;
 case 129:
  VAR_4 = FUNC_2 (VAR_1);
  break;
 }
 FUNC_1 (VAR_1, VAR_4);
 return VAR_4;
}
