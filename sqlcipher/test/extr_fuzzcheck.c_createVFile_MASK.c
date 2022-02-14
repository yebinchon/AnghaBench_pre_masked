
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sz; void* a; scalar_t__ nRef; void* zFilename; } ;
typedef TYPE_1__ VFile ;
struct TYPE_6__ {TYPE_1__* aFile; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (void*,...) ;
 void* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static VFile *FUNC_4(const char *VAR_2, int VAR_3, unsigned char *VAR_4){
  VFile *VAR_5 = FUNC_0(VAR_2);
  int VAR_6;
  if( VAR_5 ) return VAR_5;
  for(VAR_6=0; VAR_6<VAR_0 && VAR_1.aFile[VAR_6].sz>=0; VAR_6++){}
  if( VAR_6>=VAR_0 ) return 0;
  VAR_5 = &VAR_1.aFile[VAR_6];
  if( VAR_2 ){
    int VAR_7 = (int)FUNC_3(VAR_2)+1;
    VAR_5->zFilename = FUNC_2(0, VAR_7);
    FUNC_1(VAR_5->zFilename, VAR_2, VAR_7);
  }else{
    VAR_5->zFilename = 0;
  }
  VAR_5->nRef = 0;
  VAR_5->sz = VAR_3;
  VAR_5->a = FUNC_2(0, VAR_3);
  if( VAR_3>0 ) FUNC_1(VAR_5->a, VAR_4, VAR_3);
  return VAR_5;
}
