
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int g ;
struct TYPE_6__ {int bTrace; char* zErr; scalar_t__ f; int iRoot; int iCol; int szPg; } ;
typedef TYPE_1__ GState ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(int VAR_1, char **VAR_2){
  GState VAR_3;
  FUNC_3(&VAR_3, 0, sizeof(VAR_3));
  if( VAR_1>2 && FUNC_7(VAR_2[1],"--trace")==0 ){
    VAR_3.bTrace = 1;
    VAR_1--;
    VAR_2++;
  }
  if( VAR_1!=4 ){
    FUNC_2(VAR_0, "Usage: %s DATABASE TABLE COLUMN\n", *VAR_2);
    FUNC_0(1);
  }
  FUNC_4(&VAR_3, VAR_2[1], VAR_2[2], VAR_2[3]);
  if( VAR_3.zErr ){
    FUNC_2(VAR_0, "%s\n", VAR_3.zErr);
    FUNC_0(1);
  }
  FUNC_5(&VAR_3, "# szPg = %d\n", VAR_3.szPg);
  FUNC_5(&VAR_3, "# iRoot = %d\n", VAR_3.iRoot);
  FUNC_5(&VAR_3, "# iCol = %d\n", VAR_3.iCol);
  VAR_3.f = FUNC_1(VAR_2[1], "rb");
  if( VAR_3.f==0 ){
    FUNC_2(VAR_0, "cannot open \"%s\"\n", VAR_2[1]);
    FUNC_0(1);
  }
  FUNC_6(&VAR_3, VAR_3.iRoot);
  if( VAR_3.zErr ){
    FUNC_2(VAR_0, "%s\n", VAR_3.zErr);
    FUNC_0(1);
  }
  return 0;
}
