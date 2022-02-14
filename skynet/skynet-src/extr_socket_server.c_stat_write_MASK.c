
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_server {int time; } ;
struct TYPE_2__ {int write; int wtime; } ;
struct socket {TYPE_1__ stat; } ;



__attribute__((used)) static inline void
FUNC_0(struct socket_server *VAR_0, struct socket *VAR_1, int VAR_2) {
 VAR_1->stat.write += VAR_2;
 VAR_1->stat.wtime = VAR_0->time;
}
