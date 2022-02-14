
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int wcnt; char** words; TYPE_2__* dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_6__ {TYPE_4__* irep; scalar_t__ pc; } ;
typedef TYPE_2__ mrb_debug_context ;
typedef int mrb_debug_bptype ;
struct TYPE_7__ {scalar_t__ iseq; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;



 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,TYPE_4__*,scalar_t__) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,char) ;

mrb_debug_bptype
FUNC_8(mrb_state *VAR_5, mrdb_state *VAR_6, const char **VAR_7, uint32_t *VAR_8, char **VAR_9, char **VAR_10)
{
  mrb_debug_context *VAR_11 = VAR_6->dbg;
  char *VAR_12;
  char *VAR_13;
  mrb_debug_bptype VAR_14;
  uint32_t VAR_15;

  if (VAR_6->wcnt <= 1) {
    FUNC_6(VAR_0);
    return 128;
  }

  VAR_12 = VAR_6->words[1];
  if ((VAR_13 = FUNC_7(VAR_12, ':')) == ((void*)0)) {
    VAR_13 = VAR_12;
    VAR_14 = FUNC_3(VAR_13);
  }
  else {
    if (VAR_13 == VAR_12) {
      FUNC_5(VAR_3, VAR_12);
      return 128;
    }
    *VAR_13 = '\0';
    VAR_14 = FUNC_3(++VAR_13);
  }

  switch(VAR_14) {
    case 130:
      FUNC_2(VAR_15, VAR_13);
      if (VAR_15 <= 65535) {
        *VAR_8 = VAR_15;
        *VAR_7 = (VAR_13 == VAR_12)? FUNC_4(VAR_5, VAR_11->irep, VAR_11->pc - VAR_11->irep->iseq): VAR_12;
      }
      else {
        FUNC_6(VAR_4);
        VAR_14 = 128;
      }
      break;
    case 129:
      if (VAR_13 == VAR_12) {

        if (FUNC_1(*VAR_13)||FUNC_0(*VAR_13)||(*VAR_13 == '_')) {
          *VAR_10 = VAR_13;
          *VAR_9 = ((void*)0);
        }
        else {
          FUNC_5(VAR_2, VAR_12);
          VAR_14 = 128;
        }
      }
      else {
        if (FUNC_1(*VAR_12)) {
          switch(*VAR_13) {
            case '@': case '$': case '?': case '.': case ',': case ':':
            case ';': case '#': case '\\': case '\'': case '\"':
            FUNC_5(VAR_2, VAR_13);
            VAR_14 = 128;
            break;
          default:
            *VAR_10 = VAR_13;
            *VAR_9 = VAR_12;
            break;
          }
        }
        else {
          FUNC_5(VAR_1, VAR_12);
          VAR_14 = 128;
        }
      }
      break;
    case 128:
    default:
      break;
  }

  return VAR_14;
}
