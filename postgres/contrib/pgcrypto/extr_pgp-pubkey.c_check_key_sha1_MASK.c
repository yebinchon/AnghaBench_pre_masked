
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_9__ {int x; } ;
struct TYPE_8__ {int u; int q; int p; int d; } ;
struct TYPE_7__ {int x; } ;
struct TYPE_10__ {TYPE_3__ dsa; TYPE_2__ rsa; TYPE_1__ elg; } ;
struct TYPE_11__ {int algo; TYPE_4__ sec; } ;
typedef int PullFilter ;
typedef int PX_MD ;
typedef TYPE_5__ PGP_PubKey ;


 int VAR_0 ;





 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_8(PullFilter *VAR_2, PGP_PubKey *VAR_3)
{
 int VAR_4;
 uint8 VAR_5[20];
 uint8 VAR_6[20];
 PX_MD *VAR_7;

 VAR_4 = FUNC_3(VAR_2, 20, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_7);
 if (VAR_4 < 0)
  goto err;
 switch (VAR_3->algo)
 {
  case 131:
   FUNC_2(VAR_7, VAR_3->sec.elg.x);
   break;
  case 128:
  case 130:
  case 129:
   FUNC_2(VAR_7, VAR_3->sec.rsa.d);
   FUNC_2(VAR_7, VAR_3->sec.rsa.p);
   FUNC_2(VAR_7, VAR_3->sec.rsa.q);
   FUNC_2(VAR_7, VAR_3->sec.rsa.u);
   break;
  case 132:
   FUNC_2(VAR_7, VAR_3->sec.dsa.x);
   break;
 }
 FUNC_5(VAR_7, VAR_6);
 FUNC_6(VAR_7);

 if (FUNC_0(VAR_6, VAR_5, 20) != 0)
 {
  FUNC_4("key sha1 check failed");
  VAR_4 = VAR_1;
 }
err:
 FUNC_7(VAR_5, 0, 20);
 FUNC_7(VAR_6, 0, 20);
 return VAR_4;
}
