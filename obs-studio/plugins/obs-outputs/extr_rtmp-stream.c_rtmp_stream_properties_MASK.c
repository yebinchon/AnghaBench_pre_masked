
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netif_saddr_item {char* addr; int name; } ;
struct TYPE_2__ {size_t num; struct netif_saddr_item* array; } ;
struct netif_saddr_data {TYPE_1__ addrs; int member_0; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct netif_saddr_data*) ;
 int FUNC_2 (struct netif_saddr_data*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int,int,int) ;
 int * FUNC_6 (int *,int ,int ,int ,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_6)
{
 FUNC_0(VAR_6);

 obs_properties_t *VAR_7 = FUNC_7();
 struct netif_saddr_data VAR_8 = {0};
 obs_property_t *VAR_9;

 FUNC_5(VAR_7, VAR_3,
          FUNC_3("RTMPStream.DropThreshold"), 200,
          10000, 100);

 VAR_9 = FUNC_6(VAR_7, VAR_2,
        FUNC_3("RTMPStream.BindIP"),
        VAR_1,
        VAR_0);

 FUNC_8(VAR_9, FUNC_3("Default"), "default");

 FUNC_1(&VAR_8);
 for (size_t VAR_10 = 0; VAR_10 < VAR_8.addrs.num; VAR_10++) {
  struct netif_saddr_item VAR_11 = VAR_8.addrs.array[VAR_10];
  FUNC_8(VAR_9, VAR_11.name, VAR_11.addr);
 }
 FUNC_2(&VAR_8);

 FUNC_4(VAR_7, VAR_5,
    FUNC_3("RTMPStream.NewSocketLoop"));
 FUNC_4(VAR_7, VAR_4,
    FUNC_3("RTMPStream.LowLatencyMode"));

 return VAR_7;
}
