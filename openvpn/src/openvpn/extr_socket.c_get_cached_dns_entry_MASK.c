
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_dns_entry {int ai_family; int flags; struct addrinfo* ai; int servname; int hostname; struct cached_dns_entry* next; } ;
struct addrinfo {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(struct cached_dns_entry *VAR_1,
                     const char *VAR_2,
                     const char *VAR_3,
                     int VAR_4,
                     int VAR_5,
                     struct addrinfo **VAR_6)
{
    struct cached_dns_entry *VAR_7;
    int VAR_8;


    VAR_8 = VAR_5 & VAR_0;

    for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next)
    {
        if (FUNC_0(VAR_7->hostname, VAR_2)
            && FUNC_0(VAR_7->servname, VAR_3)
            && VAR_7->ai_family == VAR_4
            && VAR_7->flags == VAR_8)
        {
            *VAR_6 = VAR_7->ai;
            return 0;
        }
    }
    return -1;
}
