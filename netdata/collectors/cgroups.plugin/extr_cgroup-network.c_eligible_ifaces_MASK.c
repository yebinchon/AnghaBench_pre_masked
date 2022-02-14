
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iface {struct iface* next; } ;


 scalar_t__ FUNC_0 (struct iface*) ;

int FUNC_1(struct iface *VAR_0) {
    int VAR_1 = 0;

    struct iface *VAR_2;
    for(VAR_2 = VAR_0; VAR_2 ; VAR_2 = VAR_2->next)
        if(FUNC_0(VAR_2))
            VAR_1++;

    return VAR_1;
}
