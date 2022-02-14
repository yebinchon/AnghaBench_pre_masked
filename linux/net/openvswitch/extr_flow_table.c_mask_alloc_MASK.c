
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_mask {int ref_count; } ;


 int VAR_0 ;
 struct sw_flow_mask* FUNC_0 (int,int ) ;

__attribute__((used)) static struct sw_flow_mask *FUNC_1(void)
{
 struct sw_flow_mask *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (VAR_1)
  VAR_1->ref_count = 1;

 return VAR_1;
}
