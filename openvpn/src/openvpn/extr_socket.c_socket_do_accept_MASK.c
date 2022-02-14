
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sa_family; } ;
struct TYPE_5__ {TYPE_3__ sa; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct link_socket_actual {TYPE_2__ dest; } ;
typedef int socklen_t ;
typedef int socket_descriptor_t ;


 int FUNC_0 (struct link_socket_actual) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,TYPE_3__*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,TYPE_3__*,int*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

socket_descriptor_t
FUNC_8(socket_descriptor_t VAR_4,
                 struct link_socket_actual *VAR_5,
                 const bool VAR_6)
{




    socklen_t VAR_7 = FUNC_2(VAR_5->dest.addr.sa.sa_family);
    socklen_t VAR_8 = sizeof(VAR_5->dest.addr);
    socket_descriptor_t VAR_9 = VAR_3;

    FUNC_0(*VAR_5);
    if (VAR_6)
    {
        FUNC_4(VAR_2, "TCP: this OS does not provide the getpeername() function");
    }

    else
    {
        VAR_9 = FUNC_1(VAR_4, &VAR_5->dest.addr.sa, &VAR_8);
    }
    if (!FUNC_7(VAR_9))
    {
        FUNC_4(VAR_0 | VAR_1, "TCP: accept(%d) failed", (int)VAR_4);
    }

    else if (VAR_7 && VAR_8 != VAR_7)
    {
        FUNC_4(VAR_0, "TCP: Received strange incoming connection with unknown address length=%d", VAR_8);
        FUNC_5(VAR_9);
        VAR_9 = VAR_3;
    }
    else
    {


        FUNC_6(VAR_4);
    }
    return VAR_9;
}
