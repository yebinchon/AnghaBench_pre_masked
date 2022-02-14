
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shash_desc {int tfm; } ;
struct md5_hmac_ctx {int dbn; } ;


 int VAR_0 ;
 struct md5_hmac_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(struct shash_desc *VAR_2, u32 const *VAR_3)
{
    struct md5_hmac_ctx *VAR_4 = FUNC_0(VAR_2->tfm);

    FUNC_1(&VAR_1[VAR_4->dbn<<4], VAR_3, 64);
    VAR_4->dbn += 1;

    if ( (VAR_4->dbn<<4) > VAR_0 )
    {
        FUNC_2("MD5_HMAC_DBN_TEMP_SIZE exceeded\n");
    }

}
