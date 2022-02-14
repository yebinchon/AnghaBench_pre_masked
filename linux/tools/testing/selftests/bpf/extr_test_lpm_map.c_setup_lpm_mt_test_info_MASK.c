
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpm_mt_test_info {int iter; int map_fd; TYPE_1__* key; } ;
struct TYPE_2__ {int prefixlen; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_1(struct lpm_mt_test_info *VAR_1, int VAR_2)
{
 VAR_1->iter = 2000;
 VAR_1->map_fd = VAR_2;
 VAR_1->key[0].prefixlen = 16;
 FUNC_0(VAR_0, "192.168.0.0", &VAR_1->key[0].data);
 VAR_1->key[1].prefixlen = 24;
 FUNC_0(VAR_0, "192.168.0.0", &VAR_1->key[1].data);
 VAR_1->key[2].prefixlen = 24;
 FUNC_0(VAR_0, "192.168.128.0", &VAR_1->key[2].data);
 VAR_1->key[3].prefixlen = 24;
 FUNC_0(VAR_0, "192.168.1.0", &VAR_1->key[3].data);
}
