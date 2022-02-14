
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int mode; int digest_algo; int iter; int * salt; } ;
typedef TYPE_1__ PGP_S2K ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2(PGP_S2K *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 uint8 VAR_8;

 VAR_3->mode = VAR_4;
 VAR_3->digest_algo = VAR_5;

 switch (VAR_3->mode)
 {
  case 128:
   break;
  case 129:
   if (!FUNC_1(VAR_3->salt, VAR_0))
    return VAR_1;
   break;
  case 130:
   if (!FUNC_1(VAR_3->salt, VAR_0))
    return VAR_1;
   if (!FUNC_1(&VAR_8, 1))
    return VAR_1;
   VAR_3->iter = FUNC_0(VAR_8, VAR_6);
   break;
  default:
   VAR_7 = VAR_2;
 }
 return VAR_7;
}
