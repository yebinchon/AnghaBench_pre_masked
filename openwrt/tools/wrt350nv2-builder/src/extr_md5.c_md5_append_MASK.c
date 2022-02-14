
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ md5_word_t ;
struct TYPE_4__ {int* count; int const* buf; } ;
typedef TYPE_1__ md5_state_t ;
typedef int md5_byte_t ;


 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (int const*,int const*,int) ;

void
FUNC_2(md5_state_t *VAR_0, const md5_byte_t *VAR_1, int VAR_2)
{
    const md5_byte_t *VAR_3 = VAR_1;
    int VAR_4 = VAR_2;
    int VAR_5 = (VAR_0->count[0] >> 3) & 63;
    md5_word_t VAR_6 = (md5_word_t)(VAR_2 << 3);

    if (VAR_2 <= 0)
 return;


    VAR_0->count[1] += VAR_2 >> 29;
    VAR_0->count[0] += VAR_6;
    if (VAR_0->count[0] < VAR_6)
 VAR_0->count[1]++;


    if (VAR_5) {
 int VAR_7 = (VAR_5 + VAR_2 > 64 ? 64 - VAR_5 : VAR_2);

 FUNC_1(VAR_0->buf + VAR_5, VAR_3, VAR_7);
 if (VAR_5 + VAR_7 < 64)
     return;
 VAR_3 += VAR_7;
 VAR_4 -= VAR_7;
 FUNC_0(VAR_0, VAR_0->buf);
    }


    for (; VAR_4 >= 64; VAR_3 += 64, VAR_4 -= 64)
 FUNC_0(VAR_0, VAR_3);


    if (VAR_4)
 FUNC_1(VAR_0->buf, VAR_3, VAR_4);
}
