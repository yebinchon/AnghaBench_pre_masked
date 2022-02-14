
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {struct logger* filename; int handle; scalar_t__ close; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct logger*) ;

void
FUNC_2(struct logger * VAR_0) {
 if (VAR_0->close) {
  FUNC_0(VAR_0->handle);
 }
 FUNC_1(VAR_0->filename);
 FUNC_1(VAR_0);
}
