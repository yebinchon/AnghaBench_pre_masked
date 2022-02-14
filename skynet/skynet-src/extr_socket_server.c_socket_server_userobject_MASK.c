
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_object_interface {int dummy; } ;
struct socket_server {struct socket_object_interface soi; } ;



void
FUNC_0(struct socket_server *VAR_0, struct socket_object_interface *VAR_1) {
 VAR_0->soi = *VAR_1;
}
