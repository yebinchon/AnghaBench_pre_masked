
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pkt3 ;
typedef int pkt2 ;
typedef int pkt ;
typedef int PACKET ;
typedef int BIO ;


 long FUNC_0 (int *,char**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned char*,long) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned int*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned int*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (long,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 unsigned int VAR_4 ;
 int FUNC_12 (int *,int ,int) ;

__attribute__((used)) static int FUNC_13(BIO *VAR_5, int *VAR_6)
{
    long VAR_7;
    unsigned char *VAR_8;
    PACKET VAR_9, VAR_10, VAR_11;
    unsigned int VAR_12 = 0, VAR_13 = 0;

    if (!FUNC_10( VAR_7 = FUNC_0( VAR_5, (char **) &VAR_8 ), 0 ) )
        goto end;

    FUNC_12(&VAR_9, 0, sizeof(VAR_9));
    FUNC_12(&VAR_10, 0, sizeof(VAR_10));
    FUNC_12(&VAR_11, 0, sizeof(VAR_11));

    if (!FUNC_9( FUNC_2( &VAR_9, VAR_8, VAR_7 ) )

            || !FUNC_3(&VAR_9, VAR_3)

            || !FUNC_9(FUNC_3(&VAR_9, VAR_1))

            || !FUNC_9(FUNC_3(&VAR_9, VAR_0
                                               + VAR_2))

            || !FUNC_9(FUNC_5(&VAR_9, &VAR_10))

            || !FUNC_9(FUNC_6(&VAR_9, &VAR_10))

            || !FUNC_9(FUNC_5(&VAR_9, &VAR_10))

            || !FUNC_9(FUNC_1(&VAR_9, &VAR_10)))
        goto end;


    while (FUNC_8(&VAR_10)) {
        if (!FUNC_9(FUNC_7(&VAR_10, &VAR_13))
                || !FUNC_9(FUNC_6(&VAR_10, &VAR_11)))
            goto end;

        if (VAR_13 == VAR_4) {
            if (!FUNC_11(FUNC_8(&VAR_11), 0)
                    || !FUNC_9(FUNC_4(&VAR_11, &VAR_12)))
                goto end;

            *VAR_6 = VAR_12;
            return 1;
        }
    }

 end:
    return 0;
}
