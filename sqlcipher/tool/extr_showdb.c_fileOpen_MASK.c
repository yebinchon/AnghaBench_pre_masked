
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dbfd; scalar_t__ bRaw; int pDb; int pFd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,char const*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int ,char*,int ,void*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(const char *VAR_5, const char *VAR_6){
  FUNC_0( VAR_3.dbfd<0 );
  if( VAR_3.bRaw==0 ){
    int VAR_7;
    void *VAR_8 = (void *)(&VAR_3.pFd);
    VAR_3.pDb = FUNC_4(VAR_5, VAR_6);
    VAR_7 = FUNC_5(VAR_3.pDb, "main", VAR_1, VAR_8);
    if( VAR_7!=VAR_2 ){
      FUNC_2(VAR_4,
          "%s: failed to obtain fd for %s (SQLite too old?)\n", VAR_5, VAR_6
      );
      FUNC_1(1);
    }
  }else{
    VAR_3.dbfd = FUNC_3(VAR_6, VAR_0);
    if( VAR_3.dbfd<0 ){
      FUNC_2(VAR_4,"%s: can't open %s\n", VAR_5, VAR_6);
      FUNC_1(1);
    }
  }
}
