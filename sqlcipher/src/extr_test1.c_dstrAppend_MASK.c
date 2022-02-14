
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int nUsed; int nAlloc; char* z; } ;


 int FUNC_0 (int*,char const*,int) ;
 int FUNC_1 (struct dstr*,int ,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct dstr *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3 = (int)FUNC_4(VAR_1);
  if( VAR_0->nUsed + VAR_3 + 2 > VAR_0->nAlloc ){
    char *VAR_4;
    VAR_0->nAlloc = VAR_0->nAlloc*2 + VAR_3 + 200;
    VAR_4 = FUNC_3(VAR_0->z, VAR_0->nAlloc);
    if( VAR_4==0 ){
      FUNC_2(VAR_0->z);
      FUNC_1(VAR_0, 0, sizeof(*VAR_0));
      return;
    }
    VAR_0->z = VAR_4;
  }
  if( VAR_2 && VAR_0->nUsed>0 ){
    VAR_0->z[VAR_0->nUsed++] = VAR_2;
  }
  FUNC_0(&VAR_0->z[VAR_0->nUsed], VAR_1, VAR_3+1);
  VAR_0->nUsed += VAR_3;
}
