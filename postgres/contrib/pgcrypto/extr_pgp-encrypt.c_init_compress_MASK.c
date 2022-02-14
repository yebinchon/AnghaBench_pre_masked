
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int compress_algo; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int FUNC_0 (int **,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(PushFilter **VAR_2, PGP_Context *VAR_3, PushFilter *VAR_4)
{
 int VAR_5;
 uint8 VAR_6 = VAR_3->compress_algo;
 PushFilter *VAR_7;

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(&VAR_7, &VAR_1, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_7, &VAR_6, 1);
 if (VAR_5 >= 0)
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_7);

 if (VAR_5 < 0)
  FUNC_2(VAR_7);

 return VAR_5;
}
