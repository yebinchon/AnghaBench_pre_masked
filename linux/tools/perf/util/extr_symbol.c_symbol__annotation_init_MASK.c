
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotation {int dummy; } ;
struct TYPE_2__ {int init_annotation; int priv_size; scalar_t__ initialized; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void)
{
 if (VAR_0.init_annotation)
  return 0;

 if (VAR_0.initialized) {
  FUNC_0("Annotation needs to be init before symbol__init()\n");
  return -1;
 }

 VAR_0.priv_size += sizeof(struct annotation);
 VAR_0.init_annotation = 1;
 return 0;
}
