
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* hostname; int hash_hostname; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,char const*) ;
 void* FUNC_3 (char const*) ;

__attribute__((used)) static inline void FUNC_4(RRDHOST *VAR_0, const char *VAR_1) {
    if(VAR_0->hostname && VAR_1 && !FUNC_2(VAR_0->hostname, VAR_1))
        return;

    void *VAR_2 = VAR_0->hostname;
    VAR_0->hostname = FUNC_3(VAR_1?VAR_1:"localhost");
    VAR_0->hash_hostname = FUNC_1(VAR_0->hostname);
    FUNC_0(VAR_2);
}
