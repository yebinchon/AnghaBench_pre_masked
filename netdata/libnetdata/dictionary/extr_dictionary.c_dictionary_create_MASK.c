
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct dictionary_stats {int dummy; } ;
typedef int netdata_rwlock_t ;
struct TYPE_3__ {int flags; int values_index; void* rwlock; void* stats; } ;
typedef TYPE_1__ DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (void*) ;

DICTIONARY *FUNC_4(uint8_t VAR_4) {
    FUNC_2(VAR_2, "Creating dictionary.");

    DICTIONARY *VAR_5 = FUNC_1(1, sizeof(DICTIONARY));

    if(VAR_4 & VAR_1)
        VAR_5->stats = FUNC_1(1, sizeof(struct dictionary_stats));

    if(!(VAR_4 & VAR_0)) {
        VAR_5->rwlock = FUNC_1(1, sizeof(netdata_rwlock_t));
        FUNC_3(VAR_5->rwlock);
    }

    FUNC_0(&VAR_5->values_index, VAR_3);
    VAR_5->flags = VAR_4;

    return VAR_5;
}
