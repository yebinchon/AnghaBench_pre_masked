
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ keylen; } ;
struct TYPE_7__ {TYPE_1__ response; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
struct TYPE_9__ {TYPE_3__ message; } ;
typedef TYPE_4__ protocol_binary_response_no_extras ;
typedef int protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char*,int,int ,int *,int ,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,size_t,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_4(void) {
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_3;

    size_t VAR_4 = FUNC_0(VAR_3.bytes, sizeof(VAR_3.bytes),
                             VAR_0,
                             ((void*)0), 0, ((void*)0), 0);

    FUNC_2(VAR_3.bytes, VAR_4, 0);
    do {
        FUNC_1(VAR_3.bytes, sizeof(VAR_3.bytes));
        FUNC_3(&VAR_3.response, VAR_0,
                                 VAR_1);
    } while (VAR_3.response.message.header.response.keylen != 0);

    return VAR_2;
}
