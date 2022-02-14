
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int V; int C; } ;
struct TYPE_7__ {TYPE_2__ hash; } ;
struct TYPE_9__ {int seedlen; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HASH ;
typedef TYPE_3__ RAND_DRBG ;


 int FUNC_0 (TYPE_3__*,int ,int,int ,int ,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_3__*,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(RAND_DRBG *VAR_0,
                            const unsigned char *VAR_1, size_t VAR_2,
                            const unsigned char *VAR_3, size_t VAR_4)
{
    RAND_DRBG_HASH *VAR_5 = &VAR_0->data.hash;



    if (!FUNC_0(VAR_0, VAR_5->C, 0x01, VAR_5->V, VAR_0->seedlen, VAR_1, VAR_2,
                 VAR_3, VAR_4))
        return 0;
    FUNC_2(VAR_5->V, VAR_5->C, VAR_0->seedlen);

    return FUNC_1(VAR_0, VAR_5->C, 0x00, VAR_5->V, VAR_0->seedlen);
}
