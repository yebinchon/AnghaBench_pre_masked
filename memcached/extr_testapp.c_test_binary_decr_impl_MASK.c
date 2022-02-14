
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int protocol_binary_response_no_extras ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ body; } ;
struct TYPE_6__ {TYPE_2__ message; } ;
typedef TYPE_3__ protocol_binary_response_decr ;
typedef int protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char*,int,int ,char const*,int ,int,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,size_t,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_8(const char* VAR_3, uint8_t VAR_4) {
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response_header;
        protocol_binary_response_decr response;
        char bytes[1024];
    } VAR_5, VAR_6;
    size_t VAR_7 = FUNC_0(VAR_5.bytes, sizeof(VAR_5.bytes), VAR_4,
                                    VAR_3, FUNC_5(VAR_3), 1, 9, 0);

    int VAR_8;
    for (VAR_8 = 9; VAR_8 >= 0; --VAR_8) {
        FUNC_4(VAR_5.bytes, VAR_7, 0);
        if (VAR_4 == VAR_0) {
            FUNC_3(VAR_6.bytes, sizeof(VAR_6.bytes));
            FUNC_7(&VAR_6.response_header, VAR_4,
                                     VAR_1);
            FUNC_1(FUNC_2(VAR_6.response.message.body.value) == VAR_8);
        }
    }


    FUNC_4(VAR_5.bytes, VAR_7, 0);
    if (VAR_4 == VAR_0) {
        FUNC_3(VAR_6.bytes, sizeof(VAR_6.bytes));
        FUNC_7(&VAR_6.response_header, VAR_4,
                                 VAR_1);
        FUNC_1(FUNC_2(VAR_6.response.message.body.value) == 0);
    } else {
        FUNC_6();
    }

    return VAR_2;
}
