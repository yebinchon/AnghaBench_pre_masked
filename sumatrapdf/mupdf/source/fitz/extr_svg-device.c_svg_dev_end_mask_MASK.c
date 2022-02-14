
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * out; } ;
typedef TYPE_2__ svg_device ;
typedef int fz_output ;
struct TYPE_8__ {int container_len; TYPE_1__* container; } ;
typedef TYPE_3__ fz_device ;
typedef int fz_context ;
struct TYPE_6__ {int user; } ;


 int * FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_device *VAR_1)
{
 svg_device *VAR_2 = (svg_device*)VAR_1;
 fz_output *VAR_3 = VAR_2->out;
 int VAR_4 = 0;

 if (VAR_1->container_len > 0)
  VAR_4 = VAR_1->container[VAR_1->container_len-1].user;

 FUNC_1(VAR_0, VAR_3, "\"/>\n</mask>\n");
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_3, "<g mask=\"url(#ma%d)\">\n", VAR_4);
}
