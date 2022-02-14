
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct inet_diag_markcond {int mask; int mark; } ;
struct inet_diag_hostcond {int port; int prefix_len; int addr; int family; } ;
struct inet_diag_entry {int sport; int dport; int userlocks; int mark; int ifindex; int family; int * daddr; int * saddr; } ;
struct inet_diag_bc_op {int code; int no; scalar_t__ yes; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int ,int ) ;
 int const FUNC_1 (int) ;
 void* FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_4(const struct nlattr *VAR_4,
       const struct inet_diag_entry *VAR_5)
{
 const void *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = FUNC_3(VAR_4);

 while (VAR_7 > 0) {
  int VAR_8 = 1;
  const struct inet_diag_bc_op *VAR_9 = VAR_6;

  switch (VAR_9->code) {
  case 132:
   break;
  case 134:
   VAR_8 = 0;
   break;
  case 130:
   VAR_8 = VAR_5->sport == VAR_9[1].no;
   break;
  case 129:
   VAR_8 = VAR_5->sport >= VAR_9[1].no;
   break;
  case 128:
   VAR_8 = VAR_5->sport <= VAR_9[1].no;
   break;
  case 137:
   VAR_8 = VAR_5->dport == VAR_9[1].no;
   break;
  case 136:
   VAR_8 = VAR_5->dport >= VAR_9[1].no;
   break;
  case 135:
   VAR_8 = VAR_5->dport <= VAR_9[1].no;
   break;
  case 140:
   VAR_8 = !(VAR_5->userlocks & VAR_3);
   break;
  case 131:
  case 138: {
   const struct inet_diag_hostcond *VAR_10;
   const __be32 *VAR_11;

   VAR_10 = (const struct inet_diag_hostcond *)(VAR_9 + 1);
   if (VAR_10->port != -1 &&
       VAR_10->port != (VAR_9->code == 131 ?
          VAR_5->sport : VAR_5->dport)) {
    VAR_8 = 0;
    break;
   }

   if (VAR_9->code == 131)
    VAR_11 = VAR_5->saddr;
   else
    VAR_11 = VAR_5->daddr;

   if (VAR_10->family != VAR_2 &&
       VAR_10->family != VAR_5->family) {
    if (VAR_5->family == VAR_1 &&
        VAR_10->family == VAR_0) {
     if (VAR_11[0] == 0 && VAR_11[1] == 0 &&
         VAR_11[2] == FUNC_1(0xffff) &&
         FUNC_0(VAR_11 + 3,
           VAR_10->addr,
           VAR_10->prefix_len))
      break;
    }
    VAR_8 = 0;
    break;
   }

   if (VAR_10->prefix_len == 0)
    break;
   if (FUNC_0(VAR_11, VAR_10->addr,
         VAR_10->prefix_len))
    break;
   VAR_8 = 0;
   break;
  }
  case 139: {
   u32 VAR_12;

   VAR_12 = *((const u32 *)(VAR_9 + 1));
   if (VAR_12 != VAR_5->ifindex)
    VAR_8 = 0;
   break;
  }
  case 133: {
   struct inet_diag_markcond *VAR_13;

   VAR_13 = (struct inet_diag_markcond *)(VAR_9 + 1);
   if ((VAR_5->mark & VAR_13->mask) != VAR_13->mark)
    VAR_8 = 0;
   break;
  }
  }

  if (VAR_8) {
   VAR_7 -= VAR_9->yes;
   VAR_6 += VAR_9->yes;
  } else {
   VAR_7 -= VAR_9->no;
   VAR_6 += VAR_9->no;
  }
 }
 return VAR_7 == 0;
}
