
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_kexec_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

unsigned long FUNC_0(void)
{
 if (VAR_1 >= (VAR_0 - sizeof(struct ima_kexec_hdr)))
  return VAR_0;
 else
  return VAR_1 + sizeof(struct ima_kexec_hdr);
}
