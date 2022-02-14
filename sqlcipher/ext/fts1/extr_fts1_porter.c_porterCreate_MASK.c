
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_tokenizer ;
struct TYPE_2__ {int base; } ;
typedef TYPE_1__ porter_tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(
  int VAR_2, const char * const *VAR_3,
  sqlite3_tokenizer **VAR_4
){
  porter_tokenizer *VAR_5;
  VAR_5 = (porter_tokenizer *) FUNC_0(sizeof(*VAR_5), 1);
  if( VAR_5==((void*)0) ) return VAR_0;

  *VAR_4 = &VAR_5->base;
  return VAR_1;
}
