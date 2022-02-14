
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int protocol_binary_response_no_extras ;
struct TYPE_5__ {int opaque; } ;
struct TYPE_6__ {TYPE_1__ request; } ;
struct TYPE_7__ {TYPE_2__ header; } ;
struct TYPE_8__ {TYPE_3__ message; } ;
typedef TYPE_4__ protocol_binary_request_no_extras ;
typedef int expiration ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (char*,int,int ,int *,size_t,char const*,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,size_t,int) ;
 size_t FUNC_5 (char*,int,int ,char const*,int ,int *,int ,int ,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static enum test_return FUNC_8(const char *VAR_5, uint8_t VAR_6) {
    const char *VAR_7 = "test_binary_getq_missing";
    union {
        protocol_binary_request_no_extras request;
        protocol_binary_response_no_extras response;
        char bytes[1024];
    } VAR_8, VAR_9, VAR_10;

    uint32_t VAR_11 = FUNC_1(3600);
    size_t VAR_12 = 0;
    if (VAR_6 == VAR_2 || VAR_6 == VAR_1)
        VAR_12 = sizeof(VAR_11);

    size_t VAR_13 = FUNC_5(VAR_8.bytes, sizeof(VAR_8.bytes),
                                 VAR_0,
                                 VAR_5, FUNC_6(VAR_5), ((void*)0), 0,
                                 0, 0);
    size_t VAR_14 = FUNC_0(VAR_9.bytes, sizeof(VAR_9.bytes), VAR_6,
                              VAR_12 ? &VAR_11 : ((void*)0), VAR_12,
                              VAR_7, FUNC_6(VAR_7), ((void*)0), 0);


    VAR_9.request.message.header.request.opaque = 0xfeedface;
    FUNC_2(VAR_8.bytes + VAR_13, VAR_9.bytes, VAR_14);
    VAR_13 += VAR_14;

    VAR_14 = FUNC_0(VAR_9.bytes, sizeof(VAR_9.bytes), VAR_6,
                       VAR_12 ? &VAR_11 : ((void*)0), VAR_12,
                       VAR_5, FUNC_6(VAR_5), ((void*)0), 0);
    FUNC_2(VAR_8.bytes + VAR_13, VAR_9.bytes, VAR_14);
    VAR_13 += VAR_14;

    FUNC_4(VAR_8.bytes, VAR_13, 0);
    FUNC_3(VAR_10.bytes, sizeof(VAR_10.bytes));
    FUNC_7(&VAR_10.response, VAR_0,
                             VAR_3);

    FUNC_3(VAR_10.bytes, sizeof(VAR_10.bytes));
    FUNC_7(&VAR_10.response, VAR_6,
                             VAR_3);

    return VAR_4;
}
