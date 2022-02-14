
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_init_data {int dummy; } ;
struct gl_windowinfo {int hdc; } ;
typedef int PIXELFORMATDESCRIPTOR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct gs_init_data const*,int*,int *) ;
 int FUNC_2 (int ,int,int *) ;
 struct gl_windowinfo* FUNC_3 (struct gs_init_data const*) ;
 int FUNC_4 (struct gl_windowinfo*) ;

struct gl_windowinfo *FUNC_5(const struct gs_init_data *VAR_1)
{
 struct gl_windowinfo *VAR_2 = FUNC_3(VAR_1);
 PIXELFORMATDESCRIPTOR VAR_3;
 int VAR_4;

 if (!VAR_2)
  return ((void*)0);

 if (!FUNC_1(VAR_2->hdc, VAR_1, &VAR_4, &VAR_3))
  goto fail;
 if (!FUNC_2(VAR_2->hdc, VAR_4, &VAR_3))
  goto fail;

 return VAR_2;

fail:
 FUNC_0(VAR_0, "gl_windowinfo_create failed");
 FUNC_4(VAR_2);
 return ((void*)0);
}
