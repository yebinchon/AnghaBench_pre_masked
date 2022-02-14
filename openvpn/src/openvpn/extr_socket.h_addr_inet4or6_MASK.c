
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct sockaddr *VAR_2)
{
    return VAR_2->sa_family == VAR_0 || VAR_2->sa_family == VAR_1;
}
