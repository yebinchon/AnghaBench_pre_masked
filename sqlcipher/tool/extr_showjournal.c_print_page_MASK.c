
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned char*,int,int,char*) ;
 unsigned char* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1){
  unsigned char *VAR_2;
  char VAR_3[50];
  VAR_2 = FUNC_2(VAR_0+8, VAR_1);
  FUNC_3(VAR_3, "page number for page at offset %d", VAR_1);
  FUNC_1(VAR_2-VAR_1, VAR_1, 4, VAR_3);
  FUNC_0(VAR_2);
}
