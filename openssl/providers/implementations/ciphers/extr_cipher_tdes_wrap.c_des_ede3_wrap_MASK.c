
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* iv; TYPE_1__* hw; int libctx; } ;
struct TYPE_6__ {int (* cipher ) (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;} ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char*,int *,size_t) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char const*,size_t,unsigned char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_5 (int ,unsigned char*,size_t) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_7 (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;
 unsigned char* VAR_2 ;

__attribute__((used)) static int FUNC_8(PROV_CIPHER_CTX *VAR_3, unsigned char *VAR_4,
                         const unsigned char *VAR_5, size_t VAR_6)
{
    unsigned char VAR_7[VAR_0];
    size_t VAR_8 = VAR_1;
    size_t VAR_9 = VAR_1;
    size_t VAR_10 = VAR_6 + VAR_8 + VAR_9;

    if (VAR_4 == ((void*)0))
        return VAR_10;


    FUNC_4(VAR_4 + VAR_8, VAR_5, VAR_6);

    FUNC_2(VAR_5, VAR_6, VAR_7);
    FUNC_3(VAR_4 + VAR_6 + VAR_8, VAR_7, VAR_9);
    FUNC_1(VAR_7, VAR_0);

    if (FUNC_5(VAR_3->libctx, VAR_3->iv, VAR_8) <= 0)
        return 0;
    FUNC_3(VAR_4, VAR_3->iv, VAR_8);

    VAR_3->hw->cipher(VAR_3, VAR_4 + VAR_8, VAR_4 + VAR_8, VAR_6 + VAR_8);
    FUNC_0(VAR_4, ((void*)0), VAR_10);
    FUNC_3(VAR_3->iv, VAR_2, VAR_8);
    VAR_3->hw->cipher(VAR_3, VAR_4, VAR_4, VAR_10);
    return VAR_10;
}
