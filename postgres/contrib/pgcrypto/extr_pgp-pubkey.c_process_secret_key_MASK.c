
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_16__ {int x; } ;
struct TYPE_15__ {int x; } ;
struct TYPE_14__ {int u; int q; int p; int d; } ;
struct TYPE_17__ {TYPE_3__ dsa; TYPE_2__ elg; TYPE_1__ rsa; } ;
struct TYPE_19__ {int algo; TYPE_4__ sec; } ;
struct TYPE_18__ {int key_len; int key; } ;
typedef int PullFilter ;
typedef TYPE_5__ PGP_S2K ;
typedef TYPE_6__ PGP_PubKey ;
typedef int PGP_CFB ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_6__**) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (int *,TYPE_6__*) ;
 int FUNC_4 (int **,int,int ,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_5__*,int,int const*,int) ;
 int FUNC_11 (int *,TYPE_5__*) ;
 int FUNC_12 (int **,int *,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int,int *) ;
 int FUNC_15 (char*,...) ;

__attribute__((used)) static int
FUNC_16(PullFilter *VAR_7, PGP_PubKey **VAR_8,
       const uint8 *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 uint8 VAR_15[512];
 PullFilter *VAR_16 = ((void*)0),
      *VAR_17;
 PGP_CFB *VAR_18 = ((void*)0);
 PGP_S2K VAR_19;
 PGP_PubKey *VAR_20;


 VAR_11 = FUNC_1(VAR_7, &VAR_20);
 if (VAR_11 < 0)
  return VAR_11;




 FUNC_0(VAR_7, VAR_12);
 if (VAR_12 == VAR_2 || VAR_12 == VAR_0)
 {
  if (VAR_9 == ((void*)0))
   return VAR_4;
  FUNC_0(VAR_7, VAR_13);
  VAR_11 = FUNC_11(VAR_7, &VAR_19);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_10(&VAR_19, VAR_13, VAR_9, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_14 = FUNC_7(VAR_13);
  if (VAR_14 == 0)
  {
   FUNC_15("unknown cipher algo=%d", VAR_13);
   return VAR_5;
  }
  VAR_11 = FUNC_14(VAR_7, VAR_14, VAR_15);
  if (VAR_11 < 0)
   return VAR_11;




  VAR_11 = FUNC_4(&VAR_18, VAR_13, VAR_19.key, VAR_19.key_len, 0, VAR_15);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 = FUNC_12(&VAR_16, &VAR_6, VAR_18, VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_17 = VAR_16;
 }
 else if (VAR_12 == VAR_1)
 {
  VAR_17 = VAR_7;
 }
 else
 {
  FUNC_15("unknown hide type");
  return VAR_3;
 }


 switch (VAR_20->algo)
 {
  case 128:
  case 130:
  case 129:
   VAR_11 = FUNC_9(VAR_17, &VAR_20->sec.rsa.d);
   if (VAR_11 < 0)
    break;
   VAR_11 = FUNC_9(VAR_17, &VAR_20->sec.rsa.p);
   if (VAR_11 < 0)
    break;
   VAR_11 = FUNC_9(VAR_17, &VAR_20->sec.rsa.q);
   if (VAR_11 < 0)
    break;
   VAR_11 = FUNC_9(VAR_17, &VAR_20->sec.rsa.u);
   if (VAR_11 < 0)
    break;
   break;
  case 131:
   VAR_11 = FUNC_9(VAR_17, &VAR_20->sec.elg.x);
   break;
  case 132:
   VAR_11 = FUNC_9(VAR_17, &VAR_20->sec.dsa.x);
   break;
  default:
   FUNC_15("unknown public algo: %d", VAR_20->algo);
   VAR_11 = VAR_3;
 }

 if (VAR_11 >= 0)
 {
  if (VAR_12 == VAR_2)
   VAR_11 = FUNC_3(VAR_17, VAR_20);
  else
   VAR_11 = FUNC_2(VAR_17, VAR_20);
 }
 if (VAR_11 >= 0)
  VAR_11 = FUNC_6(VAR_17);

 if (VAR_16)
  FUNC_13(VAR_16);
 if (VAR_18)
  FUNC_5(VAR_18);

 if (VAR_11 < 0)
  FUNC_8(VAR_20);
 else
  *VAR_8 = VAR_20;

 return VAR_11;
}
