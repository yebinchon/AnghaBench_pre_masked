
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sctp_subtype {scalar_t__ timeout; } ;


 scalar_t__ FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 char const** VAR_1 ;

const char *FUNC_2(const union sctp_subtype VAR_2)
{
 FUNC_1(VAR_0 + 1 != FUNC_0(VAR_1));

 if (VAR_2.timeout < FUNC_0(VAR_1))
  return VAR_1[VAR_2.timeout];
 return "unknown_timer";
}
