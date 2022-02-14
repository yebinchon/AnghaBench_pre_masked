
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sctp_subtype {size_t chunk; } ;





 size_t VAR_0 ;




 char const** VAR_1 ;

const char *FUNC_0(const union sctp_subtype VAR_2)
{
 if (VAR_2.chunk <= VAR_0)
  return VAR_1[VAR_2.chunk];

 switch (VAR_2.chunk) {
 case 134:
  return "ASCONF";

 case 133:
  return "ASCONF_ACK";

 case 131:
  return "FWD_TSN";

 case 132:
  return "AUTH";

 case 128:
  return "RECONF";

 case 130:
  return "I_DATA";

 case 129:
  return "I_FWD_TSN";

 default:
  break;
 }

 return "unknown chunk";
}
