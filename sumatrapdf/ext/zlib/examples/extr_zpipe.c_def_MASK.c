
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; unsigned char* next_in; scalar_t__ avail_out; unsigned char* next_out; void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned char*,int,int,int *) ;
 unsigned int FUNC_7 (unsigned char*,int,unsigned int,int *) ;

int FUNC_8(FILE *VAR_8, FILE *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;
    unsigned VAR_13;
    z_stream VAR_14;
    unsigned char VAR_15[VAR_0];
    unsigned char VAR_16[VAR_0];


    VAR_14.zalloc = VAR_4;
    VAR_14.zfree = VAR_4;
    VAR_14.opaque = VAR_4;
    VAR_11 = FUNC_3(&VAR_14, VAR_10);
    if (VAR_11 != VAR_5)
        return VAR_11;


    do {
        VAR_14.avail_in = FUNC_6(VAR_15, 1, VAR_0, VAR_8);
        if (FUNC_5(VAR_8)) {
            (void)FUNC_2(&VAR_14);
            return VAR_1;
        }
        VAR_12 = FUNC_4(VAR_8) ? VAR_2 : VAR_3;
        VAR_14.next_in = VAR_15;



        do {
            VAR_14.avail_out = VAR_0;
            VAR_14.next_out = VAR_16;
            VAR_11 = FUNC_1(&VAR_14, VAR_12);
            FUNC_0(VAR_11 != VAR_7);
            VAR_13 = VAR_0 - VAR_14.avail_out;
            if (FUNC_7(VAR_16, 1, VAR_13, VAR_9) != VAR_13 || FUNC_5(VAR_9)) {
                (void)FUNC_2(&VAR_14);
                return VAR_1;
            }
        } while (VAR_14.avail_out == 0);
        FUNC_0(VAR_14.avail_in == 0);


    } while (VAR_12 != VAR_2);
    FUNC_0(VAR_11 == VAR_6);


    (void)FUNC_2(&VAR_14);
    return VAR_5;
}
