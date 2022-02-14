
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int container_len; TYPE_1__* container; } ;
typedef TYPE_2__ fz_device ;
typedef int fz_context ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_device *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2->container_len == 0 || VAR_2->container[VAR_2->container_len-1].type != VAR_3)
 {
  FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_0, "device calls unbalanced");
 }
 VAR_2->container[VAR_2->container_len-1].type = VAR_4;
}
