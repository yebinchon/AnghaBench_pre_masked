
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u128 ;
struct TYPE_2__ {int* h; } ;
typedef TYPE_1__ poly1305_internal ;


 int FUNC_0 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, unsigned char VAR_1[16],
                          const u32 VAR_2[4])
{
    poly1305_internal *VAR_3 = (poly1305_internal *) VAR_0;
    u64 VAR_4, VAR_5, VAR_6;
    u64 VAR_7, VAR_8, VAR_9;
    u128 VAR_10;
    u64 VAR_11;

    VAR_4 = VAR_3->h[0];
    VAR_5 = VAR_3->h[1];
    VAR_6 = VAR_3->h[2];


    VAR_7 = (u64)(VAR_10 = (u128)VAR_4 + 5);
    VAR_8 = (u64)(VAR_10 = (u128)VAR_5 + (VAR_10 >> 64));
    VAR_9 = VAR_6 + (u64)(VAR_10 >> 64);


    VAR_11 = 0 - (VAR_9 >> 2);
    VAR_7 &= VAR_11;
    VAR_8 &= VAR_11;
    VAR_11 = ~VAR_11;
    VAR_4 = (VAR_4 & VAR_11) | VAR_7;
    VAR_5 = (VAR_5 & VAR_11) | VAR_8;


    VAR_4 = (u64)(VAR_10 = (u128)VAR_4 + VAR_2[0] + ((u64)VAR_2[1]<<32));
    VAR_5 = (u64)(VAR_10 = (u128)VAR_5 + VAR_2[2] + ((u64)VAR_2[3]<<32) + (VAR_10 >> 64));

    FUNC_0(VAR_1 + 0, VAR_4);
    FUNC_0(VAR_1 + 8, VAR_5);
}
