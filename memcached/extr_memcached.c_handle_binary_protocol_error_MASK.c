
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int opcode; } ;
struct TYPE_8__ {TYPE_1__ request; } ;
struct TYPE_9__ {int sfd; int write_and_go; TYPE_2__ binary_header; } ;
typedef TYPE_3__ conn ;
struct TYPE_10__ {scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(conn *VAR_4) {
    FUNC_1(VAR_4, VAR_0, ((void*)0), 0);
    if (VAR_2.verbose) {
        FUNC_0(VAR_3, "Protocol error (opcode %02x), close connection %d\n",
                VAR_4->binary_header.request.opcode, VAR_4->sfd);
    }
    VAR_4->write_and_go = VAR_1;
}
