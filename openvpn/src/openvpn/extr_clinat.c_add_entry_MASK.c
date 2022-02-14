
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_nat_option_list {scalar_t__ n; struct client_nat_entry* entries; } ;
struct client_nat_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_1(struct client_nat_option_list *VAR_2,
          const struct client_nat_entry *VAR_3)
{
    if (VAR_2->n >= VAR_0)
    {
        FUNC_0(VAR_1, "WARNING: client-nat table overflow (max %d entries)", VAR_0);
        return 0;
    }
    else
    {
        VAR_2->entries[VAR_2->n++] = *VAR_3;
        return 1;
    }
}
