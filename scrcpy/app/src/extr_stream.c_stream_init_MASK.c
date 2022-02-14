
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {int has_pending; struct recorder* recorder; struct decoder* decoder; int socket; } ;
struct recorder {int dummy; } ;
struct decoder {int dummy; } ;
typedef int socket_t ;



void
FUNC_0(struct stream *VAR_0, socket_t VAR_1,
            struct decoder *VAR_2, struct recorder *VAR_3) {
    VAR_0->socket = VAR_1;
    VAR_0->decoder = VAR_2,
    VAR_0->recorder = VAR_3;
    VAR_0->has_pending = 0;
}
