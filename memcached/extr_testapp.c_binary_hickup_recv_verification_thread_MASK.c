
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int status; int opcode; } ;
struct TYPE_10__ {TYPE_1__ response; } ;
struct TYPE_11__ {TYPE_2__ header; } ;
struct TYPE_12__ {TYPE_3__ message; } ;
typedef TYPE_4__ protocol_binary_response_no_extras ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void *FUNC_4(void *VAR_2) {
    protocol_binary_response_no_extras *VAR_3 = FUNC_1(65*1024);
    if (VAR_3 != ((void*)0)) {
        while (FUNC_2(VAR_3, 65*1024)) {

            FUNC_3(VAR_3,
                                     VAR_3->message.header.response.opcode,
                                     VAR_3->message.header.response.status);
        }
        FUNC_0(VAR_3);
    }
    VAR_1 = 0;
    VAR_0 = 0;
    return ((void*)0);
}
