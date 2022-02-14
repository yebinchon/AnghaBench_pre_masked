
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gc_arena {int dummy; } ;
typedef int md_kt_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int *,int,int ,struct gc_arena*) ;
 int FUNC_2 (struct gc_arena*) ;
 scalar_t__ FUNC_3 (int,int,struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int const*,int const*,int,int const*,int,int *,int) ;

__attribute__((used)) static void
FUNC_8(const uint8_t *VAR_1,
         int VAR_2,
         const uint8_t *VAR_3,
         int VAR_4,
         uint8_t *VAR_5,
         int VAR_6)
{
    struct gc_arena VAR_7 = FUNC_4();
    const md_kt_t *VAR_8 = FUNC_5("MD5");
    const md_kt_t *VAR_9 = FUNC_5("SHA1");
    int VAR_10,VAR_11;
    const uint8_t *VAR_12,*VAR_13;
    uint8_t *VAR_14;

    VAR_14 = (uint8_t *) FUNC_3(VAR_6, 0, &VAR_7);

    VAR_10 = VAR_4/2;
    VAR_12 = VAR_3;
    VAR_13 = &(VAR_3[VAR_10]);
    VAR_10 += (VAR_4&1);

    FUNC_7(VAR_8,VAR_12,VAR_10,VAR_1,VAR_2,VAR_5,VAR_6);
    FUNC_7(VAR_9,VAR_13,VAR_10,VAR_1,VAR_2,VAR_14,VAR_6);

    for (VAR_11 = 0; VAR_11<VAR_6; VAR_11++)
    {
        VAR_5[VAR_11] ^= VAR_14[VAR_11];
    }

    FUNC_6(VAR_14, VAR_6);

    FUNC_0(VAR_0, "tls1_PRF out[%d]: %s", VAR_6, FUNC_1(VAR_5, VAR_6, 0, &VAR_7));

    FUNC_2(&VAR_7);
}
