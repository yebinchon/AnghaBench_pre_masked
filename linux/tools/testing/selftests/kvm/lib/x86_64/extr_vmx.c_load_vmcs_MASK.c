
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmx_pages {int enlightened_vmcs; int enlightened_vmcs_gpa; int shadow_vmcs_gpa; scalar_t__ shadow_vmcs; int vmcs_gpa; scalar_t__ vmcs; } ;
struct TYPE_2__ {int revision_id; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

bool FUNC_4(struct vmx_pages *VAR_2)
{
 if (!VAR_1) {

  *(uint32_t *)(VAR_2->vmcs) = FUNC_2();
  if (FUNC_1(VAR_2->vmcs_gpa))
   return 0;

  if (FUNC_3(VAR_2->vmcs_gpa))
   return 0;


  *(uint32_t *)(VAR_2->shadow_vmcs) =
   FUNC_2() | 0x80000000ul;
  if (FUNC_1(VAR_2->shadow_vmcs_gpa))
   return 0;
 } else {
  if (FUNC_0(VAR_2->enlightened_vmcs_gpa,
      VAR_2->enlightened_vmcs))
   return 0;
  VAR_0->revision_id = FUNC_2();
 }

 return 1;
}
