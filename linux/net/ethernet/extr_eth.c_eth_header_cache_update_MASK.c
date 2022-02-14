
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct hh_cache {scalar_t__ hh_data; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char const*,int ) ;

void FUNC_2(struct hh_cache *VAR_1,
        const struct net_device *VAR_2,
        const unsigned char *VAR_3)
{
 FUNC_1(((u8 *) VAR_1->hh_data) + FUNC_0(sizeof(struct ethhdr)),
        VAR_3, VAR_0);
}
