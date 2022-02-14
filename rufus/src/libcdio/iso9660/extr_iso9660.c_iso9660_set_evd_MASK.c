
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* version; int id; void* type; } ;
typedef TYPE_1__ iso_volume_descriptor_t ;
typedef int ied ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (void*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 void* FUNC_4 (int ) ;

void
FUNC_5(void *VAR_5)
{
  iso_volume_descriptor_t VAR_6;

  FUNC_0 (sizeof(iso_volume_descriptor_t) == VAR_1);

  FUNC_0 (VAR_5 != ((void*)0));

  FUNC_3(&VAR_6, 0, sizeof(VAR_6));

  VAR_6.type = FUNC_4(VAR_3);
  FUNC_1 (VAR_6.id, VAR_2, sizeof(VAR_6.id),
                       VAR_0);
  VAR_6.version = FUNC_4(VAR_4);

  FUNC_2(VAR_5, &VAR_6, sizeof(VAR_6));
}
