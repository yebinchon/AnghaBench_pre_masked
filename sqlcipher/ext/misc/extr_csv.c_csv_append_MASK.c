
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int nAlloc; char* z; } ;
typedef TYPE_1__ CsvReader ;


 int FUNC_0 (TYPE_1__*,char) ;

__attribute__((used)) static int FUNC_1(CsvReader *VAR_0, char VAR_1){
  if( VAR_0->n>=VAR_0->nAlloc-1 ) return FUNC_0(VAR_0, VAR_1);
  VAR_0->z[VAR_0->n++] = VAR_1;
  return 0;
}
