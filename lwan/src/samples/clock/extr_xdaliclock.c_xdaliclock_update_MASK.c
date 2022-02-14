
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct xdaliclock {size_t frame; int* target_digits; int current_digits; } ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct frame {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int * VAR_2 ;
 struct frame* FUNC_0 (struct xdaliclock*,int,int ) ;
 int FUNC_1 (struct xdaliclock*,struct frame const*,int) ;
 struct tm* FUNC_2 (int const*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct xdaliclock *VAR_3)
{
    if (VAR_3->frame >= VAR_0) {
        const time_t VAR_4 = FUNC_4(((void*)0));
        const struct tm *VAR_5 = FUNC_2(&VAR_4);

        FUNC_3(VAR_3->current_digits, VAR_3->target_digits,
               sizeof(VAR_3->current_digits));

        VAR_3->target_digits[0] = VAR_5->tm_hour / 10;
        VAR_3->target_digits[1] = VAR_5->tm_hour % 10;
        VAR_3->target_digits[2] = 10;
        VAR_3->target_digits[3] = VAR_5->tm_min / 10;
        VAR_3->target_digits[4] = VAR_5->tm_min % 10;
        VAR_3->target_digits[5] = 10;
        VAR_3->target_digits[6] = VAR_5->tm_sec / 10;
        VAR_3->target_digits[7] = VAR_5->tm_sec % 10;

        VAR_3->frame = 0;
    }

    for (int VAR_6 = 0, VAR_7 = 0; VAR_6 < 8; VAR_7 += VAR_1[VAR_6++]) {
        const struct frame *VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_2[VAR_3->frame]);

        FUNC_1(VAR_3, VAR_8, VAR_7);
    }

    VAR_3->frame++;
}
