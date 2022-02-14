
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct scaler {TYPE_1__* kernel; } ;
struct image {float w; float h; int components; } ;
struct gl_video {TYPE_2__* ra; int sc; } ;
struct TYPE_4__ {int caps; int max_shmem; } ;
struct TYPE_3__ {int radius_cutoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct scaler*,int,int,int,int,int) ;
 int FUNC_2 (struct gl_video*,int,int,int) ;
 int FUNC_3 (int ,struct scaler*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gl_video *VAR_2, struct scaler *VAR_3,
                                       struct image VAR_4, int VAR_5, int VAR_6)
{
    uint64_t VAR_7 = VAR_0;
    if ((VAR_2->ra->caps & VAR_7) != VAR_7)
        goto fallback;

    int VAR_8 = FUNC_0(VAR_3->kernel->radius_cutoff);
    int VAR_9 = VAR_8 - 1;
    int VAR_10 = VAR_9 + VAR_8;

    float VAR_11 = (float)VAR_5 / VAR_4.w,
          VAR_12 = (float)VAR_6 / VAR_4.h;




    const int VAR_13 = 32, VAR_14 = 256;
    int VAR_15 = VAR_13;
    int VAR_16 = VAR_14 / VAR_15;



    int VAR_17 = (int)FUNC_0(VAR_15 / VAR_11) + VAR_10 + 1,
        VAR_18 = (int)FUNC_0(VAR_16 / VAR_12) + VAR_10 + 1;

    int VAR_19 = VAR_17 * VAR_18 * VAR_4.components * sizeof(float);
    if (VAR_19 > VAR_2->ra->max_shmem)
        goto fallback;

    FUNC_2(VAR_2, VAR_15, VAR_16, 0);
    FUNC_1(VAR_2->sc, VAR_3, VAR_4.components, VAR_15, VAR_16, VAR_17, VAR_18);
    return;

fallback:


    FUNC_3(VAR_2->sc, VAR_3, VAR_4.components,
                      VAR_2->ra->caps & VAR_1);
}
