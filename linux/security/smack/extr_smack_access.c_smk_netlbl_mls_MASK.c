
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lvl; int * cat; } ;
struct TYPE_4__ {TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {TYPE_2__ attr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int,int ) ;

int FUNC_2(int VAR_2, char *VAR_3, struct netlbl_lsm_secattr *VAR_4,
   int VAR_5)
{
 unsigned char *VAR_6;
 unsigned char VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_4->flags |= VAR_1;
 VAR_4->attr.mls.lvl = VAR_2;
 VAR_4->attr.mls.cat = ((void*)0);

 for (VAR_8 = 1, VAR_6 = VAR_3, VAR_10 = 0; VAR_10 < VAR_5; VAR_6++, VAR_10++)
  for (VAR_7 = 0x80; VAR_7 != 0; VAR_7 >>= 1, VAR_8++) {
   if ((VAR_7 & *VAR_6) == 0)
    continue;
   VAR_9 = FUNC_1(&VAR_4->attr.mls.cat,
        VAR_8, VAR_0);
   if (VAR_9 < 0) {
    FUNC_0(VAR_4->attr.mls.cat);
    return VAR_9;
   }
  }

 return 0;
}
