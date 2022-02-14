
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int ref_count; int host_bigendian; } ;


 struct tep_handle* FUNC_0 (int,int) ;
 int FUNC_1 () ;

struct tep_handle *FUNC_2(void)
{
 struct tep_handle *VAR_0 = FUNC_0(1, sizeof(*VAR_0));

 if (VAR_0) {
  VAR_0->ref_count = 1;
  VAR_0->host_bigendian = FUNC_1();
 }

 return VAR_0;
}
