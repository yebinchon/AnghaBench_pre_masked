
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int scram_HMAC_ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4(const uint8 *VAR_1, uint8 *VAR_2)
{
 scram_HMAC_ctx VAR_3;

 FUNC_1(&VAR_3, VAR_1, VAR_0);
 FUNC_2(&VAR_3, "Server Key", FUNC_3("Server Key"));
 FUNC_0(VAR_2, &VAR_3);
}
