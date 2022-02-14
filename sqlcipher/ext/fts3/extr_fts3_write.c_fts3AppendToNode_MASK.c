
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; char* a; int nAlloc; } ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (char*,int,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(
  Blob *VAR_1,
  Blob *VAR_2,
  const char *VAR_3,
  int VAR_4,
  const char *VAR_5,
  int VAR_6
){
  int VAR_7 = VAR_0;
  int VAR_8 = (VAR_2->n==0);
  int VAR_9;
  int VAR_10;



  FUNC_0( VAR_1->n>0 );
  FUNC_0( (VAR_1->a[0]=='\0')==(VAR_5!=0) );

  FUNC_1(VAR_2, VAR_4, &VAR_7);
  if( VAR_7!=VAR_0 ) return VAR_7;

  VAR_9 = FUNC_2(VAR_2->a, VAR_2->n, VAR_3, VAR_4);
  VAR_10 = VAR_4 - VAR_9;
  FUNC_3(VAR_2->a, VAR_3, VAR_4);
  VAR_2->n = VAR_4;

  if( VAR_8==0 ){
    VAR_1->n += FUNC_4(&VAR_1->a[VAR_1->n], VAR_9);
  }
  VAR_1->n += FUNC_4(&VAR_1->a[VAR_1->n], VAR_10);
  FUNC_3(&VAR_1->a[VAR_1->n], &VAR_3[VAR_9], VAR_10);
  VAR_1->n += VAR_10;

  if( VAR_5 ){
    VAR_1->n += FUNC_4(&VAR_1->a[VAR_1->n], VAR_6);
    FUNC_3(&VAR_1->a[VAR_1->n], VAR_5, VAR_6);
    VAR_1->n += VAR_6;
  }

  FUNC_0( VAR_1->n<=VAR_1->nAlloc );

  return VAR_0;
}
