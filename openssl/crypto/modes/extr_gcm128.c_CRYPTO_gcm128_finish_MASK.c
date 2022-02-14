
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_13__ {int hi; int lo; } ;
typedef TYPE_4__ u128 ;
typedef int bitlen ;
struct TYPE_12__ {int* u; int c; } ;
struct TYPE_11__ {int* u; } ;
struct TYPE_10__ {int* u; int * c; } ;
struct TYPE_14__ {void (* gmult ) (int*,u128 const*) ;void (* ghash ) (int*,u128 const*,u8 const*,size_t) ;unsigned int mres; TYPE_3__ Xi; TYPE_2__ EK0; scalar_t__ Xn; TYPE_1__ len; scalar_t__ ares; } ;
typedef TYPE_5__ GCM128_CONTEXT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,unsigned int) ;
 int FUNC_5 (scalar_t__,TYPE_4__*,int) ;
 int FUNC_6 (scalar_t__,int ,unsigned int) ;

int FUNC_7(GCM128_CONTEXT *VAR_0, const unsigned char *VAR_1,
                         size_t VAR_2)
{
    const union {
        long one;
        char little;
    } VAR_3 = { 1 };
    u64 VAR_4 = VAR_0->len.u[0] << 3;
    u64 VAR_5 = VAR_0->len.u[1] << 3;
    if (VAR_0->mres || VAR_0->ares)
        FUNC_2(VAR_0);


    if (VAR_3.little) {




        u8 *VAR_6 = VAR_0->len.c;

        VAR_0->len.u[0] = VAR_4;
        VAR_0->len.u[1] = VAR_5;

        VAR_4 = (u64)FUNC_3(VAR_6) << 32 | FUNC_3(VAR_6 + 4);
        VAR_5 = (u64)FUNC_3(VAR_6 + 8) << 32 | FUNC_3(VAR_6 + 12);

    }
    VAR_0->Xi.u[0] ^= VAR_4;
    VAR_0->Xi.u[1] ^= VAR_5;
    FUNC_2(VAR_0);


    VAR_0->Xi.u[0] ^= VAR_0->EK0.u[0];
    VAR_0->Xi.u[1] ^= VAR_0->EK0.u[1];

    if (VAR_1 && VAR_2 <= sizeof(VAR_0->Xi))
        return FUNC_1(VAR_0->Xi.c, VAR_1, VAR_2);
    else
        return -1;
}
