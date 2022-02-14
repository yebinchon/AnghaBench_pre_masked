
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip6; int ip; } ;
typedef int u16 ;
struct nf_conn {int dummy; } ;
typedef enum nf_ct_ftp_type { ____Placeholder_nf_ct_ftp_type } nf_ct_ftp_type ;


 int VAR_0 ;




 int FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (char*,size_t,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct nf_conn *VAR_1, enum nf_ct_ftp_type VAR_2,
         char *VAR_3, size_t VAR_4,
         union nf_inet_addr *VAR_5, u16 VAR_6)
{
 switch (VAR_2) {
 case 128:
 case 129:
  return FUNC_1(VAR_3, VAR_4, "%u,%u,%u,%u,%u,%u",
    ((unsigned char *)&VAR_5->ip)[0],
    ((unsigned char *)&VAR_5->ip)[1],
    ((unsigned char *)&VAR_5->ip)[2],
    ((unsigned char *)&VAR_5->ip)[3],
    VAR_6 >> 8,
    VAR_6 & 0xFF);
 case 131:
  if (FUNC_0(VAR_1) == VAR_0)
   return FUNC_1(VAR_3, VAR_4, "|1|%pI4|%u|",
     VAR_5->ip, VAR_6);
  else
   return FUNC_1(VAR_3, VAR_4, "|2|%pI6|%u|",
     VAR_5->ip6, VAR_6);
 case 130:
  return FUNC_1(VAR_3, VAR_4, "|||%u|", VAR_6);
 }

 return 0;
}
