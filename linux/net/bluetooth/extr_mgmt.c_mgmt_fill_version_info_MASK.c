
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgmt_rp_read_version {int revision; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(void *VAR_2)
{
 struct mgmt_rp_read_version *VAR_3 = VAR_2;

 VAR_3->version = VAR_1;
 VAR_3->revision = FUNC_0(VAR_0);
}
