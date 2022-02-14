
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_7__ {scalar_t__ rSub; scalar_t__ rIns; scalar_t__ rDel; int zClassName; } ;
typedef TYPE_1__ amatch_vtab ;
struct TYPE_8__ {int iLang; scalar_t__ rCost; void* nTo; int * zTo; int * zFrom; void* nFrom; } ;
typedef TYPE_2__ amatch_rule ;
typedef void* amatch_len ;
typedef scalar_t__ amatch_cost ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 TYPE_2__* FUNC_5 (int) ;
 char* FUNC_6 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(
  amatch_vtab *VAR_6,
  sqlite3_stmt *VAR_7,
  amatch_rule **VAR_8,
  char **VAR_9
){
  sqlite3_int64 VAR_10 = FUNC_3(VAR_7, 0);
  const char *VAR_11 = (const char *)FUNC_4(VAR_7, 1);
  const char *VAR_12 = (const char *)FUNC_4(VAR_7, 2);
  amatch_cost VAR_13 = FUNC_2(VAR_7, 3);

  int VAR_14 = VAR_5;
  int VAR_15;
  int VAR_16;
  amatch_rule *VAR_17 = 0;

  if( VAR_11==0 ) VAR_11 = "";
  if( VAR_12==0 ) VAR_12 = "";
  VAR_15 = (int)FUNC_8(VAR_11);
  VAR_16 = (int)FUNC_8(VAR_12);


  if( FUNC_7(VAR_11, VAR_12)==0 ){
    if( VAR_11[0]=='?' && VAR_11[1]==0 ){
      if( VAR_6->rSub==0 || VAR_6->rSub>VAR_13 ) VAR_6->rSub = VAR_13;
    }
    *VAR_8 = 0;
    return VAR_5;
  }

  if( VAR_13<=0 || VAR_13>VAR_0 ){
    *VAR_9 = FUNC_6("%s: cost must be between 1 and %d",
        VAR_6->zClassName, VAR_0
    );
    VAR_14 = VAR_3;
  }else
  if( VAR_15>VAR_2 || VAR_16>VAR_2 ){
    *VAR_9 = FUNC_6("%s: maximum string length is %d",
        VAR_6->zClassName, VAR_2
    );
    VAR_14 = VAR_3;
  }else
  if( VAR_10<0 || VAR_10>VAR_1 ){
    *VAR_9 = FUNC_6("%s: iLang must be between 0 and %d",
        VAR_6->zClassName, VAR_1
    );
    VAR_14 = VAR_3;
  }else
  if( FUNC_7(VAR_11,"")==0 && FUNC_7(VAR_12,"?")==0 ){
    if( VAR_6->rIns==0 || VAR_6->rIns>VAR_13 ) VAR_6->rIns = VAR_13;
  }else
  if( FUNC_7(VAR_11,"?")==0 && FUNC_7(VAR_12,"")==0 ){
    if( VAR_6->rDel==0 || VAR_6->rDel>VAR_13 ) VAR_6->rDel = VAR_13;
  }else
  {
    VAR_17 = FUNC_5( sizeof(*VAR_17) + VAR_15 + VAR_16 );
    if( VAR_17==0 ){
      VAR_14 = VAR_4;
    }else{
      FUNC_1(VAR_17, 0, sizeof(*VAR_17));
      VAR_17->zFrom = &VAR_17->zTo[VAR_16+1];
      VAR_17->nFrom = (amatch_len)VAR_15;
      FUNC_0(VAR_17->zFrom, VAR_11, VAR_15+1);
      FUNC_0(VAR_17->zTo, VAR_12, VAR_16+1);
      VAR_17->nTo = (amatch_len)VAR_16;
      VAR_17->rCost = VAR_13;
      VAR_17->iLang = (int)VAR_10;
    }
  }

  *VAR_8 = VAR_17;
  return VAR_14;
}
