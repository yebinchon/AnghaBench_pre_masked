
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef char xmlChar ;
struct TYPE_8__ {scalar_t__ instate; int options; TYPE_1__* input; } ;
struct TYPE_7__ {int line; int col; char* end; char* base; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 char* FUNC_2 (TYPE_2__*,int*,int) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static xmlChar *
FUNC_4(xmlParserCtxtPtr VAR_8, int *VAR_9, int *VAR_10,
                         int VAR_11)
{
    xmlChar VAR_12 = 0;
    const xmlChar *VAR_13 = ((void*)0), *VAR_14, *VAR_15, *VAR_16;
    xmlChar *VAR_17 = ((void*)0);
    int VAR_18, VAR_19;

    VAR_1;
    VAR_13 = (xmlChar *) VAR_0;
    VAR_18 = VAR_8->input->line;
    VAR_19 = VAR_8->input->col;
    if (*VAR_13 != '"' && *VAR_13 != '\'') {
        FUNC_0(VAR_8, VAR_3, ((void*)0));
        return (((void*)0));
    }
    VAR_8->instate = VAR_5;






    VAR_12 = *VAR_13++;
    VAR_19++;
    VAR_15 = VAR_8->input->end;
    VAR_14 = VAR_13;
    if (VAR_13 >= VAR_15) {
        const xmlChar *VAR_20 = VAR_8->input->base;
 VAR_1;
 if (VAR_20 != VAR_8->input->base) {
     long VAR_21 = VAR_8->input->base - VAR_20;
     VAR_14 = VAR_14 + VAR_21;
     VAR_13 = VAR_13 + VAR_21;
 }
 VAR_15 = VAR_8->input->end;
    }
    if (VAR_11) {



 while ((VAR_13 < VAR_15) && (*VAR_13 != VAR_12) &&
        ((*VAR_13 == 0x20) || (*VAR_13 == 0x9) ||
         (*VAR_13 == 0xA) || (*VAR_13 == 0xD))) {
     if (*VAR_13 == 0xA) {
         VAR_18++; VAR_19 = 1;
     } else {
         VAR_19++;
     }
     VAR_13++;
     VAR_14 = VAR_13;
     if (VAR_13 >= VAR_15) {
  const xmlChar *VAR_22 = VAR_8->input->base;
  VAR_1;
                if (VAR_8->instate == VAR_6)
                    return(((void*)0));
  if (VAR_22 != VAR_8->input->base) {
      long VAR_23 = VAR_8->input->base - VAR_22;
      VAR_14 = VAR_14 + VAR_23;
      VAR_13 = VAR_13 + VAR_23;
  }
  VAR_15 = VAR_8->input->end;
                if (((VAR_13 - VAR_14) > VAR_4) &&
                    ((VAR_8->options & VAR_7) == 0)) {
                    FUNC_1(VAR_8, VAR_2,
                                   "AttValue length too long\n");
                    return(((void*)0));
                }
     }
 }
 while ((VAR_13 < VAR_15) && (*VAR_13 != VAR_12) && (*VAR_13 >= 0x20) &&
        (*VAR_13 <= 0x7f) && (*VAR_13 != '&') && (*VAR_13 != '<')) {
     VAR_19++;
     if ((*VAR_13++ == 0x20) && (*VAR_13 == 0x20)) break;
     if (VAR_13 >= VAR_15) {
  const xmlChar *VAR_24 = VAR_8->input->base;
  VAR_1;
                if (VAR_8->instate == VAR_6)
                    return(((void*)0));
  if (VAR_24 != VAR_8->input->base) {
      long VAR_25 = VAR_8->input->base - VAR_24;
      VAR_14 = VAR_14 + VAR_25;
      VAR_13 = VAR_13 + VAR_25;
  }
  VAR_15 = VAR_8->input->end;
                if (((VAR_13 - VAR_14) > VAR_4) &&
                    ((VAR_8->options & VAR_7) == 0)) {
                    FUNC_1(VAR_8, VAR_2,
                                   "AttValue length too long\n");
                    return(((void*)0));
                }
     }
 }
 VAR_16 = VAR_13;



 while ((VAR_16[-1] == 0x20) && (VAR_16 > VAR_14)) VAR_16--;
 while ((VAR_13 < VAR_15) && (*VAR_13 != VAR_12) &&
        ((*VAR_13 == 0x20) || (*VAR_13 == 0x9) ||
         (*VAR_13 == 0xA) || (*VAR_13 == 0xD))) {
     if (*VAR_13 == 0xA) {
         VAR_18++, VAR_19 = 1;
     } else {
         VAR_19++;
     }
     VAR_13++;
     if (VAR_13 >= VAR_15) {
  const xmlChar *VAR_26 = VAR_8->input->base;
  VAR_1;
                if (VAR_8->instate == VAR_6)
                    return(((void*)0));
  if (VAR_26 != VAR_8->input->base) {
      long VAR_27 = VAR_8->input->base - VAR_26;
      VAR_14 = VAR_14 + VAR_27;
      VAR_13 = VAR_13 + VAR_27;
      VAR_16 = VAR_16 + VAR_27;
  }
  VAR_15 = VAR_8->input->end;
                if (((VAR_13 - VAR_14) > VAR_4) &&
                    ((VAR_8->options & VAR_7) == 0)) {
                    FUNC_1(VAR_8, VAR_2,
                                   "AttValue length too long\n");
                    return(((void*)0));
                }
     }
 }
        if (((VAR_13 - VAR_14) > VAR_4) &&
            ((VAR_8->options & VAR_7) == 0)) {
            FUNC_1(VAR_8, VAR_2,
                           "AttValue length too long\n");
            return(((void*)0));
        }
 if (*VAR_13 != VAR_12) goto need_complex;
    } else {
 while ((VAR_13 < VAR_15) && (*VAR_13 != VAR_12) && (*VAR_13 >= 0x20) &&
        (*VAR_13 <= 0x7f) && (*VAR_13 != '&') && (*VAR_13 != '<')) {
     VAR_13++;
     VAR_19++;
     if (VAR_13 >= VAR_15) {
  const xmlChar *VAR_28 = VAR_8->input->base;
  VAR_1;
                if (VAR_8->instate == VAR_6)
                    return(((void*)0));
  if (VAR_28 != VAR_8->input->base) {
      long VAR_29 = VAR_8->input->base - VAR_28;
      VAR_14 = VAR_14 + VAR_29;
      VAR_13 = VAR_13 + VAR_29;
  }
  VAR_15 = VAR_8->input->end;
                if (((VAR_13 - VAR_14) > VAR_4) &&
                    ((VAR_8->options & VAR_7) == 0)) {
                    FUNC_1(VAR_8, VAR_2,
                                   "AttValue length too long\n");
                    return(((void*)0));
                }
     }
 }
 VAR_16 = VAR_13;
        if (((VAR_13 - VAR_14) > VAR_4) &&
            ((VAR_8->options & VAR_7) == 0)) {
            FUNC_1(VAR_8, VAR_2,
                           "AttValue length too long\n");
            return(((void*)0));
        }
 if (*VAR_13 != VAR_12) goto need_complex;
    }
    VAR_13++;
    VAR_19++;
    if (VAR_9 != ((void*)0)) {
        *VAR_9 = VAR_16 - VAR_14;
        VAR_17 = (xmlChar *) VAR_14;
    } else {
        if (VAR_10) *VAR_10 = 1;
        VAR_17 = FUNC_3(VAR_14, VAR_16 - VAR_14);
    }
    VAR_0 = VAR_13;
    VAR_8->input->line = VAR_18;
    VAR_8->input->col = VAR_19;
    if (VAR_10) *VAR_10 = 0;
    return VAR_17;
need_complex:
    if (VAR_10) *VAR_10 = 1;
    return FUNC_2(VAR_8, VAR_9, VAR_11);
}
