
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int cipher_algo; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(PGP_Context *VAR_2, PushFilter *VAR_3)
{
 uint8 VAR_4[VAR_0 + 2];
 int VAR_5,
    VAR_6;

 VAR_6 = FUNC_1(VAR_2->cipher_algo);
 if (!FUNC_0(VAR_4, VAR_6))
  return VAR_1;

 VAR_4[VAR_6 + 0] = VAR_4[VAR_6 - 2];
 VAR_4[VAR_6 + 1] = VAR_4[VAR_6 - 1];

 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_6 + 2);
 FUNC_3(VAR_4, 0, VAR_6 + 2);
 return VAR_5 < 0 ? VAR_5 : 0;
}
