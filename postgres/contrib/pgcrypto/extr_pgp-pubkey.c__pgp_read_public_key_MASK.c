
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int y; int g; int p; } ;
struct TYPE_11__ {int e; int n; } ;
struct TYPE_10__ {int y; int g; int q; int p; } ;
struct TYPE_13__ {TYPE_3__ elg; TYPE_2__ rsa; TYPE_1__ dsa; } ;
struct TYPE_14__ {int ver; int algo; int can_encrypt; TYPE_4__ pub; int time; } ;
typedef int PullFilter ;
typedef TYPE_5__ PGP_PubKey ;


 int FUNC_0 (int *,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__**) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (char*,int const) ;

int
FUNC_7(PullFilter *VAR_2, PGP_PubKey **VAR_3)
{
 int VAR_4;
 PGP_PubKey *VAR_5;

 VAR_4 = FUNC_2(&VAR_5);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_0(VAR_2, VAR_5->ver);
 if (VAR_5->ver != 4)
 {
  VAR_4 = VAR_0;
  goto out;
 }


 VAR_4 = FUNC_5(VAR_2, 4, VAR_5->time);
 if (VAR_4 < 0)
  goto out;


 FUNC_0(VAR_2, VAR_5->algo);

 switch (VAR_5->algo)
 {
  case 132:
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.dsa.p);
   if (VAR_4 < 0)
    break;
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.dsa.q);
   if (VAR_4 < 0)
    break;
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.dsa.g);
   if (VAR_4 < 0)
    break;
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.dsa.y);
   if (VAR_4 < 0)
    break;

   VAR_4 = FUNC_1(VAR_5);
   break;

  case 128:
  case 130:
  case 129:
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.rsa.n);
   if (VAR_4 < 0)
    break;
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.rsa.e);
   if (VAR_4 < 0)
    break;

   VAR_4 = FUNC_1(VAR_5);

   if (VAR_5->algo != 128)
    VAR_5->can_encrypt = 1;
   break;

  case 131:
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.elg.p);
   if (VAR_4 < 0)
    break;
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.elg.g);
   if (VAR_4 < 0)
    break;
   VAR_4 = FUNC_4(VAR_2, &VAR_5->pub.elg.y);
   if (VAR_4 < 0)
    break;

   VAR_4 = FUNC_1(VAR_5);

   VAR_5->can_encrypt = 1;
   break;

  default:
   FUNC_6("unknown public algo: %d", VAR_5->algo);
   VAR_4 = VAR_1;
 }

out:
 if (VAR_4 < 0)
  FUNC_3(VAR_5);
 else
  *VAR_3 = VAR_5;

 return VAR_4;
}
