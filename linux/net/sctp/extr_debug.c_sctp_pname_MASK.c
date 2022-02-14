
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sctp_subtype {size_t primitive; } ;


 size_t VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_0(const union sctp_subtype VAR_2)
{
 if (VAR_2.primitive <= VAR_0)
  return VAR_1[VAR_2.primitive];
 return "unknown_primitive";
}
