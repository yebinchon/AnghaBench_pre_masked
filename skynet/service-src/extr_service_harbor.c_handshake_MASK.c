
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct socket_sendbuffer {int sz; int * buffer; int type; int id; } ;
struct slave {int fd; } ;
struct harbor {int ctx; int id; struct slave* s; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct socket_sendbuffer*) ;

__attribute__((used)) static void
FUNC_1(struct harbor *VAR_1, int VAR_2) {
 struct slave *VAR_3 = &VAR_1->s[VAR_2];
 uint8_t VAR_4[1] = { (uint8_t)VAR_1->id };
 struct socket_sendbuffer VAR_5;
 VAR_5.id = VAR_3->fd;
 VAR_5.type = VAR_0;
 VAR_5.buffer = VAR_4;
 VAR_5.sz = 1;
 FUNC_0(VAR_1->ctx, &VAR_5);
}
