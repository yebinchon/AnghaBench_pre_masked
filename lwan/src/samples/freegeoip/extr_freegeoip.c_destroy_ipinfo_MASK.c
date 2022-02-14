
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct ip_info* area; struct ip_info* code; } ;
struct TYPE_6__ {struct ip_info* zip_code; struct ip_info* name; } ;
struct TYPE_5__ {struct ip_info* name; struct ip_info* code; } ;
struct TYPE_8__ {struct ip_info* name; struct ip_info* code; } ;
struct ip_info {struct ip_info* ip; TYPE_3__ metro; TYPE_2__ city; TYPE_1__ region; TYPE_4__ country; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct ip_info*) ;

__attribute__((used)) static void FUNC_1(struct cache_entry *VAR_0,
                           void *VAR_1 __attribute__((unused)))
{
    struct ip_info *VAR_2 = (struct ip_info *)VAR_0;

    if (!VAR_2)
        return;

    FUNC_0(VAR_2->country.code);
    FUNC_0(VAR_2->country.name);
    FUNC_0(VAR_2->region.code);
    FUNC_0(VAR_2->region.name);
    FUNC_0(VAR_2->city.name);
    FUNC_0(VAR_2->city.zip_code);
    FUNC_0(VAR_2->metro.code);
    FUNC_0(VAR_2->metro.area);
    FUNC_0(VAR_2->ip);
    FUNC_0(VAR_2);
}
