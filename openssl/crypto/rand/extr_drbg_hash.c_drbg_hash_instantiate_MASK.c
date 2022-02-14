
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


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(RAND_DRBG *VAR_1,
                                 const unsigned char *VAR_2, size_t VAR_3,
                                 const unsigned char *VAR_4, size_t VAR_5,
                                 const unsigned char *VAR_6, size_t VAR_7)
{
    RAND_DRBG_HASH *VAR_8 = &VAR_1->data.hash;


    return FUNC_0(VAR_1, VAR_8->V, VAR_0,
                   VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)

           && FUNC_1(VAR_1, VAR_8->C, 0x00, VAR_8->V, VAR_1->seedlen);
}
