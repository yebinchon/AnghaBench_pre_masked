
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr_data {int family; int address; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(const struct in_addr_data *VAR_0, const struct in_addr_data *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->family, VAR_1->family);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_2(&VAR_0->address, &VAR_1->address, FUNC_1(VAR_0->family));
}
