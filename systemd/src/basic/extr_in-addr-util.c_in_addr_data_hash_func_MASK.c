
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siphash {int dummy; } ;
struct in_addr_data {int family; int address; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,struct siphash*) ;

__attribute__((used)) static void FUNC_2(const struct in_addr_data *VAR_0, struct siphash *VAR_1) {
        FUNC_1(&VAR_0->family, sizeof(VAR_0->family), VAR_1);
        FUNC_1(&VAR_0->address, FUNC_0(VAR_0->family), VAR_1);
}
