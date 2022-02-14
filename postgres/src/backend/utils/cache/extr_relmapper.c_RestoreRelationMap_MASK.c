
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ num_mappings; } ;
struct TYPE_9__ {scalar_t__ num_mappings; } ;
struct TYPE_8__ {scalar_t__ num_mappings; } ;
struct TYPE_7__ {scalar_t__ num_mappings; } ;
struct TYPE_6__ {TYPE_5__ active_local_updates; TYPE_4__ active_shared_updates; } ;
typedef TYPE_1__ SerializedActiveRelMaps ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;

void
FUNC_1(char *VAR_5)
{
 SerializedActiveRelMaps *VAR_6;

 if (VAR_2.num_mappings != 0 ||
  VAR_1.num_mappings != 0 ||
  VAR_4.num_mappings != 0 ||
  VAR_3.num_mappings != 0)
  FUNC_0(VAR_0, "parallel worker has existing mappings");

 VAR_6 = (SerializedActiveRelMaps *) VAR_5;
 VAR_2 = VAR_6->active_shared_updates;
 VAR_1 = VAR_6->active_local_updates;
}
