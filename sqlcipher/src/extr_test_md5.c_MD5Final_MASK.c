
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int* bits; unsigned char* in; int* buf; } ;
typedef TYPE_1__ MD5Context ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int*,int) ;
 int FUNC_3 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned char VAR_0[16], MD5Context *VAR_1){
        unsigned VAR_2;
        unsigned char *VAR_3;


        VAR_2 = (VAR_1->bits[0] >> 3) & 0x3F;



        VAR_3 = VAR_1->in + VAR_2;
        *VAR_3++ = 0x80;


        VAR_2 = 64 - 1 - VAR_2;


        if (VAR_2 < 8) {

                FUNC_3(VAR_3, 0, VAR_2);
                FUNC_1(VAR_1->in, 16);
                FUNC_0(VAR_1->buf, (uint32 *)VAR_1->in);


                FUNC_3(VAR_1->in, 0, 56);
        } else {

                FUNC_3(VAR_3, 0, VAR_2-8);
        }
        FUNC_1(VAR_1->in, 14);


        FUNC_2(VAR_1->in + 14*4, VAR_1->bits, 8);

        FUNC_0(VAR_1->buf, (uint32 *)VAR_1->in);
        FUNC_1((unsigned char *)VAR_1->buf, 4);
        FUNC_2(VAR_0, VAR_1->buf, 16);
}
