
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int current; int buff; } ;
struct TYPE_20__ {int * ts; } ;
typedef int TString ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;



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
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int * FUNC_8 (TYPE_2__*,int ,int ) ;
 int * VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,char,TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*,char) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static int FUNC_21 (LexState *VAR_13, SemInfo *VAR_14) {
  FUNC_11(VAR_13->buff);
  for (;;) {
    switch (VAR_13->current) {
      case '\n':
      case '\r': {
        FUNC_2(VAR_13);
        continue;
      }
      case '-': {
        FUNC_13(VAR_13);
        if (VAR_13->current != '-') return '-';

        FUNC_13(VAR_13);
        if (VAR_13->current == '[') {
          int VAR_15 = FUNC_19(VAR_13);
          FUNC_11(VAR_13->buff);
          if (VAR_15 >= 0) {
            FUNC_14(VAR_13, ((void*)0), VAR_15);
            FUNC_11(VAR_13->buff);
            continue;
          }
        }

        while (!FUNC_1(VAR_13) && VAR_13->current != 128)
          FUNC_13(VAR_13);
        continue;
      }
      case '[': {
        int VAR_16 = FUNC_19(VAR_13);
        if (VAR_16 >= 0) {
          FUNC_14(VAR_13, VAR_14, VAR_16);
          return VAR_11;
        }
        else if (VAR_16 == -1) return '[';
        else FUNC_7(VAR_13, "invalid long string delimiter", VAR_11);
      }
      case '=': {
        FUNC_13(VAR_13);
        if (VAR_13->current != '=') return '=';
        else { FUNC_13(VAR_13); return VAR_5; }
      }
      case '<': {
        FUNC_13(VAR_13);
        if (VAR_13->current != '=') return '<';
        else { FUNC_13(VAR_13); return VAR_7; }
      }
      case '>': {
        FUNC_13(VAR_13);
        if (VAR_13->current != '=') return '>';
        else { FUNC_13(VAR_13); return VAR_6; }
      }
      case '~': {
        FUNC_13(VAR_13);
        if (VAR_13->current != '=') return '~';
        else { FUNC_13(VAR_13); return VAR_9; }
      }
      case '"':
      case '\'': {
        FUNC_16(VAR_13, VAR_13->current, VAR_14);
        return VAR_11;
      }
      case '.': {
        FUNC_18(VAR_13);
        if (FUNC_0(VAR_13, ".")) {
          if (FUNC_0(VAR_13, "."))
            return VAR_3;
          else return VAR_2;
        }
        else if (!FUNC_5(VAR_13->current)) return '.';
        else {
          FUNC_15(VAR_13, VAR_14);
          return VAR_10;
        }
      }
      case 128: {
        return VAR_4;
      }
      default: {
        if (FUNC_6(VAR_13->current)) {
          FUNC_12(!FUNC_1(VAR_13));
          FUNC_13(VAR_13);
          continue;
        }
        else if (FUNC_5(VAR_13->current)) {
          FUNC_15(VAR_13, VAR_14);
          return VAR_10;
        }
        else if (FUNC_4(VAR_13->current) || VAR_13->current == '_') {

          TString *VAR_17;
          int VAR_18;
          do {
            FUNC_18(VAR_13);
          } while (FUNC_3(VAR_13->current) || VAR_13->current == '_');

          FUNC_17(VAR_13, '\0');
          for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
            if (!FUNC_20(VAR_12[VAR_18], FUNC_9(VAR_13->buff)))
              return VAR_18 + VAR_0;
          VAR_17 = FUNC_8(VAR_13, FUNC_9(VAR_13->buff),
                                  FUNC_10(VAR_13->buff) - 1);
          VAR_14->ts = VAR_17;
          return VAR_8;
        }
        else {
          int VAR_19 = VAR_13->current;
          FUNC_13(VAR_13);
          return VAR_19;
        }
      }
    }
  }
}
