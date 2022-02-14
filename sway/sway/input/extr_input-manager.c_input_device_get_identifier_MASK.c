
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_input_device {int vendor; int product; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char const*,int,int,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;

char *FUNC_6(struct wlr_input_device *VAR_1) {
 int VAR_2 = VAR_1->vendor;
 int VAR_3 = VAR_1->product;
 char *VAR_4 = FUNC_3(VAR_1->name);
 FUNC_4(VAR_4);

 char *VAR_5 = VAR_4;
 for (; *VAR_5; ++VAR_5) {
  if (*VAR_5 == ' ') {
   *VAR_5 = '_';
  }
 }

 const char *VAR_6 = "%d:%d:%s";
 int VAR_7 = FUNC_2(((void*)0), 0, VAR_6, VAR_2, VAR_3, VAR_4) + 1;
 char *VAR_8 = FUNC_1(VAR_7);
 if (!VAR_8) {
  FUNC_5(VAR_0, "Unable to allocate unique input device name");
  return ((void*)0);
 }

 FUNC_2(VAR_8, VAR_7, VAR_6, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_4);
 return VAR_8;
}
