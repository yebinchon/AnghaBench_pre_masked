
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int synctex_status_t ;
typedef int synctex_scanner_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

synctex_status_t FUNC_3(synctex_scanner_t VAR_6) {
    unsigned int VAR_7 = 0;
deeper:
    ++VAR_7;
    if (FUNC_2(VAR_6)<VAR_5) {
        FUNC_1("Unexpected end of nested sheet (1).");
        FUNC_0(VAR_4);
    }
scan_next_line:
    if (VAR_2<VAR_3) {
  if (*VAR_2 == VAR_1) {
   ++VAR_2;
   if (FUNC_2(VAR_6)<VAR_5) {
    FUNC_1("Unexpected end of nested sheet (2).");
    FUNC_0(VAR_4);
   }
            if (--VAR_7>0) {
                goto scan_next_line;
            } else {
             FUNC_0(VAR_5);
            }
  } else if (*VAR_2 == VAR_0) {
   ++VAR_2;
   goto deeper;

  } else if (FUNC_2(VAR_6)<VAR_5) {
            FUNC_1("Unexpected end of nested sheet (3).");
            FUNC_0(VAR_4);
        }
    }
    FUNC_1("Unexpected end of nested sheet (4).");
    FUNC_0(VAR_4);
}
