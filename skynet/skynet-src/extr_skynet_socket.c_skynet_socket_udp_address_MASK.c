
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_message {int data; int ud; scalar_t__ opaque; int id; } ;
struct skynet_socket_message {scalar_t__ type; int buffer; int ud; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct socket_message*,int*) ;

const char *
FUNC_1(struct skynet_socket_message *VAR_2, int *VAR_3) {
 if (VAR_2->type != VAR_0) {
  return ((void*)0);
 }
 struct socket_message VAR_4;
 VAR_4.id = VAR_2->id;
 VAR_4.opaque = 0;
 VAR_4.ud = VAR_2->ud;
 VAR_4.data = VAR_2->buffer;
 return (const char *)FUNC_0(VAR_1, &VAR_4, VAR_3);
}
