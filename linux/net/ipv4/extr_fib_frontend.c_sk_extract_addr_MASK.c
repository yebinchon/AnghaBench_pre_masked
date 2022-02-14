
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int __be32 ;



__attribute__((used)) static inline __be32 FUNC_0(struct sockaddr *VAR_0)
{
 return ((struct sockaddr_in *) VAR_0)->sin_addr.s_addr;
}
