
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct link_socket_info {int dummy; } ;
struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct context {TYPE_2__ c2; } ;


 int VAR_0 ;
 struct link_socket_info* FUNC_0 (struct context*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct context*,struct link_socket_info*,int) ;
 int FUNC_4 (struct context*,struct link_socket_info*,int const*) ;

__attribute__((used)) static void
FUNC_5(struct context *VAR_1)
{
    FUNC_2(VAR_0);

    struct link_socket_info *VAR_2 = FUNC_0(VAR_1);
    const uint8_t *VAR_3 = VAR_1->c2.buf.data;

    FUNC_3(VAR_1, VAR_2, 0);
    FUNC_4(VAR_1, VAR_2, VAR_3);

    FUNC_1();
}
