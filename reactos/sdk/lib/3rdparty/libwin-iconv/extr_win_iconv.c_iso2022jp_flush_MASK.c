
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_5__ {int esc_len; int esc; } ;
typedef TYPE_1__ iso2022_esc_t ;
struct TYPE_6__ {scalar_t__ mode; } ;
typedef TYPE_2__ csconv_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t,scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(csconv_t *VAR_5, uchar *VAR_6, int VAR_7)
{
    iso2022_esc_t *VAR_8 = VAR_4;
    int VAR_9;

    if (VAR_5->mode != FUNC_0(VAR_1, VAR_2))
    {
        VAR_9 = 0;
        if (FUNC_2(VAR_5->mode) != VAR_2)
            VAR_9 += 1;
        if (FUNC_1(VAR_5->mode) != VAR_1)
            VAR_9 += VAR_8[VAR_1].esc_len;
        if (VAR_7 < VAR_9)
            return FUNC_4(VAR_0);

        VAR_9 = 0;
        if (FUNC_2(VAR_5->mode) != VAR_2)
        {
            FUNC_3(VAR_6, VAR_3, 1);
            VAR_9 += 1;
        }
        if (FUNC_1(VAR_5->mode) != VAR_1)
        {
            FUNC_3(VAR_6 + VAR_9, VAR_8[VAR_1].esc,
                    VAR_8[VAR_1].esc_len);
            VAR_9 += VAR_8[VAR_1].esc_len;
        }
        return VAR_9;
    }
    return 0;
}
