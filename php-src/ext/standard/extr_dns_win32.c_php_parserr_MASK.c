
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int zval ;
struct TYPE_27__ {char* val; char* len; } ;
typedef TYPE_6__ zend_string ;
typedef int uint32_t ;
typedef int u_long ;
typedef char u_char ;
struct TYPE_30__ {size_t dwStringCount; int * pStringArray; } ;
struct TYPE_22__ {int S_addr; } ;
struct TYPE_29__ {TYPE_1__ S_un; } ;
struct TYPE_20__ {int wOrder; int wPreference; char* pFlags; char* pService; char* pRegularExpression; char* pReplacement; } ;
struct TYPE_18__ {int wPriority; int wWeight; int wPort; char* pNameTarget; } ;
struct TYPE_26__ {size_t* IP6Dword; } ;
struct TYPE_21__ {TYPE_5__ Ip6Address; } ;
struct TYPE_19__ {char* pNamePrimaryServer; char* pNameAdministrator; int dwSerialNo; int dwRefresh; int dwRetry; int dwExpire; int dwDefaultTtl; } ;
struct TYPE_24__ {char* pNameExchange; } ;
struct TYPE_23__ {int IpAddress; } ;
struct TYPE_25__ {TYPE_12__ Naptr; TYPE_10__ Srv; TYPE_13__ AAAA; TYPE_11__ Soa; TYPE_9__ TXT; TYPE_3__ MX; TYPE_2__ A; } ;
struct TYPE_28__ {int wType; int dwTtl; char* pName; TYPE_4__ Data; scalar_t__ wDataLength; } ;
typedef TYPE_7__* PDNS_RECORD ;
typedef TYPE_8__ IN_ADDR ;
typedef size_t DWORD ;
typedef TYPE_9__ DNS_TXT_DATA ;
typedef TYPE_10__ DNS_SRV_DATA ;
typedef TYPE_11__ DNS_SOA_DATA ;
typedef TYPE_12__ DNS_NAPTR_DATA ;
typedef TYPE_13__ DNS_AAAA_DATA ;





 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,TYPE_6__*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,char*,char*,int ) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *,int ,size_t) ;
 int FUNC_9 (int *) ;
 unsigned short FUNC_10 (int ) ;
 char* FUNC_11 (TYPE_8__) ;
 int FUNC_12 (char*,int ,size_t) ;
 int FUNC_13 (char*,char*,unsigned short) ;
 size_t FUNC_14 (int ) ;
 TYPE_6__* FUNC_15 (size_t,int,int ,int ) ;

