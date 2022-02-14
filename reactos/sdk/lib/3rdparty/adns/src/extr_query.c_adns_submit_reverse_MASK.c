
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int adns_state ;
typedef scalar_t__ adns_rrtype ;
typedef int adns_queryflags ;
typedef int adns_query ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct sockaddr const*,char*,scalar_t__,int ,void*,int *) ;

int FUNC_1(adns_state VAR_3,
   const struct sockaddr *VAR_4,
   adns_rrtype VAR_5,
   adns_queryflags VAR_6,
   void *VAR_7,
   adns_query *VAR_8) {
  if (VAR_5 != VAR_1 && VAR_5 != VAR_2) return VAR_0;
  return FUNC_0(VAR_3,VAR_4,"in-addr.arpa",VAR_5,VAR_6,VAR_7,VAR_8);
}
