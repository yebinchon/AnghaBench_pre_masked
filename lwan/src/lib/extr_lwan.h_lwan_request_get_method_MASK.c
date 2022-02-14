
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_request {int flags; } ;
typedef enum lwan_request_flags { ____Placeholder_lwan_request_flags } lwan_request_flags ;


 int VAR_0 ;

__attribute__((used)) static inline enum lwan_request_flags
FUNC_0(const struct lwan_request *VAR_1)
{
    return (enum lwan_request_flags)(VAR_1->flags & VAR_0);
}
