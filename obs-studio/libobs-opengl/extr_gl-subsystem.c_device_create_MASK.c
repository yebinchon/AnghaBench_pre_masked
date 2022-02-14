
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_device {int * cur_swap; int empty_vao; int plat; } ;
typedef struct gs_device gs_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gs_device*) ;
 int FUNC_1 (int ,char*,...) ;
 struct gs_device* FUNC_2 (int) ;
 int FUNC_3 (struct gs_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct gs_device*) ;
 int FUNC_8 (struct gs_device*,int ) ;

int FUNC_9(gs_device_t **VAR_10, uint32_t VAR_11)
{
 struct gs_device *VAR_12 = FUNC_2(sizeof(struct gs_device));
 int VAR_13 = VAR_5;

 FUNC_1(VAR_9, "---------------------------------");
 FUNC_1(VAR_9, "Initializing OpenGL...");

 VAR_12->plat = FUNC_8(VAR_12, VAR_11);
 if (!VAR_12->plat)
  goto fail;

 const char *VAR_14 = (const char *)FUNC_4(VAR_3);
 const char *VAR_15 = (const char *)FUNC_4(VAR_1);

 FUNC_1(VAR_9, "Loading up OpenGL on adapter %s %s", VAR_14,
      VAR_15);

 if (!FUNC_7(VAR_12)) {
  VAR_13 = VAR_6;
  goto fail;
 }

 const char *VAR_16 = (const char *)FUNC_4(VAR_4);
 const char *VAR_17 =
  (const char *)FUNC_4(VAR_2);

 FUNC_1(VAR_9,
      "OpenGL loaded successfully, version %s, shading "
      "language %s",
      VAR_16, VAR_17);

 FUNC_5(VAR_0);
 FUNC_6(1, &VAR_12->empty_vao);

 FUNC_3(VAR_12);
 VAR_12->cur_swap = ((void*)0);
 *VAR_10 = VAR_12;
 return VAR_7;

fail:
 FUNC_1(VAR_8, "device_create (GL) failed");
 FUNC_0(VAR_12);

 *VAR_10 = ((void*)0);
 return VAR_13;
}
