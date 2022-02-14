
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_3__ {int options; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(xmlParserCtxtPtr VAR_1, int VAR_2) {
    if ((VAR_1->options & VAR_0) == 0) {




 if ((VAR_2 != ' ') && (VAR_2 != '>') && (VAR_2 != '/') &&
     (((VAR_2 >= 'a') && (VAR_2 <= 'z')) ||
      ((VAR_2 >= 'A') && (VAR_2 <= 'Z')) ||
      ((VAR_2 >= '0') && (VAR_2 <= '9')) ||
      (VAR_2 == '_') || (VAR_2 == ':') ||
      (VAR_2 == '-') || (VAR_2 == '.') || (VAR_2 == 0xB7) ||
      ((VAR_2 >= 0xC0) && (VAR_2 <= 0xD6)) ||
      ((VAR_2 >= 0xD8) && (VAR_2 <= 0xF6)) ||
      ((VAR_2 >= 0xF8) && (VAR_2 <= 0x2FF)) ||
      ((VAR_2 >= 0x300) && (VAR_2 <= 0x36F)) ||
      ((VAR_2 >= 0x370) && (VAR_2 <= 0x37D)) ||
      ((VAR_2 >= 0x37F) && (VAR_2 <= 0x1FFF)) ||
      ((VAR_2 >= 0x200C) && (VAR_2 <= 0x200D)) ||
      ((VAR_2 >= 0x203F) && (VAR_2 <= 0x2040)) ||
      ((VAR_2 >= 0x2070) && (VAR_2 <= 0x218F)) ||
      ((VAR_2 >= 0x2C00) && (VAR_2 <= 0x2FEF)) ||
      ((VAR_2 >= 0x3001) && (VAR_2 <= 0xD7FF)) ||
      ((VAR_2 >= 0xF900) && (VAR_2 <= 0xFDCF)) ||
      ((VAR_2 >= 0xFDF0) && (VAR_2 <= 0xFFFD)) ||
      ((VAR_2 >= 0x10000) && (VAR_2 <= 0xEFFFF))))
      return(1);
    } else {
        if ((FUNC_3(VAR_2)) || (FUNC_1(VAR_2)) ||
            (VAR_2 == '.') || (VAR_2 == '-') ||
     (VAR_2 == '_') || (VAR_2 == ':') ||
     (FUNC_0(VAR_2)) ||
     (FUNC_2(VAR_2)))
     return(1);
    }
    return(0);
}
