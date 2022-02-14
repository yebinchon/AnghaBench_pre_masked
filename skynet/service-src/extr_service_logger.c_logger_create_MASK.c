
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {int * filename; scalar_t__ close; int * handle; } ;


 struct logger* FUNC_0 (int) ;

struct logger *
FUNC_1(void) {
 struct logger * VAR_0 = FUNC_0(sizeof(*VAR_0));
 VAR_0->handle = ((void*)0);
 VAR_0->close = 0;
 VAR_0->filename = ((void*)0);

 return VAR_0;
}
