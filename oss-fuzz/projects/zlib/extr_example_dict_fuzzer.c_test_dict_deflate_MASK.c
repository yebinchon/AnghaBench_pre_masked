
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* next_out; unsigned int avail_out; int avail_in; int * next_in; int adler; void* opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef unsigned char uint8_t ;
typedef int Bytef ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*,unsigned char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_9(unsigned char **VAR_10, size_t *VAR_11)
{
    z_stream VAR_12;
    int VAR_13;
    int VAR_14 = VAR_3[0] % 11 - 1;






    int VAR_15 = VAR_0;

    int VAR_16 = 8 + VAR_3[0] % 8;


    int VAR_17 = 1 + VAR_3[0] % 9;


    int VAR_18 = VAR_3[0] % 5;







    if (VAR_14 == 0 || VAR_14 == 1)
      VAR_14 = -1;

    VAR_12.zalloc = VAR_8;
    VAR_12.zfree = VAR_9;
    VAR_12.opaque = (void *)0;

    VAR_13 = FUNC_5(&VAR_12, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
    FUNC_0(VAR_13, "deflateInit");

    VAR_13 = FUNC_6(
        &VAR_12, (const unsigned char *)VAR_3, VAR_6);
    FUNC_0(VAR_13, "deflateSetDictionary");


    *VAR_11 = 100 + 2 * FUNC_3(&VAR_12, VAR_4);
    *VAR_10 = (uint8_t *)FUNC_1(1, *VAR_11);

    VAR_5 = VAR_12.adler;
    VAR_12.next_out = *VAR_10;
    VAR_12.avail_out = (unsigned int)(*VAR_11);

    VAR_12.next_in = (Bytef *)VAR_3;
    VAR_12.avail_in = VAR_4;

    VAR_13 = FUNC_2(&VAR_12, VAR_1);
    if (VAR_13 != VAR_2) {
        FUNC_8(VAR_7, "deflate dict should report Z_STREAM_END\n");
        FUNC_7(1);
    }
    VAR_13 = FUNC_4(&VAR_12);
    FUNC_0(VAR_13, "deflateEnd");
}
