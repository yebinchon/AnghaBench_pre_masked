
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int pCursor ;
struct TYPE_6__ {int nSnippet; int zSnippet; } ;
struct TYPE_7__ {TYPE_1__ snippet; } ;
typedef TYPE_2__ fulltext_cursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__**,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*,char const*,char const*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  fulltext_cursor *VAR_5;
  if( VAR_3<1 ) return;
  if( FUNC_8(VAR_4[0])!=VAR_0 ||
      FUNC_6(VAR_4[0])!=sizeof(VAR_5) ){
    FUNC_3(VAR_2, "illegal first argument to html_snippet",-1);
  }else{
    const char *VAR_6 = "<b>";
    const char *VAR_7 = "</b>";
    const char *VAR_8 = "<b>...</b>";
    FUNC_0(&VAR_5, FUNC_5(VAR_4[0]), sizeof(VAR_5));
    if( VAR_3>=2 ){
      VAR_6 = (const char*)FUNC_7(VAR_4[1]);
      if( VAR_3>=3 ){
        VAR_7 = (const char*)FUNC_7(VAR_4[2]);
        if( VAR_3>=4 ){
          VAR_8 = (const char*)FUNC_7(VAR_4[3]);
        }
      }
    }
    FUNC_1(VAR_5);
    FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_4(VAR_2, VAR_5->snippet.zSnippet,
                        VAR_5->snippet.nSnippet, VAR_1);
  }
}
