
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_af {int dummy; } ;
typedef int sa_family_t ;




 struct sctp_af* VAR_0 ;
 struct sctp_af* VAR_1 ;

struct sctp_af *FUNC_0(sa_family_t VAR_2)
{
 switch (VAR_2) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 default:
  return ((void*)0);
 }
}
