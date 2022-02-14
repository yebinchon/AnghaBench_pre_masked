
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sz; scalar_t__ zFilename; scalar_t__ a; scalar_t__ nRef; } ;
typedef TYPE_1__ VFile ;
struct TYPE_6__ {TYPE_1__* aFile; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (scalar_t__,long,int,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,int ) ;
 long FUNC_7 (int *) ;
 TYPE_2__ VAR_2 ;
 void* FUNC_8 (long) ;
 int FUNC_9 (scalar_t__,char const*,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static VFile *FUNC_12(const char *VAR_3, const char *VAR_4){
  VFile *VAR_5 = FUNC_2(VAR_3);
  int VAR_6;
  FILE *VAR_7 = 0;
  long VAR_8 = 0;

  if( VAR_5 ) return VAR_5;
  for(VAR_6=0; VAR_6<VAR_0 && VAR_2.aFile[VAR_6].sz>=0; VAR_6++){}
  if( VAR_6>=VAR_0 ) return 0;
  if( VAR_4 ){
    VAR_7 = FUNC_3(VAR_4, "rb");
    if( VAR_7==0 ) FUNC_0("no such file: \"%s\"", VAR_4);
    FUNC_6(VAR_7, 0, VAR_1);
    VAR_8 = FUNC_7(VAR_7);
    FUNC_10(VAR_7);
  }
  VAR_5 = &VAR_2.aFile[VAR_6];
  if( VAR_3 ){
    int VAR_9 = (int)FUNC_11(VAR_3)+1;
    VAR_5->zFilename = FUNC_8(VAR_9);
    if( VAR_5->zFilename==0 ){
      if( VAR_7 ) FUNC_1(VAR_7);
      return 0;
    }
    FUNC_9(VAR_5->zFilename, VAR_3, VAR_9);
  }else{
    VAR_5->zFilename = 0;
  }
  VAR_5->nRef = 0;
  VAR_5->sz = VAR_8;
  VAR_5->a = FUNC_8(VAR_8);
  if( VAR_8>0 ){
    if( VAR_5->a==0 || FUNC_4(VAR_5->a, VAR_8, 1, VAR_7)<1 ){
      FUNC_5(VAR_5->zFilename);
      FUNC_5(VAR_5->a);
      VAR_5->a = 0;
      VAR_5->zFilename = 0;
      VAR_5->sz = -1;
      VAR_5 = 0;
    }
  }
  if( VAR_7 ) FUNC_1(VAR_7);
  return VAR_5;
}
