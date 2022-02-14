
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct multiplexReal {scalar_t__ z; } ;
typedef int p ;
struct TYPE_3__ {int nReal; int nName; int flags; scalar_t__ zName; struct multiplexReal* aReal; } ;
typedef TYPE_1__ multiplexGroup ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct multiplexReal*,int ,int) ;
 int FUNC_1 (scalar_t__,int,int ,int,char*) ;
 char* FUNC_2 (int) ;
 struct multiplexReal* FUNC_3 (struct multiplexReal*,int) ;

__attribute__((used)) static int FUNC_4(multiplexGroup *VAR_2, int VAR_3){
  if( VAR_3>=VAR_2->nReal ){
    struct multiplexReal *VAR_4;
    VAR_4 = FUNC_3(VAR_2->aReal, (VAR_3+1)*sizeof(*VAR_4));
    if( VAR_4==0 ){
      return VAR_0;
    }
    FUNC_0(&VAR_4[VAR_2->nReal], 0, sizeof(VAR_4[0])*(VAR_3+1-VAR_2->nReal));
    VAR_2->aReal = VAR_4;
    VAR_2->nReal = VAR_3+1;
  }
  if( VAR_2->zName && VAR_2->aReal[VAR_3].z==0 ){
    char *VAR_5;
    int VAR_6 = VAR_2->nName;
    VAR_2->aReal[VAR_3].z = VAR_5 = FUNC_2( VAR_6+5 );
    if( VAR_5==0 ){
      return VAR_0;
    }
    FUNC_1(VAR_2->zName, VAR_2->nName, VAR_2->flags, VAR_3, VAR_5);
  }
  return VAR_1;
}
