
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* p; int n; } ;
typedef TYPE_1__ Fts5Token ;
typedef int Fts5Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static int FUNC_4(
  Fts5Parse *VAR_15,
  const char **VAR_16,
  Fts5Token *VAR_17
){
  const char *VAR_18 = *VAR_16;
  int VAR_19;


  while( FUNC_0(*VAR_18) ) VAR_18++;

  VAR_17->p = VAR_18;
  VAR_17->n = 1;
  switch( *VAR_18 ){
    case '(': VAR_19 = VAR_6; break;
    case ')': VAR_19 = VAR_12; break;
    case '{': VAR_19 = VAR_5; break;
    case '}': VAR_19 = VAR_11; break;
    case ':': VAR_19 = VAR_2; break;
    case ',': VAR_19 = VAR_3; break;
    case '+': VAR_19 = VAR_10; break;
    case '*': VAR_19 = VAR_13; break;
    case '-': VAR_19 = VAR_7; break;
    case '^': VAR_19 = VAR_1; break;
    case '\0': VAR_19 = VAR_4; break;

    case '"': {
      const char *VAR_20;
      VAR_19 = VAR_14;

      for(VAR_20=&VAR_18[1]; 1; VAR_20++){
        if( VAR_20[0]=='"' ){
          VAR_20++;
          if( VAR_20[0]!='"' ) break;
        }
        if( VAR_20[0]=='\0' ){
          FUNC_3(VAR_15, "unterminated string");
          return VAR_4;
        }
      }
      VAR_17->n = (VAR_20 - VAR_18);
      break;
    }

    default: {
      const char *VAR_21;
      if( FUNC_2(VAR_18[0])==0 ){
        FUNC_3(VAR_15, "fts5: syntax error near \"%.1s\"", VAR_18);
        return VAR_4;
      }
      VAR_19 = VAR_14;
      for(VAR_21=&VAR_18[1]; FUNC_2(*VAR_21); VAR_21++);
      VAR_17->n = (VAR_21 - VAR_18);
      if( VAR_17->n==2 && FUNC_1(VAR_17->p, "OR", 2)==0 ) VAR_19 = VAR_9;
      if( VAR_17->n==3 && FUNC_1(VAR_17->p, "NOT", 3)==0 ) VAR_19 = VAR_8;
      if( VAR_17->n==3 && FUNC_1(VAR_17->p, "AND", 3)==0 ) VAR_19 = VAR_0;
      break;
    }
  }

  *VAR_16 = &VAR_17->p[VAR_17->n];
  return VAR_19;
}
