
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct fmt TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int separator_zero; int * separator; } ;
struct TYPE_8__ {int separator_zero; int * separator; } ;
struct TYPE_11__ {int format; int expanded; char* csvFieldSep; int numericLocale; int tuples_only; int pager; int default_footer; void* columns; void* pager_min_lines; int * tableAttr; TYPE_2__ recordSep; TYPE_1__ fieldSep; void* border; int unicode_header_linestyle; int unicode_column_linestyle; int unicode_border_linestyle; int * line_style; } ;
struct TYPE_10__ {TYPE_4__ topt; int * title; int * nullPrint; } ;
typedef TYPE_3__ printQueryOpt ;
typedef enum printFormat { ____Placeholder_printFormat } printFormat ;
struct fmt {char const* name; int number; } ;
struct TYPE_12__ {int popt; } ;


 int FUNC_0 (int ) ;





 int VAR_0 ;



 int FUNC_1 (char const*,char const*,int*) ;
 int FUNC_2 (char const*,char const*,char*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__ const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 void* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char const*,size_t) ;
 int VAR_3 ;
 int FUNC_10 (char const*,int *) ;
 TYPE_5__ VAR_4 ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (char const*,size_t,int *) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*) ;

bool
FUNC_15(const char *VAR_5, const char *VAR_6, printQueryOpt *VAR_7, bool VAR_8)
{
 size_t VAR_9 = 0;

 FUNC_0(VAR_5 != ((void*)0));

 if (VAR_6)
  VAR_9 = FUNC_14(VAR_6);


 if (FUNC_13(VAR_5, "format") == 0)
 {
  static const struct fmt
  {
   const char *name;
   enum printFormat number;
  } VAR_10[] =
  {

   {"aligned", 135},
   {"asciidoc", 134},
   {"csv", 133},
   {"html", 132},
   {"latex", 131},
   {"troff-ms", 130},
   {"unaligned", 129},
   {"wrapped", 128}
  };

  if (!VAR_6)
   ;
  else
  {
   int VAR_11 = -1;

   for (int VAR_12 = 0; VAR_12 < FUNC_5(VAR_10); VAR_12++)
   {
    if (FUNC_9(VAR_10[VAR_12].name, VAR_6, VAR_9) == 0)
    {
     if (VAR_11 < 0)
      VAR_11 = VAR_12;
     else
     {
      FUNC_6("\\pset: ambiguous abbreviation \"%s\" matches both \"%s\" and \"%s\"",
          VAR_6,
          VAR_10[VAR_11].name, VAR_10[VAR_12].name);
      return 0;
     }
    }
   }
   if (VAR_11 >= 0)
    VAR_7->topt.format = VAR_10[VAR_11].number;
   else if (FUNC_9("latex-longtable", VAR_6, VAR_9) == 0)
   {





    VAR_7->topt.format = VAR_0;
   }
   else
   {
    FUNC_6("\\pset: allowed formats are aligned, asciidoc, csv, html, latex, latex-longtable, troff-ms, unaligned, wrapped");
    return 0;
   }
  }
 }


 else if (FUNC_13(VAR_5, "linestyle") == 0)
 {
  if (!VAR_6)
   ;
  else if (FUNC_9("ascii", VAR_6, VAR_9) == 0)
   VAR_7->topt.line_style = &VAR_1;
  else if (FUNC_9("old-ascii", VAR_6, VAR_9) == 0)
   VAR_7->topt.line_style = &VAR_2;
  else if (FUNC_9("unicode", VAR_6, VAR_9) == 0)
   VAR_7->topt.line_style = &VAR_3;
  else
  {
   FUNC_6("\\pset: allowed line styles are ascii, old-ascii, unicode");
   return 0;
  }
 }


 else if (FUNC_13(VAR_5, "unicode_border_linestyle") == 0)
 {
  if (!VAR_6)
   ;
  else if (FUNC_12(VAR_6, VAR_9,
          &VAR_7->topt.unicode_border_linestyle))
   FUNC_11(&(VAR_7->topt));
  else
  {
   FUNC_6("\\pset: allowed Unicode border line styles are single, double");
   return 0;
  }
 }


 else if (FUNC_13(VAR_5, "unicode_column_linestyle") == 0)
 {
  if (!VAR_6)
   ;
  else if (FUNC_12(VAR_6, VAR_9,
          &VAR_7->topt.unicode_column_linestyle))
   FUNC_11(&(VAR_7->topt));
  else
  {
   FUNC_6("\\pset: allowed Unicode column line styles are single, double");
   return 0;
  }
 }


 else if (FUNC_13(VAR_5, "unicode_header_linestyle") == 0)
 {
  if (!VAR_6)
   ;
  else if (FUNC_12(VAR_6, VAR_9,
          &VAR_7->topt.unicode_header_linestyle))
   FUNC_11(&(VAR_7->topt));
  else
  {
   FUNC_6("\\pset: allowed Unicode header line styles are single, double");
   return 0;
  }
 }


 else if (FUNC_13(VAR_5, "border") == 0)
 {
  if (VAR_6)
   VAR_7->topt.border = FUNC_3(VAR_6);
 }


 else if (FUNC_13(VAR_5, "x") == 0 ||
    FUNC_13(VAR_5, "expanded") == 0 ||
    FUNC_13(VAR_5, "vertical") == 0)
 {
  if (VAR_6 && FUNC_7(VAR_6, "auto") == 0)
   VAR_7->topt.expanded = 2;
  else if (VAR_6)
  {
   bool VAR_13;

   if (FUNC_1(VAR_6, ((void*)0), &VAR_13))
    VAR_7->topt.expanded = VAR_13 ? 1 : 0;
   else
   {
    FUNC_2(VAR_5, VAR_6, "on, off, auto");
    return 0;
   }
  }
  else
   VAR_7->topt.expanded = !VAR_7->topt.expanded;
 }


 else if (FUNC_13(VAR_5, "csv_fieldsep") == 0)
 {
  if (VAR_6)
  {

   if (FUNC_14(VAR_6) != 1)
   {
    FUNC_6("\\pset: csv_fieldsep must be a single one-byte character");
    return 0;
   }
   if (VAR_6[0] == '"' || VAR_6[0] == '\n' || VAR_6[0] == '\r')
   {
    FUNC_6("\\pset: csv_fieldsep cannot be a double quote, a newline, or a carriage return");
    return 0;
   }
   VAR_7->topt.csvFieldSep[0] = VAR_6[0];
  }
 }


 else if (FUNC_13(VAR_5, "numericlocale") == 0)
 {
  if (VAR_6)
   return FUNC_1(VAR_6, VAR_5, &VAR_7->topt.numericLocale);
  else
   VAR_7->topt.numericLocale = !VAR_7->topt.numericLocale;
 }


 else if (FUNC_13(VAR_5, "null") == 0)
 {
  if (VAR_6)
  {
   FUNC_4(VAR_7->nullPrint);
   VAR_7->nullPrint = FUNC_8(VAR_6);
  }
 }


 else if (FUNC_13(VAR_5, "fieldsep") == 0)
 {
  if (VAR_6)
  {
   FUNC_4(VAR_7->topt.fieldSep.separator);
   VAR_7->topt.fieldSep.separator = FUNC_8(VAR_6);
   VAR_7->topt.fieldSep.separator_zero = 0;
  }
 }

 else if (FUNC_13(VAR_5, "fieldsep_zero") == 0)
 {
  FUNC_4(VAR_7->topt.fieldSep.separator);
  VAR_7->topt.fieldSep.separator = ((void*)0);
  VAR_7->topt.fieldSep.separator_zero = 1;
 }


 else if (FUNC_13(VAR_5, "recordsep") == 0)
 {
  if (VAR_6)
  {
   FUNC_4(VAR_7->topt.recordSep.separator);
   VAR_7->topt.recordSep.separator = FUNC_8(VAR_6);
   VAR_7->topt.recordSep.separator_zero = 0;
  }
 }

 else if (FUNC_13(VAR_5, "recordsep_zero") == 0)
 {
  FUNC_4(VAR_7->topt.recordSep.separator);
  VAR_7->topt.recordSep.separator = ((void*)0);
  VAR_7->topt.recordSep.separator_zero = 1;
 }


 else if (FUNC_13(VAR_5, "t") == 0 || FUNC_13(VAR_5, "tuples_only") == 0)
 {
  if (VAR_6)
   return FUNC_1(VAR_6, VAR_5, &VAR_7->topt.tuples_only);
  else
   VAR_7->topt.tuples_only = !VAR_7->topt.tuples_only;
 }


 else if (FUNC_13(VAR_5, "C") == 0 || FUNC_13(VAR_5, "title") == 0)
 {
  FUNC_4(VAR_7->title);
  if (!VAR_6)
   VAR_7->title = ((void*)0);
  else
   VAR_7->title = FUNC_8(VAR_6);
 }


 else if (FUNC_13(VAR_5, "T") == 0 || FUNC_13(VAR_5, "tableattr") == 0)
 {
  FUNC_4(VAR_7->topt.tableAttr);
  if (!VAR_6)
   VAR_7->topt.tableAttr = ((void*)0);
  else
   VAR_7->topt.tableAttr = FUNC_8(VAR_6);
 }


 else if (FUNC_13(VAR_5, "pager") == 0)
 {
  if (VAR_6 && FUNC_7(VAR_6, "always") == 0)
   VAR_7->topt.pager = 2;
  else if (VAR_6)
  {
   bool VAR_14;

   if (!FUNC_1(VAR_6, ((void*)0), &VAR_14))
   {
    FUNC_2(VAR_5, VAR_6, "on, off, always");
    return 0;
   }
   VAR_7->topt.pager = VAR_14 ? 1 : 0;
  }
  else if (VAR_7->topt.pager == 1)
   VAR_7->topt.pager = 0;
  else
   VAR_7->topt.pager = 1;
 }


 else if (FUNC_13(VAR_5, "pager_min_lines") == 0)
 {
  if (VAR_6)
   VAR_7->topt.pager_min_lines = FUNC_3(VAR_6);
 }


 else if (FUNC_13(VAR_5, "footer") == 0)
 {
  if (VAR_6)
   return FUNC_1(VAR_6, VAR_5, &VAR_7->topt.default_footer);
  else
   VAR_7->topt.default_footer = !VAR_7->topt.default_footer;
 }


 else if (FUNC_13(VAR_5, "columns") == 0)
 {
  if (VAR_6)
   VAR_7->topt.columns = FUNC_3(VAR_6);
 }
 else
 {
  FUNC_6("\\pset: unknown option: %s", VAR_5);
  return 0;
 }

 if (!VAR_8)
  FUNC_10(VAR_5, &VAR_4.popt);

 return 1;
}
