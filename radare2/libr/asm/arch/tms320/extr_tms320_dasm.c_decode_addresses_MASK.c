
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,char*,int) ;

void FUNC_5(tms320_dasm_t * VAR_9)
{


 if (FUNC_2 (VAR_9, VAR_1)) {
  FUNC_4 (VAR_9->syntax, "L7", "0x%02X", FUNC_3 (VAR_9, VAR_1));
 }
 if (FUNC_2 (VAR_9, VAR_2)) {
  FUNC_4 (VAR_9->syntax, "L8", "0x%02X", FUNC_3 (VAR_9, VAR_2));
 }
 if (FUNC_2 (VAR_9, VAR_0)) {
  FUNC_4 (VAR_9->syntax, "L16", "0x%04X", FUNC_0 (FUNC_3 (VAR_9, VAR_0)));
 }



 if (FUNC_2 (VAR_9, VAR_5) && FUNC_2 (VAR_9, VAR_7)) {
  FUNC_4 (VAR_9->syntax, "l4", "0x%01X", (FUNC_3 (VAR_9, VAR_7) << 1) | FUNC_3 (VAR_9, VAR_5));
 }



 if (FUNC_2 (VAR_9, VAR_8)) {
  FUNC_4 (VAR_9->syntax, "pmad", "0x%02X", FUNC_3 (VAR_9, VAR_8));
 }
 if (FUNC_2 (VAR_9, VAR_6)) {
  FUNC_4 (VAR_9->syntax, "pmad", "0x%04X", FUNC_0 (FUNC_3 (VAR_9, VAR_6)));
 }



 if (FUNC_2 (VAR_9, VAR_4)) {
  FUNC_4 (VAR_9->syntax, "P8", "0x%02X", FUNC_3 (VAR_9, VAR_4));
 }
 if (FUNC_2 (VAR_9, VAR_3)) {
  FUNC_4 (VAR_9->syntax, "P24", "0x%06X", FUNC_1 (FUNC_3 (VAR_9, VAR_3)));
 }
}
