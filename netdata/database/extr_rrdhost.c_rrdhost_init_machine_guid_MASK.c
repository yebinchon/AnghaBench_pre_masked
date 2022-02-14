
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* machine_guid; int hash_machine_guid; } ;
typedef TYPE_1__ RRDHOST ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static inline void FUNC_2(RRDHOST *VAR_1, const char *VAR_2) {
    FUNC_1(VAR_1->machine_guid, VAR_2, VAR_0);
    VAR_1->machine_guid[VAR_0] = '\0';
    VAR_1->hash_machine_guid = FUNC_0(VAR_1->machine_guid);
}
