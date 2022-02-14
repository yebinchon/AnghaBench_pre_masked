
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wlc_param ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (int ,char*,void*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(wlc_param VAR_4, void *VAR_5, void *VAR_6)
{
 int *VAR_7 = (int *) VAR_6;
 char *VAR_8 = *((char **) VAR_5);
 int VAR_9 = 0;

 if (VAR_4 & VAR_2) {
  switch(VAR_4 & VAR_1) {
   case 129:
    VAR_9 = FUNC_2(VAR_3, VAR_8, *VAR_7);
    break;
   case 128:
    VAR_9 = FUNC_1(VAR_3, VAR_8, VAR_6, 6);
    break;
  }
 }
 if (VAR_4 & VAR_0) {
  switch(VAR_4 & VAR_1) {
   case 129:
    VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_7, sizeof(int));
    break;
   case 128:
    VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_6, 6);
    break;
  }
 }

 return VAR_9;
}
