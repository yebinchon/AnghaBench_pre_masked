
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int root; } ;
typedef TYPE_1__ xcb_screen_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ xcb_screen_iterator_t ;
typedef int xcb_connection_t ;
typedef int Display ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 TYPE_2__ FUNC_7 (int ) ;

__attribute__((used)) static Display *FUNC_8(void)
{
 Display *VAR_1 = FUNC_2(((void*)0));
 xcb_connection_t *VAR_2;
 xcb_screen_iterator_t VAR_3;
 xcb_screen_t *VAR_4;
 int VAR_5;

 if (!VAR_1) {
  FUNC_3(VAR_0, "Unable to open new X connection!");
  return ((void*)0);
 }

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2) {
  FUNC_3(VAR_0, "Unable to get XCB connection to main display");
  goto error;
 }

 VAR_3 = FUNC_7(FUNC_6(VAR_2));
 VAR_4 = VAR_3.data;
 if (!VAR_4) {
  FUNC_3(VAR_0, "Unable to get screen root");
  goto error;
 }

 VAR_5 = FUNC_4(VAR_2, VAR_4->root);
 if (VAR_5 == -1) {
  FUNC_3(VAR_0, "Unable to get screen number from root");
  goto error;
 }

 if (!FUNC_5(VAR_1, VAR_5)) {
  FUNC_3(VAR_0, "Unable to load GLX entry functions.");
  goto error;
 }

 return VAR_1;

error:
 if (VAR_1)
  FUNC_0(VAR_1);
 return ((void*)0);
}
