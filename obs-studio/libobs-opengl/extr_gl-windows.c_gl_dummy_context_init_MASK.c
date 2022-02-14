
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_context {int hrc; int hdc; int hwnd; } ;
typedef int PIXELFORMATDESCRIPTOR ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct dummy_context *VAR_1)
{
 PIXELFORMATDESCRIPTOR VAR_2;
 int VAR_3;

 if (!FUNC_7())
  return 0;

 VAR_1->hwnd = FUNC_5();
 if (!VAR_1->hwnd)
  return 0;

 VAR_1->hdc = FUNC_1(VAR_1->hwnd);

 FUNC_8(&VAR_2);
 VAR_3 = FUNC_0(VAR_1->hdc, &VAR_2);
 if (!VAR_3) {
  FUNC_4(VAR_0, "Dummy ChoosePixelFormat failed, %lu",
       FUNC_2());
  return 0;
 }

 if (!FUNC_3(VAR_1->hdc, VAR_3, &VAR_2)) {
  FUNC_4(VAR_0, "Dummy SetPixelFormat failed, %lu",
       FUNC_2());
  return 0;
 }

 VAR_1->hrc = FUNC_6(VAR_1->hdc);
 if (!VAR_1->hrc) {
  FUNC_4(VAR_0, "Failed to initialize dummy context");
  return 0;
 }

 return 1;
}
