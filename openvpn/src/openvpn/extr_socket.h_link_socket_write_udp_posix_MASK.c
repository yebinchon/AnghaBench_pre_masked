
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_8__ {int sa_family; } ;
struct TYPE_5__ {TYPE_4__ sa; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct link_socket_actual {TYPE_2__ dest; } ;
struct TYPE_7__ {int proto; } ;
struct link_socket {int sockflags; int sd; TYPE_3__ info; } ;
struct buffer {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct link_socket_actual*) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (struct link_socket*,struct buffer*,struct link_socket_actual*) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ,int ,int ,int ,struct sockaddr*,int ) ;

__attribute__((used)) static inline size_t
FUNC_7(struct link_socket *VAR_1,
                            struct buffer *VAR_2,
                            struct link_socket_actual *VAR_3)
{
    return FUNC_6(VAR_1->sd, FUNC_1(VAR_2), FUNC_0(VAR_2), 0,
                  (struct sockaddr *) &VAR_3->dest.addr.sa,
                  (socklen_t) FUNC_3(VAR_3->dest.addr.sa.sa_family));
}
