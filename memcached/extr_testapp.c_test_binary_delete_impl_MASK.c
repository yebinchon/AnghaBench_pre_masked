
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int protocol_binary_response_no_extras ;
typedef int protocol_binary_request_no_extras ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (char*,int,scalar_t__,char const*,int ,int *,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,size_t,int) ;
 size_t FUNC_3 (char*,int,scalar_t__,char const*,int ,int *,int ,int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,scalar_t__,int ) ;

__attribute__((used)) static enum test_return FUNC_6(const char *VAR_5, uint8_t VAR_6) {
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_7, VAR_8;
    size_t VAR_9 = FUNC_0(VAR_7.bytes, sizeof(VAR_7.bytes), VAR_6,
                             VAR_5, FUNC_4(VAR_5), ((void*)0), 0);

    FUNC_2(VAR_7.bytes, VAR_9, 0);
    FUNC_1(VAR_8.bytes, sizeof(VAR_8.bytes));
    FUNC_5(&VAR_8.response, VAR_6,
                             VAR_2);
    VAR_9 = FUNC_3(VAR_7.bytes, sizeof(VAR_7.bytes),
                          VAR_0,
                          VAR_5, FUNC_4(VAR_5), ((void*)0), 0, 0, 0);
    FUNC_2(VAR_7.bytes, VAR_9, 0);
    FUNC_1(VAR_8.bytes, sizeof(VAR_8.bytes));
    FUNC_5(&VAR_8.response, VAR_0,
                             VAR_3);

    VAR_9 = FUNC_0(VAR_7.bytes, sizeof(VAR_7.bytes),
                      VAR_6, VAR_5, FUNC_4(VAR_5), ((void*)0), 0);
    FUNC_2(VAR_7.bytes, VAR_9, 0);

    if (VAR_6 == VAR_1) {
        FUNC_1(VAR_8.bytes, sizeof(VAR_8.bytes));
        FUNC_5(&VAR_8.response, VAR_1,
                                 VAR_3);
    }

    FUNC_2(VAR_7.bytes, VAR_9, 0);
    FUNC_1(VAR_8.bytes, sizeof(VAR_8.bytes));
    FUNC_5(&VAR_8.response, VAR_6,
                             VAR_2);

    return VAR_4;
}
