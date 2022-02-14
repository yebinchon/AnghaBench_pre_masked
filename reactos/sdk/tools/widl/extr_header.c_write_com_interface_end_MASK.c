
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {char* c_name; char* name; int namespace; int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int UUID ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int const*) ;
 int VAR_3 ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,char*,char*,int const*) ;
 int FUNC_11 (int *,TYPE_1__*,TYPE_1__*,char*) ;
 int FUNC_12 (int *,int,char*,...) ;
 int FUNC_13 (int *,TYPE_1__*,int ) ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_1__*,char*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,TYPE_1__*,int const*) ;

__attribute__((used)) static void FUNC_19(FILE *VAR_4, type_t *VAR_5)
{
  int VAR_6 = FUNC_3(VAR_5->attrs, VAR_0);
  const UUID *VAR_7 = FUNC_1(VAR_5->attrs, VAR_1);
  type_t *VAR_8;

  if (VAR_7)
      FUNC_10(VAR_4, VAR_6 ? "DIID" : "IID", VAR_5->c_name, VAR_7);


  FUNC_0(VAR_4, "#if defined(__cplusplus) && !defined(CINTERFACE)\n");
  if (!FUNC_4(VAR_5->namespace)) {
      FUNC_12(VAR_4, 0, "} /* extern \"C\" */");
      FUNC_17(VAR_4, VAR_5->namespace);
  }
  if (VAR_7) {
      FUNC_12(VAR_4, 0, "MIDL_INTERFACE(\"%s\")", FUNC_6(VAR_7));
      FUNC_2(VAR_4, 0);
  }else {
      FUNC_2(VAR_4, 0);
      FUNC_0(VAR_4, "interface ");
  }
  if (FUNC_5(VAR_5))
  {
    FUNC_0(VAR_4, "%s : public %s\n", VAR_5->name,
            FUNC_5(VAR_5)->name);
    FUNC_12(VAR_4, 1, "{");
  }
  else
  {
    FUNC_0(VAR_4, "%s\n", VAR_5->name);
    FUNC_12(VAR_4, 1, "{\n");
    FUNC_12(VAR_4, 0, "BEGIN_INTERFACE\n");
  }


  if (!VAR_6)
    FUNC_9(VAR_4, VAR_5);
  if (!FUNC_5(VAR_5))
    FUNC_12(VAR_4, 0, "END_INTERFACE\n");
  FUNC_12(VAR_4, -1, "};");
  if (!FUNC_4(VAR_5->namespace)) {
      FUNC_16(VAR_4, VAR_5->namespace);
      FUNC_12(VAR_4, 0, "extern \"C\" {");
  }
  if (VAR_7)
      FUNC_18(VAR_4, VAR_5, VAR_7);
  FUNC_0(VAR_4, "#else\n");

  FUNC_12(VAR_4, 1, "typedef struct %sVtbl {", VAR_5->c_name);
  FUNC_12(VAR_4, 0, "BEGIN_INTERFACE\n");
  if (VAR_6)
    FUNC_7(VAR_4, VAR_5);
  else
    FUNC_8(VAR_4, VAR_5);
  FUNC_12(VAR_4, 0, "END_INTERFACE");
  FUNC_12(VAR_4, -1, "} %sVtbl;\n", VAR_5->c_name);
  FUNC_0(VAR_4, "interface %s {\n", VAR_5->c_name);
  FUNC_0(VAR_4, "    CONST_VTBL %sVtbl* lpVtbl;\n", VAR_5->c_name);
  FUNC_0(VAR_4, "};\n\n");
  FUNC_0(VAR_4, "#ifdef COBJMACROS\n");


  FUNC_0(VAR_4, "#ifndef WIDL_C_INLINE_WRAPPERS\n");
  VAR_8 = VAR_6 ? FUNC_5(VAR_5) : VAR_5;
  FUNC_14(VAR_4, VAR_8, VAR_8, VAR_5->c_name);
  FUNC_0(VAR_4, "#else\n");
  FUNC_11(VAR_4, VAR_8, VAR_8, VAR_5->c_name);
  FUNC_0(VAR_4, "#endif\n");
  FUNC_0(VAR_4, "#endif\n");
  FUNC_0(VAR_4, "\n");
  FUNC_0(VAR_4, "#endif\n");
  FUNC_0(VAR_4, "\n");


  if (!VAR_6 && !VAR_3)
  {
    FUNC_15(VAR_4, VAR_5);
    FUNC_13(VAR_4, VAR_5, VAR_2);
    FUNC_0(VAR_4, "\n");
  }
  FUNC_0(VAR_4,"#endif  /* __%s_%sINTERFACE_DEFINED__ */\n\n", VAR_5->c_name, VAR_6 ? "DISP" : "");
}
