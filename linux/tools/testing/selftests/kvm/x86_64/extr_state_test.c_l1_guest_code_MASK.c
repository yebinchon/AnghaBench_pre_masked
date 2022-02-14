
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmx_pages {int vmcs_gpa; int shadow_vmcs_gpa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct vmx_pages*) ;
 int FUNC_3 (struct vmx_pages*) ;
 int FUNC_4 (struct vmx_pages*,int ,unsigned long*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int) ;

void FUNC_11(struct vmx_pages *VAR_8)
{

        unsigned long VAR_9[64];

 FUNC_0(VAR_8->vmcs_gpa);
 FUNC_0(FUNC_3(VAR_8));
 FUNC_1(3);
 FUNC_0(FUNC_2(VAR_8));
 FUNC_0(FUNC_7() == VAR_8->vmcs_gpa);

 FUNC_1(4);
 FUNC_0(FUNC_7() == VAR_8->vmcs_gpa);

 FUNC_4(VAR_8, VAR_7,
       &VAR_9[64]);

 FUNC_1(5);
 FUNC_0(FUNC_7() == VAR_8->vmcs_gpa);
 FUNC_0(!FUNC_5());
 FUNC_0(FUNC_7() == VAR_8->vmcs_gpa);
 FUNC_0(FUNC_8(VAR_6) == VAR_0);


 FUNC_0(FUNC_5());

 FUNC_0(!FUNC_9());
 FUNC_0(FUNC_8(VAR_6) == VAR_0);

 FUNC_1(7);
 FUNC_0(FUNC_8(VAR_6) == VAR_0);

 FUNC_0(!FUNC_9());
 FUNC_0(FUNC_8(VAR_6) == VAR_0);

 FUNC_10(VAR_1, FUNC_8(VAR_1) + 3);

 FUNC_10(VAR_4, VAR_3);
 FUNC_10(VAR_5, VAR_8->shadow_vmcs_gpa);

 FUNC_0(!FUNC_6(VAR_8->shadow_vmcs_gpa));
 FUNC_0(FUNC_5());
 FUNC_1(8);
 FUNC_0(FUNC_5());
 FUNC_0(FUNC_9());

 FUNC_10(VAR_1, 0xc0ffee);
 FUNC_1(9);
 FUNC_0(FUNC_8(VAR_1) == 0xc0ffee);

 FUNC_0(!FUNC_6(VAR_8->vmcs_gpa));
 FUNC_0(!FUNC_9());
 FUNC_0(FUNC_8(VAR_6) == VAR_0);

 FUNC_0(!FUNC_6(VAR_8->shadow_vmcs_gpa));
 FUNC_0(FUNC_8(VAR_1) == 0xc0ffffee);
 FUNC_0(FUNC_5());
 FUNC_0(FUNC_9());
 FUNC_1(13);
 FUNC_0(FUNC_8(VAR_1) == 0xc0ffffee);
 FUNC_0(FUNC_5());
 FUNC_0(FUNC_9());
}
