
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int avl ;
struct TYPE_3__ {int machine_guid; scalar_t__ hash_machine_guid; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int ) ;

RRDHOST *FUNC_4(const char *VAR_3, uint32_t VAR_4) {
    FUNC_1(VAR_0, "Searching in index for host with guid '%s'", VAR_3);

    RRDHOST VAR_5;
    FUNC_3(VAR_5.machine_guid, VAR_3, VAR_1);
    VAR_5.hash_machine_guid = (VAR_4)?VAR_4:FUNC_2(VAR_5.machine_guid);

    return (RRDHOST *)FUNC_0(&(VAR_2), (avl *) &VAR_5);
}
