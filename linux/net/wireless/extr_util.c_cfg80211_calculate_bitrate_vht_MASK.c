
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rate_info {int mcs; int bw; int nss; int flags; } ;
 int VAR_0 ;
 int FUNC_0 (int,char*,int,size_t,int) ;

__attribute__((used)) static u32 FUNC_1(struct rate_info *VAR_1)
{
 static const u32 VAR_2[4][10] = {
  { 6500000,
     13000000,
     19500000,
     26000000,
     39000000,
     52000000,
     58500000,
     65000000,
     78000000,

     86500000,
  },
  { 13500000,
     27000000,
     40500000,
     54000000,
     81000000,
    108000000,
    121500000,
    135000000,
    162000000,
    180000000,
  },
  { 29300000,
     58500000,
     87800000,
    117000000,
    175500000,
    234000000,
    263300000,
    292500000,
    351000000,
    390000000,
  },
  { 58500000,
    117000000,
    175500000,
    234000000,
    351000000,
    468000000,
    526500000,
    585000000,
    702000000,
    780000000,
  },
 };
 u32 VAR_3;
 int VAR_4;

 if (VAR_1->mcs > 9)
  goto warn;

 switch (VAR_1->bw) {
 case 132:
  VAR_4 = 3;
  break;
 case 128:
  VAR_4 = 2;
  break;
 case 130:
  VAR_4 = 1;
  break;
 case 129:
 case 133:
 default:
  goto warn;
 case 131:
  VAR_4 = 0;
 }

 VAR_3 = VAR_2[VAR_4][VAR_1->mcs];
 VAR_3 *= VAR_1->nss;

 if (VAR_1->flags & VAR_0)
  VAR_3 = (VAR_3 / 9) * 10;


 return (VAR_3 + 50000) / 100000;
 warn:
 FUNC_0(1, "invalid rate bw=%d, mcs=%d, nss=%d\n",
    VAR_1->bw, VAR_1->mcs, VAR_1->nss);
 return 0;
}
