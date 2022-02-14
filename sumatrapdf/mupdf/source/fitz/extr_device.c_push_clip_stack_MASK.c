
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_5__ {int container_len; int container_cap; TYPE_3__* container; } ;
typedef TYPE_1__ fz_device ;
typedef int fz_context ;
struct TYPE_6__ {int type; scalar_t__ user; int scissor; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*,int,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_device *VAR_2, fz_rect VAR_3, int VAR_4)
{
 if (VAR_2->container_len == VAR_2->container_cap)
 {
  int VAR_5 = VAR_2->container_cap * 2;
  if (VAR_5 == 0)
   VAR_5 = 4;
  VAR_2->container = FUNC_1(VAR_1, VAR_2->container, VAR_5, VAR_0);
  VAR_2->container_cap = VAR_5;
 }
 if (VAR_2->container_len == 0)
  VAR_2->container[0].scissor = VAR_3;
 else
 {
  VAR_2->container[VAR_2->container_len].scissor = FUNC_0(VAR_2->container[VAR_2->container_len-1].scissor, VAR_3);
 }
 VAR_2->container[VAR_2->container_len].type = VAR_4;
 VAR_2->container[VAR_2->container_len].user = 0;
 VAR_2->container_len++;
}
