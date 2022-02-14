
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned char* C; int V; } ;
struct TYPE_8__ {TYPE_2__ hash; } ;
struct TYPE_10__ {int reseed_gen_counter; int seedlen; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HASH ;
typedef TYPE_3__ RAND_DRBG ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ,unsigned char*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,unsigned char const*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_3__*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_3(RAND_DRBG *VAR_0,
                              unsigned char *VAR_1, size_t VAR_2,
                              const unsigned char *VAR_3, size_t VAR_4)
{
    RAND_DRBG_HASH *VAR_5 = &VAR_0->data.hash;
    unsigned char VAR_6[4];
    int VAR_7 = VAR_0->reseed_gen_counter;

    VAR_6[0] = (unsigned char)((VAR_7 >> 24) & 0xff);
    VAR_6[1] = (unsigned char)((VAR_7 >> 16) & 0xff);
    VAR_6[2] = (unsigned char)((VAR_7 >> 8) & 0xff);
    VAR_6[3] = (unsigned char)(VAR_7 & 0xff);

    return (VAR_3 == ((void*)0)

                || VAR_4 == 0
                || FUNC_1(VAR_0, 0x02, VAR_3, VAR_4))

           && FUNC_2(VAR_0, VAR_1, VAR_2)

           && FUNC_1(VAR_0, 0x03, ((void*)0), 0)


           && FUNC_0(VAR_0, VAR_5->V, VAR_5->C, VAR_0->seedlen)

           && FUNC_0(VAR_0, VAR_5->V, VAR_6, 4);
}
