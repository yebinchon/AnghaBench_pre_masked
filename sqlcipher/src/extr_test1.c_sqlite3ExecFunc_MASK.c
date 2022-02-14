
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct dstr {int z; int nUsed; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dstr*,int ,int) ;
 int FUNC_1 (int *,char*,int ,struct dstr*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  struct dstr VAR_5;
  FUNC_0(&VAR_5, 0, sizeof(VAR_5));
  (void)FUNC_1((sqlite3*)FUNC_4(VAR_2),
      (char*)FUNC_5(VAR_4[0]),
      VAR_1, &VAR_5, 0);
  FUNC_3(VAR_2, VAR_5.z, VAR_5.nUsed, VAR_0);
  FUNC_2(VAR_5.z);
}
