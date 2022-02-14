
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned char* iv; TYPE_1__* hw; } ;
struct TYPE_9__ {int (* cipher ) (TYPE_2__*,unsigned char*,unsigned char*,int) ;} ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 (unsigned char*,size_t,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_7 (TYPE_2__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_8 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_9 (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_10 (TYPE_2__*,unsigned char*,unsigned char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_11(PROV_CIPHER_CTX *VAR_3, unsigned char *VAR_4,
                           const unsigned char *VAR_5, size_t VAR_6)
{
    unsigned char VAR_7[8], VAR_8[VAR_1], VAR_9[VAR_0];
    int VAR_10 = -1;

    if (VAR_6 < 24)
        return -1;
    if (VAR_4 == ((void*)0))
        return VAR_6 - 16;

    FUNC_4(VAR_3->iv, VAR_2, 8);

    VAR_3->hw->cipher(VAR_3, VAR_7, VAR_5, 8);





    if (VAR_4 == VAR_5) {
        FUNC_5(VAR_4, VAR_4 + 8, VAR_6 - 8);
        VAR_5 -= 8;
    }
    VAR_3->hw->cipher(VAR_3, VAR_4, VAR_5 + 8, VAR_6 - 16);

    VAR_3->hw->cipher(VAR_3, VAR_8, VAR_5 + VAR_6 - 8, 8);

    FUNC_0(VAR_7, ((void*)0), 8);
    FUNC_0(VAR_4, ((void*)0), VAR_6 - 16);
    FUNC_0(VAR_3->iv, VAR_8, 8);

    VAR_3->hw->cipher(VAR_3, VAR_4, VAR_4, VAR_6 - 16);
    VAR_3->hw->cipher(VAR_3, VAR_7, VAR_7, 8);

    FUNC_3(VAR_4, VAR_6 - 16, VAR_9);

    if (!FUNC_1(VAR_9, VAR_7, 8))
        VAR_10 = VAR_6 - 16;
    FUNC_2(VAR_7, 8);
    FUNC_2(VAR_9, VAR_0);
    FUNC_2(VAR_8, 8);
    FUNC_2(VAR_3->iv, sizeof(VAR_3->iv));
    if (VAR_10 == -1)
        FUNC_2(VAR_4, VAR_6 - 16);

    return VAR_10;
}
