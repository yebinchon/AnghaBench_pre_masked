
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
typedef int Vdbe ;
struct TYPE_7__ {int iValue; char* zToken; } ;
struct TYPE_9__ {int flags; TYPE_1__ u; } ;
struct TYPE_8__ {int * pVdbe; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int,int) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (TYPE_2__*,char*,char*,char const*) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int *,int ,int ,int,int ,int *,int ) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_7(Parse *VAR_5, Expr *VAR_6, int VAR_7, int VAR_8){
  Vdbe *VAR_9 = VAR_5->pVdbe;
  if( VAR_6->flags & VAR_0 ){
    int VAR_10 = VAR_6->u.iValue;
    FUNC_0( VAR_10>=0 );
    if( VAR_7 ) VAR_10 = -VAR_10;
    FUNC_4(VAR_9, VAR_2, VAR_10, VAR_8);
  }else{
    int VAR_11;
    i64 VAR_12;
    const char *VAR_13 = VAR_6->u.zToken;
    FUNC_0( VAR_13!=0 );
    VAR_11 = FUNC_2(VAR_13, &VAR_12);
    if( VAR_11==1 || (VAR_11==2 && !VAR_7) || (VAR_7 && VAR_12==VAR_4)){




      if( FUNC_6(VAR_13,"0x",2)==0 ){
        FUNC_3(VAR_5, "hex literal too big: %s%s", VAR_7?"-":"",VAR_13);
      }else

      {
        FUNC_1(VAR_9, VAR_13, VAR_7, VAR_8);
      }

    }else{
      if( VAR_7 ){ VAR_12 = VAR_11==2 ? VAR_4 : -VAR_12; }
      FUNC_5(VAR_9, VAR_1, 0, VAR_8, 0, (u8*)&VAR_12, VAR_3);
    }
  }
}
