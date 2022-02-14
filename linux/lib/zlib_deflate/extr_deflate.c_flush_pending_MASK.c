
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_5__ {unsigned int pending; unsigned int pending_out; unsigned int pending_buf; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_4__ {unsigned int avail_out; unsigned int total_out; int * next_out; scalar_t__ state; } ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(
 z_streamp VAR_0
)
{
    deflate_state *VAR_1 = (deflate_state *) VAR_0->state;
    unsigned VAR_2 = VAR_1->pending;

    if (VAR_2 > VAR_0->avail_out) VAR_2 = VAR_0->avail_out;
    if (VAR_2 == 0) return;

    if (VAR_0->next_out != ((void*)0)) {
 FUNC_0(VAR_0->next_out, VAR_1->pending_out, VAR_2);
 VAR_0->next_out += VAR_2;
    }
    VAR_1->pending_out += VAR_2;
    VAR_0->total_out += VAR_2;
    VAR_0->avail_out -= VAR_2;
    VAR_1->pending -= VAR_2;
    if (VAR_1->pending == 0) {
        VAR_1->pending_out = VAR_1->pending_buf;
    }
}
