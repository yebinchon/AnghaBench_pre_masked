
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct net {int user_ns; } ;
struct iphdr {int dummy; } ;
struct ip_options {unsigned char* __data; int optlen; int is_changed; int srr; unsigned char faddr; int is_strictroute; int rr; int rr_needaddr; int ts; int ts_needtime; int ts_needaddr; int router_alert; int cipso; } ;
typedef unsigned char __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,unsigned char**) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (struct net*,unsigned char) ;
 unsigned char FUNC_3 () ;
 int * FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (int ,int ) ;
 struct rtable* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (unsigned char*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct net *VAR_4,
    struct ip_options *VAR_5, struct sk_buff *VAR_6,
    __be32 *VAR_7)
{
 __be32 VAR_8 = FUNC_1(VAR_2);
 unsigned char *VAR_9 = ((void*)0);
 struct rtable *VAR_10 = ((void*)0);
 unsigned char *VAR_11;
 unsigned char *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_6) {
  VAR_10 = FUNC_8(VAR_6);
  VAR_11 = (unsigned char *)&(FUNC_4(VAR_6)[1]);
 } else
  VAR_11 = VAR_5->__data;
 VAR_12 = VAR_11 - sizeof(struct iphdr);

 for (VAR_14 = VAR_5->optlen; VAR_14 > 0; ) {
  switch (*VAR_11) {
  case 139:
   for (VAR_11++, VAR_14--; VAR_14 > 0; VAR_11++, VAR_14--) {
    if (*VAR_11 != 139) {
     *VAR_11 = 139;
     VAR_5->is_changed = 1;
    }
   }
   goto eol;
  case 137:
   VAR_14--;
   VAR_11++;
   continue;
  }
  if (FUNC_10(VAR_14 < 2)) {
   VAR_9 = VAR_11;
   goto error;
  }
  VAR_13 = VAR_11[1];
  if (VAR_13 < 2 || VAR_13 > VAR_14) {
   VAR_9 = VAR_11;
   goto error;
  }
  switch (*VAR_11) {
  case 132:
  case 138:
   if (VAR_13 < 3) {
    VAR_9 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] < 4) {
    VAR_9 = VAR_11 + 2;
    goto error;
   }

   if (VAR_5->srr) {
    VAR_9 = VAR_11;
    goto error;
   }
   if (!VAR_6) {
    if (VAR_11[2] != 4 || VAR_13 < 7 || ((VAR_13-3) & 3)) {
     VAR_9 = VAR_11 + 1;
     goto error;
    }
    FUNC_5(&VAR_5->faddr, &VAR_11[3], 4);
    if (VAR_13 > 7)
     FUNC_6(&VAR_11[3], &VAR_11[7], VAR_13-7);
   }
   VAR_5->is_strictroute = (VAR_11[0] == 132);
   VAR_5->srr = VAR_11 - VAR_12;
   break;
  case 135:
   if (VAR_5->rr) {
    VAR_9 = VAR_11;
    goto error;
   }
   if (VAR_13 < 3) {
    VAR_9 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] < 4) {
    VAR_9 = VAR_11 + 2;
    goto error;
   }
   if (VAR_11[2] <= VAR_13) {
    if (VAR_11[2]+3 > VAR_13) {
     VAR_9 = VAR_11 + 2;
     goto error;
    }
    if (VAR_10) {
     FUNC_9(&VAR_8, VAR_6);
     FUNC_5(&VAR_11[VAR_11[2]-1], &VAR_8, 4);
     VAR_5->is_changed = 1;
    }
    VAR_11[2] += 4;
    VAR_5->rr_needaddr = 1;
   }
   VAR_5->rr = VAR_11 - VAR_12;
   break;
  case 131:
   if (VAR_5->ts) {
    VAR_9 = VAR_11;
    goto error;
   }
   if (VAR_13 < 4) {
    VAR_9 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] < 5) {
    VAR_9 = VAR_11 + 2;
    goto error;
   }
   if (VAR_11[2] <= VAR_13) {
    unsigned char *VAR_15 = ((void*)0);
    if (VAR_11[2]+3 > VAR_13) {
     VAR_9 = VAR_11 + 2;
     goto error;
    }
    switch (VAR_11[3]&0xF) {
    case 128:
     if (VAR_6)
      VAR_15 = &VAR_11[VAR_11[2]-1];
     VAR_5->ts_needtime = 1;
     VAR_11[2] += 4;
     break;
    case 129:
     if (VAR_11[2]+7 > VAR_13) {
      VAR_9 = VAR_11 + 2;
      goto error;
     }
     if (VAR_10) {
      FUNC_9(&VAR_8, VAR_6);
      FUNC_5(&VAR_11[VAR_11[2]-1], &VAR_8, 4);
      VAR_15 = &VAR_11[VAR_11[2]+3];
     }
     VAR_5->ts_needaddr = 1;
     VAR_5->ts_needtime = 1;
     VAR_11[2] += 8;
     break;
    case 130:
     if (VAR_11[2]+7 > VAR_13) {
      VAR_9 = VAR_11 + 2;
      goto error;
     }
     {
      __be32 VAR_16;
      FUNC_5(&VAR_16, &VAR_11[VAR_11[2]-1], 4);
      if (FUNC_2(VAR_4, VAR_16) == VAR_3)
       break;
      if (VAR_6)
       VAR_15 = &VAR_11[VAR_11[2]+3];
     }
     VAR_5->ts_needtime = 1;
     VAR_11[2] += 8;
     break;
    default:
     if (!VAR_6 && !FUNC_7(VAR_4->user_ns, VAR_0)) {
      VAR_9 = VAR_11 + 3;
      goto error;
     }
     break;
    }
    if (VAR_15) {
     __be32 VAR_17;

     VAR_17 = FUNC_3();
     FUNC_5(VAR_15, &VAR_17, 4);
     VAR_5->is_changed = 1;
    }
   } else if ((VAR_11[3]&0xF) != 130) {
    unsigned int VAR_18 = VAR_11[3]>>4;
    if (VAR_18 == 15) {
     VAR_9 = VAR_11 + 3;
     goto error;
    }
    if (VAR_6) {
     VAR_11[3] = (VAR_11[3]&0xF)|((VAR_18+1)<<4);
     VAR_5->is_changed = 1;
    }
   }
   VAR_5->ts = VAR_11 - VAR_12;
   break;
  case 136:
   if (VAR_13 < 4) {
    VAR_9 = VAR_11 + 1;
    goto error;
   }
   if (VAR_11[2] == 0 && VAR_11[3] == 0)
    VAR_5->router_alert = VAR_11 - VAR_12;
   break;
  case 140:
   if ((!VAR_6 && !FUNC_7(VAR_4->user_ns, VAR_0)) || VAR_5->cipso) {
    VAR_9 = VAR_11;
    goto error;
   }
   VAR_5->cipso = VAR_11 - VAR_12;
   if (FUNC_0(VAR_6, &VAR_11)) {
    VAR_9 = VAR_11;
    goto error;
   }
   break;
  case 134:
  case 133:
  default:
   if (!VAR_6 && !FUNC_7(VAR_4->user_ns, VAR_0)) {
    VAR_9 = VAR_11;
    goto error;
   }
   break;
  }
  VAR_14 -= VAR_13;
  VAR_11 += VAR_13;
 }

eol:
 if (!VAR_9)
  return 0;

error:
 if (VAR_7)
  *VAR_7 = FUNC_1((VAR_9-VAR_12)<<24);
 return -VAR_1;
}
