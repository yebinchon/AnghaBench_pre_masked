
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int prec; scalar_t__ useCnt; int name; scalar_t__ datatype; scalar_t__ destLineno; scalar_t__ destructor; int lambda; scalar_t__ firstset; int assoc; scalar_t__ fallback; scalar_t__ rule; int type; } ;


 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 int FUNC_1 (struct symbol*) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 struct symbol* FUNC_3 (char const*) ;
 int FUNC_4 (struct symbol*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,int) ;

struct symbol *FUNC_6(const char *VAR_4)
{
  struct symbol *VAR_5;

  VAR_5 = FUNC_3(VAR_4);
  if( VAR_5==0 ){
    VAR_5 = (struct symbol *)FUNC_5(1, sizeof(struct symbol) );
    FUNC_1(VAR_5);
    VAR_5->name = FUNC_2(VAR_4);
    VAR_5->type = FUNC_0(*VAR_4) ? VAR_2 : VAR_1;
    VAR_5->rule = 0;
    VAR_5->fallback = 0;
    VAR_5->prec = -1;
    VAR_5->assoc = VAR_3;
    VAR_5->firstset = 0;
    VAR_5->lambda = VAR_0;
    VAR_5->destructor = 0;
    VAR_5->destLineno = 0;
    VAR_5->datatype = 0;
    VAR_5->useCnt = 0;
    FUNC_4(VAR_5,VAR_5->name);
  }
  VAR_5->useCnt++;
  return VAR_5;
}
