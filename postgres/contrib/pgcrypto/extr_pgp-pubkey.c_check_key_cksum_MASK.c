
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int uint8 ;
struct TYPE_9__ {int x; } ;
struct TYPE_8__ {int u; int q; int p; int d; } ;
struct TYPE_7__ {int x; } ;
struct TYPE_10__ {TYPE_3__ dsa; TYPE_2__ rsa; TYPE_1__ elg; } ;
struct TYPE_11__ {int algo; TYPE_4__ sec; } ;
typedef int PullFilter ;
typedef TYPE_5__ PGP_PubKey ;







 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *,int,unsigned int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(PullFilter *VAR_1, PGP_PubKey *VAR_2)
{
 int VAR_3;
 unsigned VAR_4,
    VAR_5 = 0;
 uint8 VAR_6[2];

 VAR_3 = FUNC_1(VAR_1, 2, VAR_6);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = ((unsigned) VAR_6[0] << 8) + VAR_6[1];
 switch (VAR_2->algo)
 {
  case 131:
   VAR_5 = FUNC_0(0, VAR_2->sec.elg.x);
   break;
  case 128:
  case 130:
  case 129:
   VAR_5 = FUNC_0(0, VAR_2->sec.rsa.d);
   VAR_5 = FUNC_0(VAR_5, VAR_2->sec.rsa.p);
   VAR_5 = FUNC_0(VAR_5, VAR_2->sec.rsa.q);
   VAR_5 = FUNC_0(VAR_5, VAR_2->sec.rsa.u);
   break;
  case 132:
   VAR_5 = FUNC_0(0, VAR_2->sec.dsa.x);
   break;
 }
 if (VAR_5 != VAR_4)
 {
  FUNC_2("key cksum check failed");
  return VAR_0;
 }
 return 0;
}
