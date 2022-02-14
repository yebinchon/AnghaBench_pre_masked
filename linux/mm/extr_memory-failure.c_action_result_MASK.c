
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mf_result { ____Placeholder_mf_result } mf_result ;
typedef enum mf_action_page_type { ____Placeholder_mf_action_page_type } mf_action_page_type ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long,int,int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2, enum mf_action_page_type VAR_3,
     enum mf_result VAR_4)
{
 FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_0("Memory failure: %#lx: recovery action for %s: %s\n",
  VAR_2, VAR_1[VAR_3], VAR_0[VAR_4]);
}
