
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nVerify; int nRow; int defn; } ;
typedef TYPE_1__ Datatest1 ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,char*,int,int ,int ) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, int VAR_1, Datatest1 *VAR_2){
  char *VAR_3;
  char *VAR_4;
  VAR_4 = FUNC_0(&VAR_2->defn);
  VAR_3 = FUNC_2("data.%s.%s.rec=%d.%d.%d",
      VAR_0, VAR_4, VAR_1, VAR_2->nRow, VAR_2->nVerify
  );
  FUNC_1(VAR_4);
  return VAR_3;
}
