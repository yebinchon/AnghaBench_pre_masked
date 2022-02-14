
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmx_pages {int vmcs_gpa; scalar_t__ enlightened_vmcs_gpa; int vp_assist; int vp_assist_gpa; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct vmx_pages*) ;
 int FUNC_4 (struct vmx_pages*) ;
 int FUNC_5 (struct vmx_pages*,int ,unsigned long*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;

void FUNC_10(struct vmx_pages *VAR_4)
{

 unsigned long VAR_5[64];

 FUNC_2(VAR_4->vp_assist_gpa, VAR_4->vp_assist);

 FUNC_0(VAR_4->vmcs_gpa);
 FUNC_0(FUNC_4(VAR_4));
 FUNC_1(3);
 FUNC_0(FUNC_3(VAR_4));
 FUNC_0(FUNC_7() == VAR_4->enlightened_vmcs_gpa);

 FUNC_1(4);
 FUNC_0(FUNC_7() == VAR_4->enlightened_vmcs_gpa);

 FUNC_5(VAR_4, VAR_3,
       &VAR_5[64]);

 FUNC_1(5);
 FUNC_0(FUNC_7() == VAR_4->enlightened_vmcs_gpa);
 FUNC_0(!FUNC_6());
 FUNC_0(FUNC_7() == VAR_4->enlightened_vmcs_gpa);
 FUNC_1(8);
 FUNC_0(!FUNC_9());
 FUNC_0(FUNC_8(VAR_2) == VAR_0);
 FUNC_1(9);
}
