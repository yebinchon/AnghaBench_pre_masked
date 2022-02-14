
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xshm_data {char* server; int use_randr; int use_xinerama; int y_org; int x_org; int cursor; int xcb; int xshm; int height; int width; scalar_t__ advanced; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct xshm_data*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct xshm_data*) ;
 scalar_t__ FUNC_12 (struct xshm_data*) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_14(struct xshm_data *VAR_1)
{
 const char *VAR_2 = (VAR_1->advanced && *VAR_1->server) ? VAR_1->server
              : ((void*)0);

 VAR_1->xcb = FUNC_4(VAR_2, ((void*)0));
 if (!VAR_1->xcb || FUNC_5(VAR_1->xcb)) {
  FUNC_0(VAR_0, "Unable to open X display !");
  goto fail;
 }

 if (!FUNC_10(VAR_1->xcb))
  goto fail;

 VAR_1->use_randr = FUNC_3(VAR_1->xcb) ? 1 : 0;
 VAR_1->use_xinerama = FUNC_8(VAR_1->xcb) ? 1 : 0;

 if (FUNC_12(VAR_1) < 0) {
  FUNC_0(VAR_0, "failed to update geometry !");
  goto fail;
 }

 VAR_1->xshm = FUNC_13(VAR_1->xcb, VAR_1->width, VAR_1->height);
 if (!VAR_1->xshm) {
  FUNC_0(VAR_0, "failed to attach shm !");
  goto fail;
 }

 VAR_1->cursor = FUNC_6(VAR_1->xcb);
 FUNC_7(VAR_1->cursor, VAR_1->x_org, VAR_1->y_org);

 FUNC_1();

 FUNC_11(VAR_1);

 FUNC_2();

 return;
fail:
 FUNC_9(VAR_1);
}
