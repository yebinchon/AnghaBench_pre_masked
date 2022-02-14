
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_tokenizer ;
struct TYPE_4__ {int* delim; int base; } ;
typedef TYPE_1__ simple_tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const* const) ;

__attribute__((used)) static int FUNC_4(
  int VAR_3, const char * const *VAR_4,
  sqlite3_tokenizer **VAR_5
){
  simple_tokenizer *VAR_6;

  VAR_6 = (simple_tokenizer *) FUNC_2(sizeof(*VAR_6));
  if( VAR_6==((void*)0) ) return VAR_1;
  FUNC_0(VAR_6, 0, sizeof(*VAR_6));






  if( VAR_3>1 ){
    int VAR_7, VAR_8 = FUNC_3(VAR_4[1]);
    for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
      unsigned char VAR_9 = VAR_4[1][VAR_7];

      if( VAR_9>=0x80 ){
        FUNC_1(VAR_6);
        return VAR_0;
      }
      VAR_6->delim[VAR_9] = 1;
    }
  } else {

    int VAR_10;
    for(VAR_10=1; VAR_10<0x80; VAR_10++){
      VAR_6->delim[VAR_10] = !((VAR_10>='0' && VAR_10<='9') || (VAR_10>='A' && VAR_10<='Z') ||
                      (VAR_10>='a' && VAR_10<='z'));
    }
  }

  *VAR_5 = &VAR_6->base;
  return VAR_2;
}
