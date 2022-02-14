
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
typedef struct sctp_transport sctp_transport ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sctp_transport* FUNC_2 (struct net*,union sctp_addr const*,union sctp_addr const*) ;
 int FUNC_3 (struct sctp_transport*) ;

int FUNC_4(int (*VAR_1)(struct sctp_transport *, void *),
      struct net *VAR_2,
      const union sctp_addr *VAR_3,
      const union sctp_addr *VAR_4, void *VAR_5)
{
 struct sctp_transport *VAR_6;
 int VAR_7;

 FUNC_0();
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1();
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_1(VAR_6, VAR_5);
 FUNC_3(VAR_6);

 return VAR_7;
}
