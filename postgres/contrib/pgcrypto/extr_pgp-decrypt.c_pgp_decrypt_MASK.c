
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int disable_mdc; scalar_t__ unexpected_binary; scalar_t__ unsupported_compr; scalar_t__ corrupt_prefix; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;
typedef int MBuf ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int **,int *,int,int,TYPE_1__*) ;
 int FUNC_4 (int *,int*,int*,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;

int
FUNC_10(PGP_Context *VAR_4, MBuf *VAR_5, MBuf *VAR_6)
{
 int VAR_7;
 PullFilter *VAR_8 = ((void*)0);
 PullFilter *VAR_9 = ((void*)0);
 uint8 VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_7 = FUNC_7(&VAR_8, VAR_5);

 while (VAR_7 >= 0)
 {
  VAR_7 = FUNC_4(VAR_8, &VAR_10, &VAR_11, VAR_0);
  if (VAR_7 <= 0)
   break;

  VAR_7 = FUNC_3(&VAR_9, VAR_8, VAR_11, VAR_7, VAR_4);
  if (VAR_7 < 0)
   break;

  VAR_7 = VAR_1;
  switch (VAR_10)
  {
   case 132:
    VAR_7 = FUNC_6(VAR_9);
    break;
   case 131:

    VAR_7 = FUNC_5(VAR_4, VAR_9);
    VAR_12 = 1;
    break;
   case 128:
    if (VAR_12)






     FUNC_9("pgp_decrypt: using first of several keys");
    else
    {
     VAR_12 = 1;
     VAR_7 = FUNC_2(VAR_4, VAR_9);
    }
    break;
   case 130:
    if (!VAR_12)
     FUNC_9("pgp_decrypt: have data but no key");
    else if (VAR_13)
     FUNC_9("pgp_decrypt: got second data packet");
    else
    {
     VAR_13 = 1;
     VAR_4->disable_mdc = 1;
     VAR_7 = FUNC_0(VAR_4, VAR_9, VAR_6);
    }
    break;
   case 129:
    if (!VAR_12)
     FUNC_9("pgp_decrypt: have data but no key");
    else if (VAR_13)
     FUNC_9("pgp_decrypt: several data pkts not supported");
    else
    {
     VAR_13 = 1;
     VAR_4->disable_mdc = 0;
     VAR_7 = FUNC_1(VAR_4, VAR_9, VAR_6);
    }
    break;
   default:
    FUNC_9("pgp_decrypt: unknown tag: 0x%02x", VAR_10);
  }
  FUNC_8(VAR_9);
  VAR_9 = ((void*)0);
 }

 if (VAR_9)
  FUNC_8(VAR_9);

 if (VAR_8)
  FUNC_8(VAR_8);

 if (VAR_7 < 0)
  return VAR_7;






 if (!VAR_13 || VAR_4->corrupt_prefix)
  return VAR_1;
 if (VAR_4->unsupported_compr)
  return VAR_3;
 if (VAR_4->unexpected_binary)
  return VAR_2;

 return VAR_7;
}
