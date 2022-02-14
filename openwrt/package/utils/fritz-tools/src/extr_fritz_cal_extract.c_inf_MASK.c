
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
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char*,int,int,int *) ;
 int FUNC_3 (unsigned char*,size_t,int,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (size_t,int) ;

__attribute__((used)) static int FUNC_8(FILE *VAR_7, FILE *VAR_8, size_t VAR_9, size_t VAR_10)
{
    int VAR_11;
    size_t VAR_12;
    z_stream VAR_13;
    unsigned char VAR_14[VAR_0];
    unsigned char VAR_15[VAR_0];


    VAR_13.zalloc = VAR_3;
    VAR_13.zfree = VAR_3;
    VAR_13.opaque = VAR_3;
    VAR_13.avail_in = 0;
    VAR_13.next_in = VAR_3;
    VAR_11 = FUNC_6(&VAR_13);
    if (VAR_11 != VAR_4)
        return VAR_11;


    do {
        VAR_13.avail_in = FUNC_2(VAR_14, 1, VAR_0, VAR_7);
        if (FUNC_1(VAR_7)) {
            (void)FUNC_5(&VAR_13);
            return VAR_1;
        }
        if (VAR_13.avail_in == 0)
            break;
        VAR_13.next_in = VAR_14;


        do {
            VAR_13.avail_out = VAR_0;
            VAR_13.next_out = VAR_15;
            VAR_11 = FUNC_4(&VAR_13, VAR_2);
            FUNC_0(VAR_11 != VAR_6);
            switch (VAR_11) {
            case 128:
                VAR_11 = 130;
            case 130:
            case 129:
                (void)FUNC_5(&VAR_13);
                return VAR_11;
            }
            VAR_12 = FUNC_7(VAR_9, VAR_0 - VAR_13.avail_out) - VAR_10;
            if (FUNC_3(&VAR_15[VAR_10], VAR_12, 1, VAR_8) != 1 || FUNC_1(VAR_8)) {
                (void)FUNC_5(&VAR_13);
                return VAR_1;
            }
     VAR_10 = 0;
     VAR_9 -= VAR_12;
        } while (VAR_13.avail_out == 0 && VAR_9 > 0);


    } while (VAR_11 != VAR_5 && VAR_9 > 0);


    (void)FUNC_5(&VAR_13);
    return (VAR_9 == 0 ? VAR_4 : (VAR_11 == VAR_5 ? VAR_4 : 130));
}
