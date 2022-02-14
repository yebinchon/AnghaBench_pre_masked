
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_5__ {int noheader; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_4__ {unsigned int avail_in; unsigned int next_in; unsigned int total_in; int adler; scalar_t__ state; } ;
typedef int Byte ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(
 z_streamp VAR_0,
 Byte *VAR_1,
 unsigned VAR_2
)
{
    unsigned VAR_3 = VAR_0->avail_in;

    if (VAR_3 > VAR_2) VAR_3 = VAR_2;
    if (VAR_3 == 0) return 0;

    VAR_0->avail_in -= VAR_3;

    if (!((deflate_state *)(VAR_0->state))->noheader) {
        VAR_0->adler = FUNC_1(VAR_0->adler, VAR_0->next_in, VAR_3);
    }
    FUNC_0(VAR_1, VAR_0->next_in, VAR_3);
    VAR_0->next_in += VAR_3;
    VAR_0->total_in += VAR_3;

    return (int)VAR_3;
}
