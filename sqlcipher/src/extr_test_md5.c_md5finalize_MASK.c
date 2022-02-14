
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_context ;
typedef int MD5Context ;


 int FUNC_0 (unsigned char*,char*) ;
 int FUNC_1 (unsigned char*,int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_4(sqlite3_context *VAR_1){
  MD5Context *VAR_2;
  unsigned char VAR_3[16];
  char VAR_4[33];
  VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_2));
  FUNC_1(VAR_3,VAR_2);
  FUNC_0(VAR_3, VAR_4);
  FUNC_3(VAR_1, VAR_4, -1, VAR_0);
}
