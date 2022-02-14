
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* separator; int separator_zero; } ;
struct TYPE_5__ {char* separator; int separator_zero; } ;
struct TYPE_8__ {char* csvFieldSep; int expanded; int default_footer; int numericLocale; char* tableAttr; int tuples_only; int unicode_header_linestyle; int unicode_column_linestyle; int unicode_border_linestyle; TYPE_2__ recordSep; int pager_min_lines; int pager; int format; TYPE_1__ fieldSep; int columns; int border; } ;
struct printQueryOpt {char* nullPrint; char* title; TYPE_4__ topt; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_9(const char *VAR_0, struct printQueryOpt *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));

 if (FUNC_8(VAR_0, "border") == 0)
  return FUNC_6("%d", VAR_1->topt.border);
 else if (FUNC_8(VAR_0, "columns") == 0)
  return FUNC_6("%d", VAR_1->topt.columns);
 else if (FUNC_8(VAR_0, "csv_fieldsep") == 0)
  return FUNC_5(VAR_1->topt.csvFieldSep);
 else if (FUNC_8(VAR_0, "expanded") == 0)
  return FUNC_7(VAR_1->topt.expanded == 2
        ? "auto"
        : FUNC_4(VAR_1->topt.expanded));
 else if (FUNC_8(VAR_0, "fieldsep") == 0)
  return FUNC_5(VAR_1->topt.fieldSep.separator
          ? VAR_1->topt.fieldSep.separator
          : "");
 else if (FUNC_8(VAR_0, "fieldsep_zero") == 0)
  return FUNC_7(FUNC_4(VAR_1->topt.fieldSep.separator_zero));
 else if (FUNC_8(VAR_0, "footer") == 0)
  return FUNC_7(FUNC_4(VAR_1->topt.default_footer));
 else if (FUNC_8(VAR_0, "format") == 0)
  return FUNC_6("%s", FUNC_1(VAR_1->topt.format));
 else if (FUNC_8(VAR_0, "linestyle") == 0)
  return FUNC_6("%s", FUNC_3(&VAR_1->topt)->name);
 else if (FUNC_8(VAR_0, "null") == 0)
  return FUNC_5(VAR_1->nullPrint
          ? VAR_1->nullPrint
          : "");
 else if (FUNC_8(VAR_0, "numericlocale") == 0)
  return FUNC_7(FUNC_4(VAR_1->topt.numericLocale));
 else if (FUNC_8(VAR_0, "pager") == 0)
  return FUNC_6("%d", VAR_1->topt.pager);
 else if (FUNC_8(VAR_0, "pager_min_lines") == 0)
  return FUNC_6("%d", VAR_1->topt.pager_min_lines);
 else if (FUNC_8(VAR_0, "recordsep") == 0)
  return FUNC_5(VAR_1->topt.recordSep.separator
          ? VAR_1->topt.recordSep.separator
          : "");
 else if (FUNC_8(VAR_0, "recordsep_zero") == 0)
  return FUNC_7(FUNC_4(VAR_1->topt.recordSep.separator_zero));
 else if (FUNC_8(VAR_0, "tableattr") == 0)
  return VAR_1->topt.tableAttr ? FUNC_5(VAR_1->topt.tableAttr) : FUNC_7("");
 else if (FUNC_8(VAR_0, "title") == 0)
  return VAR_1->title ? FUNC_5(VAR_1->title) : FUNC_7("");
 else if (FUNC_8(VAR_0, "tuples_only") == 0)
  return FUNC_7(FUNC_4(VAR_1->topt.tuples_only));
 else if (FUNC_8(VAR_0, "unicode_border_linestyle") == 0)
  return FUNC_7(FUNC_2(VAR_1->topt.unicode_border_linestyle));
 else if (FUNC_8(VAR_0, "unicode_column_linestyle") == 0)
  return FUNC_7(FUNC_2(VAR_1->topt.unicode_column_linestyle));
 else if (FUNC_8(VAR_0, "unicode_header_linestyle") == 0)
  return FUNC_7(FUNC_2(VAR_1->topt.unicode_header_linestyle));
 else
  return FUNC_7("ERROR");
}
