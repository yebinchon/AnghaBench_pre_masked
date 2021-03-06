
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int element; } ;
struct element {int flags; struct element* list_next; } ;
struct action {int index; char* name; struct action* next; } ;
typedef int FILE ;


 int VAR_0 ;
 struct action* VAR_1 ;
 struct element* VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 struct type* VAR_8 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(FILE *VAR_9, FILE *VAR_10)
{
 struct element *VAR_11;
 struct action *VAR_12;
 struct type *VAR_13;
 int VAR_14;

 FUNC_2(VAR_10, "/*\n");
 FUNC_2(VAR_10, " * Automatically generated by asn1_compiler.  Do not edit\n");
 FUNC_2(VAR_10, " *\n");
 FUNC_2(VAR_10, " * ASN.1 parser for %s\n", VAR_3);
 FUNC_2(VAR_10, " */\n");
 FUNC_2(VAR_10, "#include <linux/asn1_decoder.h>\n");
 FUNC_2(VAR_10, "\n");
 FUNC_2(VAR_10, "extern const struct asn1_decoder %s_decoder;\n", VAR_3);
 if (FUNC_1(VAR_10)) {
  FUNC_3(VAR_4);
  FUNC_0(1);
 }

 FUNC_2(VAR_9, "/*\n");
 FUNC_2(VAR_9, " * Automatically generated by asn1_compiler.  Do not edit\n");
 FUNC_2(VAR_9, " *\n");
 FUNC_2(VAR_9, " * ASN.1 parser for %s\n", VAR_3);
 FUNC_2(VAR_9, " */\n");
 FUNC_2(VAR_9, "#include <linux/asn1_ber_bytecode.h>\n");
 FUNC_2(VAR_9, "#include \"%s.asn1.h\"\n", VAR_3);
 FUNC_2(VAR_9, "\n");
 if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_7);
  FUNC_0(1);
 }


 FUNC_2(VAR_10, "\n");
 VAR_14 = 0;
 for (VAR_12 = VAR_1; VAR_12; VAR_12 = VAR_12->next) {
  VAR_12->index = VAR_14++;
  FUNC_2(VAR_10,
   "extern int %s(void *, size_t, unsigned char,"
   " const void *, size_t);\n",
   VAR_12->name);
 }
 FUNC_2(VAR_10, "\n");

 FUNC_2(VAR_9, "enum %s_actions {\n", VAR_3);
 for (VAR_12 = VAR_1; VAR_12; VAR_12 = VAR_12->next)
  FUNC_2(VAR_9, "\tACT_%s = %u,\n",
   VAR_12->name, VAR_12->index);
 FUNC_2(VAR_9, "\tNR__%s_actions = %u\n", VAR_3, VAR_5);
 FUNC_2(VAR_9, "};\n");

 FUNC_2(VAR_9, "\n");
 FUNC_2(VAR_9, "static const asn1_action_t %s_action_table[NR__%s_actions] = {\n",
  VAR_3, VAR_3);
 for (VAR_12 = VAR_1; VAR_12; VAR_12 = VAR_12->next)
  FUNC_2(VAR_9, "\t[%4u] = %s,\n", VAR_12->index, VAR_12->name);
 FUNC_2(VAR_9, "};\n");

 if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_7);
  FUNC_0(1);
 }


 FUNC_7("Pass 1\n");
 VAR_6 = 0;
 VAR_13 = &VAR_8[0];
 FUNC_4(((void*)0), VAR_13->element, ((void*)0));
 FUNC_5(((void*)0), "ASN1_OP_COMPLETE,\n");
 FUNC_6(((void*)0));

 for (VAR_11 = VAR_2; VAR_11; VAR_11 = VAR_11->list_next)
  VAR_11->flags &= ~VAR_0;


 FUNC_7("Pass 2\n");
 FUNC_2(VAR_9, "\n");
 FUNC_2(VAR_9, "static const unsigned char %s_machine[] = {\n",
  VAR_3);

 VAR_6 = 0;
 VAR_13 = &VAR_8[0];
 FUNC_4(VAR_9, VAR_13->element, ((void*)0));
 FUNC_5(VAR_9, "ASN1_OP_COMPLETE,\n");
 FUNC_6(VAR_9);

 FUNC_2(VAR_9, "};\n");

 FUNC_2(VAR_9, "\n");
 FUNC_2(VAR_9, "const struct asn1_decoder %s_decoder = {\n", VAR_3);
 FUNC_2(VAR_9, "\t.machine = %s_machine,\n", VAR_3);
 FUNC_2(VAR_9, "\t.machlen = sizeof(%s_machine),\n", VAR_3);
 FUNC_2(VAR_9, "\t.actions = %s_action_table,\n", VAR_3);
 FUNC_2(VAR_9, "};\n");
}
