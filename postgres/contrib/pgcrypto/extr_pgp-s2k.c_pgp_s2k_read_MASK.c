
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int digest_algo; int iter; int salt; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_S2K ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ) ;

int
FUNC_2(PullFilter *VAR_1, PGP_S2K *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_1, VAR_2->mode);
 FUNC_0(VAR_1, VAR_2->digest_algo);
 switch (VAR_2->mode)
 {
  case 0:
   break;
  case 1:
   VAR_3 = FUNC_1(VAR_1, 8, VAR_2->salt);
   break;
  case 3:
   VAR_3 = FUNC_1(VAR_1, 8, VAR_2->salt);
   if (VAR_3 < 0)
    break;
   FUNC_0(VAR_1, VAR_2->iter);
   break;
  default:
   VAR_3 = VAR_0;
 }
 return VAR_3;
}
