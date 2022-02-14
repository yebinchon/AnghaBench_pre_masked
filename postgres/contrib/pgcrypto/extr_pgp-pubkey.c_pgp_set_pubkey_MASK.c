
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int * pub_key; } ;
typedef int PullFilter ;
typedef int PGP_PubKey ;
typedef TYPE_1__ PGP_Context ;
typedef int MBuf ;


 int FUNC_0 (int *,int **,int const*,int,int) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(PGP_Context *VAR_0, MBuf *VAR_1,
      const uint8 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 PullFilter *VAR_6;
 PGP_PubKey *VAR_7 = ((void*)0);

 VAR_5 = FUNC_1(&VAR_6, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_6, &VAR_7, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_6);

 if (VAR_5 >= 0)
  VAR_0->pub_key = VAR_7;

 return VAR_5 < 0 ? VAR_5 : 0;
}
