
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t connector_type; int connector_type_id; } ;
typedef TYPE_1__ drmModeConnector ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*,int) ;

__attribute__((used)) static void FUNC_1(const drmModeConnector *VAR_2,
                               char VAR_3[VAR_0])
{
    FUNC_0(VAR_3, VAR_0, "%s-%d",
             VAR_1[VAR_2->connector_type],
             VAR_2->connector_type_id);
}
