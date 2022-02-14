
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bReopen; int nRepeat; int nRec; int defn; } ;
typedef TYPE_1__ Datatest4 ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,char*,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, Datatest4 *VAR_1){
  char *VAR_2;
  char *VAR_3;
  VAR_3 = FUNC_0(&VAR_1->defn);
  VAR_2 = FUNC_2("data4.%s.%s.%d.%d.%d",
      VAR_0, VAR_3, VAR_1->nRec, VAR_1->nRepeat, VAR_1->bReopen
  );
  FUNC_1(VAR_3);
  return VAR_2;
}
