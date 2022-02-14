
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int port_value; void* has_port; } ;
typedef TYPE_2__ parse_data ;
struct TYPE_10__ {int modified_props; TYPE_1__* uri; int port; scalar_t__ has_port; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_8__ {int port; scalar_t__ has_port; } ;
typedef int DWORD ;


 int FUNC_0 (char*,TYPE_3__ const*,TYPE_2__*,int ,int ) ;
 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(const UriBuilder *VAR_2, parse_data *VAR_3, DWORD VAR_4) {
    if(VAR_2->modified_props & VAR_1) {
        if(VAR_2->has_port) {
            VAR_3->has_port = VAR_0;
            VAR_3->port_value = VAR_2->port;
        }
    } else if(VAR_2->uri && VAR_2->uri->has_port) {
        VAR_3->has_port = VAR_0;
        VAR_3->port_value = VAR_2->uri->port;
    }

    if(VAR_3->has_port)
        FUNC_0("(%p %p %x): Using %u as port for IUri.\n", VAR_2, VAR_3, VAR_4, VAR_3->port_value);
}
