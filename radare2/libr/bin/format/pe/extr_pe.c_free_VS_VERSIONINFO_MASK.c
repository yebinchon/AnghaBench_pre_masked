
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stringFileInfo; int varFileInfo; struct TYPE_4__* Value; struct TYPE_4__* szKey; } ;
typedef TYPE_1__ PE_VS_VERSIONINFO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(PE_VS_VERSIONINFO* VAR_0) {
 if (VAR_0) {
  FUNC_0 (VAR_0->szKey);
  FUNC_0 (VAR_0->Value);
  FUNC_2 (VAR_0->varFileInfo);
  FUNC_1 (VAR_0->stringFileInfo);
  FUNC_0 (VAR_0);
 }
}
