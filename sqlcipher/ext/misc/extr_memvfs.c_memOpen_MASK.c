
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_5__ {int * pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_6__ {unsigned char* aData; scalar_t__ sz; scalar_t__ szMax; int bFreeOnClose; } ;
typedef TYPE_2__ MemFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (char const*,char*,int ) ;
 void* FUNC_2 (char const*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vfs *VAR_4,
  const char *VAR_5,
  sqlite3_file *VAR_6,
  int VAR_7,
  int *VAR_8
){
  MemFile *VAR_9 = (MemFile*)VAR_6;
  FUNC_0(VAR_9, 0, sizeof(*VAR_9));
  if( (VAR_7 & VAR_2)==0 ) return VAR_0;
  VAR_9->aData = (unsigned char*)FUNC_2(VAR_5,"ptr",0);
  if( VAR_9->aData==0 ) return VAR_0;
  VAR_9->sz = FUNC_2(VAR_5,"sz",0);
  if( VAR_9->sz<0 ) return VAR_0;
  VAR_9->szMax = FUNC_2(VAR_5,"max",VAR_9->sz);
  if( VAR_9->szMax<VAR_9->sz ) return VAR_0;
  VAR_9->bFreeOnClose = FUNC_1(VAR_5,"freeonclose",0);
  VAR_6->pMethods = &VAR_3;
  return VAR_1;
}
