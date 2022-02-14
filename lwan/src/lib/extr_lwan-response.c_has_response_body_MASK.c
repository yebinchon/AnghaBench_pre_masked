
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum lwan_request_flags { ____Placeholder_lwan_request_flags } lwan_request_flags ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(enum lwan_request_flags VAR_1,
                                     enum lwan_http_status VAR_2)
{

    return (VAR_1 & 1 << 0) || VAR_2 != VAR_0;
}
