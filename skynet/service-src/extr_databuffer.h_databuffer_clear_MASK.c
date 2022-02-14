
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct messagepool {int dummy; } ;
struct databuffer {scalar_t__ head; } ;


 int FUNC_0 (struct databuffer*,struct messagepool*) ;
 int FUNC_1 (struct databuffer*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct databuffer *VAR_0, struct messagepool *VAR_1) {
 while (VAR_0->head) {
  FUNC_0(VAR_0,VAR_1);
 }
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
