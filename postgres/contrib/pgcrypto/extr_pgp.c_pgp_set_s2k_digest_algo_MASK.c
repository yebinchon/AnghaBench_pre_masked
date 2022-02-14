
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s2k_digest_algo; } ;
typedef TYPE_1__ PGP_Context ;


 int FUNC_0 (char const*) ;

int
FUNC_1(PGP_Context *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 < 0)
  return VAR_2;
 VAR_0->s2k_digest_algo = VAR_2;
 return 0;
}
