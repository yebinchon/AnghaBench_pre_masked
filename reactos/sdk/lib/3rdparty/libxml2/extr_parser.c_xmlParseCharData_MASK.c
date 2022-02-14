
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_10__ {int* space; scalar_t__ instate; TYPE_2__* input; int userData; TYPE_1__* sax; } ;
struct TYPE_9__ {int line; int col; int* cur; } ;
struct TYPE_8__ {int (* characters ) (int ,int const*,int) ;int (* ignorableWhitespace ) (int ,int const*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int const*,int,int) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (int ,int const*,int) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (int ,int const*,int) ;
 scalar_t__* VAR_5 ;
 int FUNC_8 (TYPE_3__*,int ,int *) ;
 int FUNC_9 (TYPE_3__*,int) ;

void
FUNC_10(xmlParserCtxtPtr VAR_6, int VAR_7) {
    const xmlChar *VAR_8;
    int VAR_9 = 0;
    int VAR_10 = VAR_6->input->line;
    int VAR_11 = VAR_6->input->col;
    int VAR_12;

    VAR_1;
    VAR_0;




    if (!VAR_7) {
 VAR_8 = VAR_6->input->cur;
 do {
get_more_space:
     while (*VAR_8 == 0x20) { VAR_8++; VAR_6->input->col++; }
     if (*VAR_8 == 0xA) {
  do {
      VAR_6->input->line++; VAR_6->input->col = 1;
      VAR_8++;
  } while (*VAR_8 == 0xA);
  goto get_more_space;
     }
     if (*VAR_8 == '<') {
  VAR_9 = VAR_8 - VAR_6->input->cur;
  if (VAR_9 > 0) {
      const xmlChar *VAR_13 = VAR_6->input->cur;
      VAR_6->input->cur = VAR_8;

      if ((VAR_6->sax != ((void*)0)) &&
          (VAR_6->sax->ignorableWhitespace !=
           VAR_6->sax->characters)) {
   if (FUNC_1(VAR_6, VAR_13, VAR_9, 1)) {
       if (VAR_6->sax->ignorableWhitespace != ((void*)0))
    VAR_6->sax->ignorableWhitespace(VAR_6->userData,
             VAR_13, VAR_9);
   } else {
       if (VAR_6->sax->characters != ((void*)0))
    VAR_6->sax->characters(VAR_6->userData,
            VAR_13, VAR_9);
       if (*VAR_6->space == -1)
           *VAR_6->space = -2;
   }
      } else if ((VAR_6->sax != ((void*)0)) &&
                 (VAR_6->sax->characters != ((void*)0))) {
   VAR_6->sax->characters(VAR_6->userData,
           VAR_13, VAR_9);
      }
  }
  return;
     }

get_more:
            VAR_12 = VAR_6->input->col;
     while (VAR_5[*VAR_8]) {
  VAR_8++;
  VAR_12++;
     }
     VAR_6->input->col = VAR_12;
     if (*VAR_8 == 0xA) {
  do {
      VAR_6->input->line++; VAR_6->input->col = 1;
      VAR_8++;
  } while (*VAR_8 == 0xA);
  goto get_more;
     }
     if (*VAR_8 == ']') {
  if ((VAR_8[1] == ']') && (VAR_8[2] == '>')) {
      FUNC_8(VAR_6, VAR_2, ((void*)0));
      VAR_6->input->cur = VAR_8 + 1;
      return;
  }
  VAR_8++;
  VAR_6->input->col++;
  goto get_more;
     }
     VAR_9 = VAR_8 - VAR_6->input->cur;
     if (VAR_9 > 0) {
  if ((VAR_6->sax != ((void*)0)) &&
      (VAR_6->sax->ignorableWhitespace !=
       VAR_6->sax->characters) &&
      (FUNC_0(*VAR_6->input->cur))) {
      const xmlChar *VAR_14 = VAR_6->input->cur;
      VAR_6->input->cur = VAR_8;

      if (FUNC_1(VAR_6, VAR_14, VAR_9, 0)) {
          if (VAR_6->sax->ignorableWhitespace != ((void*)0))
       VAR_6->sax->ignorableWhitespace(VAR_6->userData,
          VAR_14, VAR_9);
      } else {
          if (VAR_6->sax->characters != ((void*)0))
       VAR_6->sax->characters(VAR_6->userData,
        VAR_14, VAR_9);
   if (*VAR_6->space == -1)
       *VAR_6->space = -2;
      }
                    VAR_10 = VAR_6->input->line;
                    VAR_11 = VAR_6->input->col;
  } else if (VAR_6->sax != ((void*)0)) {
      if (VAR_6->sax->characters != ((void*)0))
   VAR_6->sax->characters(VAR_6->userData,
           VAR_6->input->cur, VAR_9);
                    VAR_10 = VAR_6->input->line;
                    VAR_11 = VAR_6->input->col;
  }

                if (VAR_6->instate != VAR_3)
                    return;
     }
     VAR_6->input->cur = VAR_8;
     if (*VAR_8 == 0xD) {
  VAR_8++;
  if (*VAR_8 == 0xA) {
      VAR_6->input->cur = VAR_8;
      VAR_8++;
      VAR_6->input->line++; VAR_6->input->col = 1;
      continue;
  }
  VAR_8--;
     }
     if (*VAR_8 == '<') {
  return;
     }
     if (*VAR_8 == '&') {
  return;
     }
     VAR_1;
     VAR_0;
            if (VAR_6->instate == VAR_4)
  return;
     VAR_8 = VAR_6->input->cur;
 } while (((*VAR_8 >= 0x20) && (*VAR_8 <= 0x7F)) || (*VAR_8 == 0x09));
 VAR_9 = 0;
    }
    VAR_6->input->line = VAR_10;
    VAR_6->input->col = VAR_11;
    FUNC_9(VAR_6, VAR_7);
}
