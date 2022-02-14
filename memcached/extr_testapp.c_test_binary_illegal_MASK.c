
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int protocol_binary_response_no_extras ;
typedef int protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,int,int,int *,int ,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,size_t,int) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static enum test_return FUNC_4(void) {
    uint8_t VAR_2 = 0x25;
    while (VAR_2 != 0x00) {
        union {
            protocol_binary_request_no_extras request;
            protocol_binary_response_no_extras response;
            char bytes[1024];
        } VAR_3;
        size_t VAR_4 = FUNC_0(VAR_3.bytes, sizeof(VAR_3.bytes),
                                 VAR_2, ((void*)0), 0, ((void*)0), 0);
        FUNC_2(VAR_3.bytes, VAR_4, 0);
        FUNC_1(VAR_3.bytes, sizeof(VAR_3.bytes));
        FUNC_3(&VAR_3.response, VAR_2,
                                 VAR_0);
        ++VAR_2;
    }

    return VAR_1;
}
