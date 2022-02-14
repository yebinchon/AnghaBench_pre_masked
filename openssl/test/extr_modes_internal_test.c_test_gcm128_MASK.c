
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int block128_f ;
struct TYPE_3__ {int size; int * data; } ;
struct TYPE_4__ {TYPE_1__ T; TYPE_1__ C; TYPE_1__ P; TYPE_1__ A; TYPE_1__ IV; TYPE_1__ K; } ;
typedef TYPE_1__ SIZED_DATA ;
typedef int GCM128_CONTEXT ;
typedef int AES_KEY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,unsigned char*,int) ;
 int FUNC_3 (int *,int *,unsigned char*,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,int,int *,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_9 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_10(int VAR_2)
{
    unsigned char VAR_3[512];
    SIZED_DATA VAR_4 = VAR_1[VAR_2].K;
    SIZED_DATA VAR_5 = VAR_1[VAR_2].IV;
    SIZED_DATA VAR_6 = VAR_1[VAR_2].A;
    SIZED_DATA VAR_7 = VAR_1[VAR_2].P;
    SIZED_DATA VAR_8 = VAR_1[VAR_2].C;
    SIZED_DATA VAR_9 = VAR_1[VAR_2].T;
    GCM128_CONTEXT VAR_10;
    AES_KEY VAR_11;


    if (VAR_6.size == 1)
        VAR_6.data = ((void*)0);
    if (VAR_7.size == 1)
        VAR_7.data = ((void*)0);
    if (VAR_8.size == 1)
        VAR_8.data = ((void*)0);

    FUNC_0(VAR_4.data, VAR_4.size * 8, &VAR_11);

    FUNC_5(&VAR_10, &VAR_11, (block128_f)VAR_0);
    FUNC_6(&VAR_10, VAR_5.data, VAR_5.size);
    FUNC_9(VAR_3, 0, VAR_7.size);
    if (VAR_6.data != ((void*)0))
        FUNC_1(&VAR_10, VAR_6.data, VAR_6.size);
    if (VAR_7.data != ((void*)0))
        FUNC_3( &VAR_10, VAR_7.data, VAR_3, VAR_7.size);
    if (!FUNC_7(FUNC_4(&VAR_10, VAR_9.data, 16))
            || (VAR_8.data != ((void*)0)
                    && !FUNC_8(VAR_3, VAR_7.size, VAR_8.data, VAR_7.size)))
        return 0;

    FUNC_6(&VAR_10, VAR_5.data, VAR_5.size);
    FUNC_9(VAR_3, 0, VAR_7.size);
    if (VAR_6.data != ((void*)0))
        FUNC_1(&VAR_10, VAR_6.data, VAR_6.size);
    if (VAR_8.data != ((void*)0))
        FUNC_2(&VAR_10, VAR_8.data, VAR_3, VAR_7.size);
    if (!FUNC_7(FUNC_4(&VAR_10, VAR_9.data, 16))
            || (VAR_7.data != ((void*)0)
                    && !FUNC_8(VAR_3, VAR_7.size, VAR_7.data, VAR_7.size)))
        return 0;

    return 1;
}
