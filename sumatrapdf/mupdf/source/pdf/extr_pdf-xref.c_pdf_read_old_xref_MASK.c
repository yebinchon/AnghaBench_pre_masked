
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int num; int ofs; int gen; int type; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef scalar_t__ pdf_token ;
typedef int pdf_obj ;
struct TYPE_14__ {char* scratch; int size; } ;
typedef TYPE_2__ pdf_lexbuf ;
struct TYPE_15__ {int has_old_style_xrefs; int * file; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 size_t FUNC_2 (int *,int *,unsigned char*,int) ;
 int FUNC_3 (int *,int *,char*,int ) ;
 int FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (char**,char*) ;
 int FUNC_8 (int *,int ,char*,...) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (char) ;
 scalar_t__ FUNC_12 (char) ;
 scalar_t__ FUNC_13 (int *,int *,TYPE_2__*) ;
 int * FUNC_14 (int *,TYPE_3__*,int *,TYPE_2__*) ;
 TYPE_1__* FUNC_15 (int *,TYPE_3__*,int,int) ;
 int FUNC_16 (int *,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_17 (char*) ;

__attribute__((used)) static pdf_obj *
FUNC_18(fz_context *VAR_5, pdf_document *VAR_6, pdf_lexbuf *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 fz_stream *VAR_14 = VAR_6->file;
 pdf_xref_entry *VAR_15;
 pdf_token VAR_16;
 size_t VAR_17;
 char *VAR_18, *VAR_19;

 VAR_12 = FUNC_16(VAR_5, VAR_6, VAR_7);

 FUNC_5(VAR_5, VAR_6->file);
 if (FUNC_6(VAR_5, VAR_6->file, "xref"))
  FUNC_8(VAR_5, VAR_0, "cannot find xref marker");
 FUNC_5(VAR_5, VAR_6->file);

 while (1)
 {
  VAR_10 = FUNC_1(VAR_5, VAR_14);
  if (!FUNC_11(VAR_10))
   break;

  FUNC_3(VAR_5, VAR_14, VAR_7->scratch, VAR_7->size);
  VAR_18 = VAR_7->scratch;
  VAR_8 = FUNC_0(FUNC_7(&VAR_18, " "));
  VAR_9 = FUNC_0(FUNC_7(&VAR_18, " "));


  if (VAR_18 && *VAR_18 != '\0')
  {
   FUNC_10(VAR_5, "broken xref subsection. proceeding anyway.");
   FUNC_4(VAR_5, VAR_14, -(2 + (int)FUNC_17(VAR_18)), VAR_4);
  }

  if (VAR_8 < 0 || VAR_8 > VAR_1
    || VAR_9 < 0 || VAR_9 > VAR_1
    || VAR_8 + VAR_9 - 1 > VAR_1)
  {
   FUNC_8(VAR_5, VAR_0, "xref subsection object numbers are out of range");
  }

  if (VAR_8 + VAR_9 > VAR_12)
  {
   FUNC_10(VAR_5, "broken xref subsection, proceeding anyway.");
  }

  VAR_15 = FUNC_15(VAR_5, VAR_6, VAR_8, VAR_9);




  VAR_13 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
  {
   pdf_xref_entry *VAR_20 = &VAR_15[VAR_11];
   VAR_17 = FUNC_2(VAR_5, VAR_14, (unsigned char *) VAR_7->scratch + VAR_13, 20-VAR_13);
   if (VAR_17 != (size_t)(20-VAR_13))
    FUNC_8(VAR_5, VAR_0, "unexpected EOF in xref table");
   VAR_17 += VAR_13;
   VAR_7->scratch[VAR_17] = '\0';
   if (!VAR_20->type)
   {
    VAR_18 = VAR_7->scratch;
    VAR_19 = VAR_18 + VAR_17;

    VAR_20->num = VAR_8 + VAR_11;


    while (VAR_18 < VAR_19 && FUNC_12(*VAR_18))
     VAR_18++;

    if (VAR_18 == VAR_19 || !FUNC_11(*VAR_18))
     FUNC_8(VAR_5, VAR_0, "xref offset missing");
    while (VAR_18 < VAR_19 && FUNC_11(*VAR_18))
     VAR_20->ofs = VAR_20->ofs * 10 + *VAR_18++ - '0';

    while (VAR_18 < VAR_19 && FUNC_12(*VAR_18))
     VAR_18++;
    if (VAR_18 == VAR_19 || !FUNC_11(*VAR_18))
     FUNC_8(VAR_5, VAR_0, "xref generation number missing");
    while (VAR_18 < VAR_19 && FUNC_11(*VAR_18))
     VAR_20->gen = VAR_20->gen * 10 + *VAR_18++ - '0';

    while (VAR_18 < VAR_19 && FUNC_12(*VAR_18))
     VAR_18++;
    if (VAR_18 == VAR_19 || (*VAR_18 != 'f' && *VAR_18 != 'n' && *VAR_18 != 'o'))
     FUNC_8(VAR_5, VAR_0, "unexpected xref type: 0x%x (%d %d R)", VAR_18 == VAR_19 ? 0 : *VAR_18, VAR_20->num, VAR_20->gen);
    VAR_20->type = *VAR_18++;


    VAR_13 = VAR_7->scratch[19] > 32;
    if (VAR_13)
     VAR_7->scratch[0] = VAR_7->scratch[19];
   }
  }
  if (VAR_13)
   FUNC_9(VAR_5, VAR_14);
 }

 VAR_16 = FUNC_13(VAR_5, VAR_14, VAR_7);
 if (VAR_16 != VAR_3)
  FUNC_8(VAR_5, VAR_0, "expected trailer marker");

 VAR_16 = FUNC_13(VAR_5, VAR_14, VAR_7);
 if (VAR_16 != VAR_2)
  FUNC_8(VAR_5, VAR_0, "expected trailer dictionary");

 VAR_6->has_old_style_xrefs = 1;

 return FUNC_14(VAR_5, VAR_6, VAR_14, VAR_7);
}