__attribute__((used)) static void FUNC_16(PDNS_RECORD VAR_1, int VAR_2, int VAR_3, int VAR_4, zval *VAR_5)
{
 int VAR_6;
 u_long VAR_7;

 VAR_6 = VAR_1->wType;
 VAR_7 = VAR_1->dwTtl;

 FUNC_2(VAR_5);

 if (VAR_2 != VAR_0 && VAR_6 != VAR_2) {
  return;
 }

 if (!VAR_3) {
  return;
 }

 FUNC_9(VAR_5);

 FUNC_5(VAR_5, "host", VAR_1->pName);
 FUNC_5(VAR_5, "class", "IN");
 FUNC_3(VAR_5, "ttl", VAR_7);

 if (VAR_4) {
  FUNC_3(VAR_5, "type", VAR_6);
  FUNC_6(VAR_5, "data", (char*) &VAR_1->Data, (uint32_t) VAR_1->wDataLength);
  return;
 }

 switch (VAR_6) {
  case 139: {
   IN_ADDR VAR_8;
   VAR_8.S_un.S_addr = (VAR_1->Data.A.IpAddress);
   FUNC_5(VAR_5, "type", "A");
   FUNC_5(VAR_5, "ip", FUNC_11(VAR_8));
   break;
  }

  case 134:
   FUNC_5(VAR_5, "type", "MX");
   FUNC_3(VAR_5, "pri", VAR_1->Data.Srv.wPriority);


  case 136:
   if (VAR_6 == 136) {
    FUNC_5(VAR_5, "type", "CNAME");
   }


  case 132:
   if (VAR_6 == 132) {
    FUNC_5(VAR_5, "type", "NS");
   }


  case 131:
   if (VAR_6 == 131) {
    FUNC_5(VAR_5, "type", "PTR");
   }
   FUNC_5(VAR_5, "target", VAR_1->Data.MX.pNameExchange);
   break;


  case 135:
  case 128:
   {
    DWORD VAR_9 = 0;
    DNS_TXT_DATA *VAR_10 = &VAR_1->Data.TXT;
    DWORD VAR_11 = VAR_10->dwStringCount;
    zend_string *VAR_12;
    char *VAR_13;
    size_t VAR_14 = 0;
    zval VAR_15;

    FUNC_5(VAR_5, "type", "TXT");

    FUNC_9(&VAR_15);

    for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
     VAR_14 += FUNC_14(VAR_10->pStringArray[VAR_9]) + 1;
    }

    VAR_12 = FUNC_15(VAR_14, 2, 0, 0);
    VAR_13 = VAR_12->val;
    for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
     size_t VAR_16 = FUNC_14(VAR_10->pStringArray[VAR_9]);
     FUNC_12(VAR_13, VAR_10->pStringArray[VAR_9], VAR_16);
     FUNC_8(&VAR_15, VAR_10->pStringArray[VAR_9], VAR_16);
     VAR_13 += VAR_16;
    }
    VAR_12->len = VAR_13 - VAR_12->val;
    FUNC_4(VAR_5, "txt", VAR_12);
    FUNC_7(VAR_5, "entries", &VAR_15);
   }
   break;

  case 130:
   {
    DNS_SOA_DATA *VAR_17 = &VAR_1->Data.Soa;

    FUNC_5(VAR_5, "type", "SOA");

    FUNC_5(VAR_5, "mname", VAR_17->pNamePrimaryServer);
    FUNC_5(VAR_5, "rname", VAR_17->pNameAdministrator);
    FUNC_3(VAR_5, "serial", VAR_17->dwSerialNo);
    FUNC_3(VAR_5, "refresh", VAR_17->dwRefresh);
    FUNC_3(VAR_5, "retry", VAR_17->dwRetry);
    FUNC_3(VAR_5, "expire", VAR_17->dwExpire);
    FUNC_3(VAR_5, "minimum-ttl", VAR_17->dwDefaultTtl);
   }
   break;

  case 137:
   {
    DNS_AAAA_DATA *VAR_18 = &VAR_1->Data.AAAA;
    char VAR_19[sizeof("AAAA:AAAA:AAAA:AAAA:AAAA:AAAA:AAAA:AAAA")];
    char *VAR_20 = VAR_19;
    int VAR_21;
    unsigned short VAR_22[8];
    int VAR_23 = 0, VAR_24 = 0;

    for (VAR_21 = 0; VAR_21 < 4; ++VAR_21) {
     DWORD VAR_25 = VAR_18->Ip6Address.IP6Dword[VAR_21];
     VAR_22[VAR_21 * 2] = FUNC_10(FUNC_1(VAR_25));
     VAR_22[VAR_21 * 2 + 1] = FUNC_10(FUNC_0(VAR_25));
    }

    for(VAR_21=0; VAR_21 < 8; VAR_21++) {
     if (VAR_22[VAR_21] != 0) {
      if (VAR_20 > (u_char *)VAR_19) {
       VAR_24 = 0;
       VAR_20[0] = ':';
       VAR_20++;
      }
      VAR_20 += FUNC_13((char*)VAR_20,"%x", VAR_22[VAR_21]);
     } else {
      if (!VAR_23) {
       VAR_23 = 1;
       VAR_24 = 1;
       VAR_20[0] = ':';
       VAR_20++;
      } else if (!VAR_24) {
       VAR_20[0] = ':';
       VAR_20++;
       VAR_20[0] = '0';
       VAR_20++;
      }
     }
    }

    if (VAR_23 && VAR_24) {
     VAR_20[0] = ':';
     VAR_20++;
    }
    VAR_20[0] = '\0';

    FUNC_5(VAR_5, "type", "AAAA");
    FUNC_5(VAR_5, "ipv6", VAR_19);
   }
   break;







  case 129:
   {
    DNS_SRV_DATA *VAR_26 = &VAR_1->Data.Srv;

    FUNC_5(VAR_5, "type", "SRV");
    FUNC_3(VAR_5, "pri", VAR_26->wPriority);
    FUNC_3(VAR_5, "weight", VAR_26->wWeight);
    FUNC_3(VAR_5, "port", VAR_26->wPort);
    FUNC_5(VAR_5, "target", VAR_26->pNameTarget);
   }
   break;

  case 133:
   {
    DNS_NAPTR_DATA * VAR_27 = &VAR_1->Data.Naptr;

    FUNC_5(VAR_5, "type", "NAPTR");
    FUNC_3(VAR_5, "order", VAR_27->wOrder);
    FUNC_3(VAR_5, "pref", VAR_27->wPreference);
    FUNC_5(VAR_5, "flags", VAR_27->pFlags);
    FUNC_5(VAR_5, "services", VAR_27->pService);
    FUNC_5(VAR_5, "regex", VAR_27->pRegularExpression);
    FUNC_5(VAR_5, "replacement", VAR_27->pReplacement);
   }
   break;

  default:

   FUNC_2(VAR_5);
   return;
 }

}
