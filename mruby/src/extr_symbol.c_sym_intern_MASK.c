
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {char const* name; int prev; int lit; scalar_t__ len; } ;
typedef TYPE_1__ symbol_name ;
typedef size_t mrb_sym ;
struct TYPE_10__ {size_t symidx; size_t symcapa; int* symhash; TYPE_1__* symtbl; } ;
typedef TYPE_2__ mrb_state ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_2__*,char const*,size_t,size_t*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,size_t) ;

__attribute__((used)) static mrb_sym
FUNC_6(mrb_state *VAR_3, const char *VAR_4, size_t VAR_5, mrb_bool VAR_6)
{
  mrb_sym VAR_7;
  symbol_name *VAR_8;
  uint8_t VAR_9;

  FUNC_5(VAR_3, VAR_5);
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_9);
  if (VAR_7 > 0) return VAR_7;


  VAR_7 = ++VAR_3->symidx;
  if (VAR_3->symcapa < VAR_7) {
    if (VAR_3->symcapa == 0) VAR_3->symcapa = 100;
    else VAR_3->symcapa = (size_t)(VAR_3->symcapa * 6 / 5);
    VAR_3->symtbl = (symbol_name*)FUNC_3(VAR_3, VAR_3->symtbl, sizeof(symbol_name)*(VAR_3->symcapa+1));
  }
  VAR_8 = &VAR_3->symtbl[VAR_7];
  VAR_8->len = (uint16_t)VAR_5;
  if (VAR_6 || FUNC_4(VAR_4)) {
    VAR_8->name = VAR_4;
    VAR_8->lit = VAR_2;
  }
  else {
    char *VAR_10 = (char *)FUNC_2(VAR_3, VAR_5+1);
    FUNC_1(VAR_10, VAR_4, VAR_5);
    VAR_10[VAR_5] = 0;
    VAR_8->name = (const char*)VAR_10;
    VAR_8->lit = VAR_0;
  }
  if (VAR_3->symhash[VAR_9]) {
    mrb_sym VAR_11 = VAR_7 - VAR_3->symhash[VAR_9];
    if (VAR_11 > 0xff)
      VAR_8->prev = 0xff;
    else
      VAR_8->prev = VAR_11;
  }
  else {
    VAR_8->prev = 0;
  }
  VAR_3->symhash[VAR_9] = VAR_7;

  return VAR_7<<VAR_1;
}
