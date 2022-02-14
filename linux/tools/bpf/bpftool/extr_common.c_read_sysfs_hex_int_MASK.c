
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vendor_id_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_6(char *VAR_2)
{
 char VAR_3[8];
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (VAR_5 < 0) {
  FUNC_2("Can't open %s: %s", VAR_2, FUNC_4(VAR_1));
  return -1;
 }

 VAR_4 = FUNC_3(VAR_5, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_5);
 if (VAR_4 < 0) {
  FUNC_2("Can't read %s: %s", VAR_2, FUNC_4(VAR_1));
  return -1;
 }
 if (VAR_4 >= (int)sizeof(VAR_3)) {
  FUNC_2("Value in %s too long", VAR_2);
  return -1;
 }

 VAR_3[VAR_4] = 0;

 return FUNC_5(VAR_3, ((void*)0), 0);
}
