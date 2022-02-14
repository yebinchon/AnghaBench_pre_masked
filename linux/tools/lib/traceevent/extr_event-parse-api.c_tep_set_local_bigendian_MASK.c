
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int host_bigendian; } ;
typedef enum tep_endian { ____Placeholder_tep_endian } tep_endian ;



void FUNC_0(struct tep_handle *VAR_0, enum tep_endian VAR_1)
{
 if (VAR_0)
  VAR_0->host_bigendian = VAR_1;
}
