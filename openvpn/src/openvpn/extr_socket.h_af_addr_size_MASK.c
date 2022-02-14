
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int sa_family_t ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static inline int
FUNC_2(sa_family_t VAR_1)
{
    switch (VAR_1)
    {
        case 129: return sizeof(struct sockaddr_in);

        case 128: return sizeof(struct sockaddr_in6);

        default:





            return 0;
    }
}
