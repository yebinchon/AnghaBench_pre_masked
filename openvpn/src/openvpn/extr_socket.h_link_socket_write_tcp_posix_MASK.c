
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket_actual {int dummy; } ;
struct link_socket {int sd; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 size_t FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static inline size_t
FUNC_3(struct link_socket *VAR_1,
                            struct buffer *VAR_2,
                            struct link_socket_actual *VAR_3)
{
    return FUNC_2(VAR_1->sd, FUNC_1(VAR_2), FUNC_0(VAR_2), VAR_0);
}
