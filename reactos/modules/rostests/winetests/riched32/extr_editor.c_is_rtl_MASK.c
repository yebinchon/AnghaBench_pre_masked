
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* lsUsb; } ;
typedef int LPSTR ;
typedef TYPE_1__ LOCALESIGNATURE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(void) {
  LOCALESIGNATURE VAR_2;

  return (FUNC_0(VAR_1, VAR_0,
                         (LPSTR) &VAR_2, sizeof(LOCALESIGNATURE)) &&
          (VAR_2.lsUsb[3] & 0x08000000) != 0);
}
