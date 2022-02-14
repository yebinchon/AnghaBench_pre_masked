
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xshm_data {int * server; int * xcb; int * xshm; int * cursor; int * texture; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct xshm_data *VAR_0)
{
 FUNC_2();

 if (VAR_0->texture) {
  FUNC_1(VAR_0->texture);
  VAR_0->texture = ((void*)0);
 }
 if (VAR_0->cursor) {
  FUNC_5(VAR_0->cursor);
  VAR_0->cursor = ((void*)0);
 }

 FUNC_3();

 if (VAR_0->xshm) {
  FUNC_6(VAR_0->xshm);
  VAR_0->xshm = ((void*)0);
 }

 if (VAR_0->xcb) {
  FUNC_4(VAR_0->xcb);
  VAR_0->xcb = ((void*)0);
 }

 if (VAR_0->server) {
  FUNC_0(VAR_0->server);
  VAR_0->server = ((void*)0);
 }
}
