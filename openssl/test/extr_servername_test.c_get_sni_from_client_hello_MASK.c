
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pkt5 ;
typedef int pkt4 ;
typedef int pkt3 ;
typedef int pkt2 ;
typedef int pkt ;
typedef int PACKET ;
typedef int BIO ;


 long FUNC_0 (int *,char**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned char*,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,unsigned int*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,unsigned int*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,char**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (unsigned int,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_16 (int *,int ,int) ;

__attribute__((used)) static int FUNC_17(BIO *VAR_7, char **VAR_8)
{
    long VAR_9;
    unsigned char *VAR_10;
    PACKET VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    unsigned int VAR_16 = 0, VAR_17 = 0;
    int VAR_18 = 0;

    FUNC_16(&VAR_11, 0, sizeof(VAR_11));
    FUNC_16(&VAR_12, 0, sizeof(VAR_12));
    FUNC_16(&VAR_13, 0, sizeof(VAR_13));
    FUNC_16(&VAR_14, 0, sizeof(VAR_14));
    FUNC_16(&VAR_15, 0, sizeof(VAR_15));

    VAR_9 = FUNC_0(VAR_7, (char **)&VAR_10);
    if (!FUNC_12(FUNC_2(&VAR_11, VAR_10, VAR_9))

            || !FUNC_4(&VAR_11, VAR_3)

            || !FUNC_12(FUNC_4(&VAR_11, VAR_1))

            || !FUNC_12(FUNC_4(&VAR_11, VAR_0
                                               + VAR_2))

            || !FUNC_12(FUNC_6(&VAR_11, &VAR_12))

            || !FUNC_12(FUNC_7(&VAR_11, &VAR_12))

            || !FUNC_12(FUNC_6(&VAR_11, &VAR_12))

            || !FUNC_12(FUNC_1(&VAR_11, &VAR_12)))
        goto end;


    while (FUNC_9(&VAR_12)) {
        if (!FUNC_12(FUNC_8(&VAR_12, &VAR_17))
                || !FUNC_12(FUNC_7(&VAR_12, &VAR_13)))
            goto end;
        if (VAR_17 == VAR_6) {
            if (!FUNC_12(FUNC_7(&VAR_13, &VAR_14))
                    || !FUNC_15(FUNC_9(&VAR_14), 0)
                    || !FUNC_12(FUNC_5(&VAR_14, &VAR_16))
                    || !FUNC_13(VAR_16, VAR_5)
                    || !FUNC_12(FUNC_7(&VAR_14, &VAR_15))
                    || !FUNC_14(FUNC_9(&VAR_15), VAR_4)
                    || !FUNC_11(FUNC_3(&VAR_15))
                    || !FUNC_12(FUNC_10(&VAR_15, VAR_8)))
                goto end;
            VAR_18 = 1;
            goto end;
        }
    }
end:
    return VAR_18;
}
