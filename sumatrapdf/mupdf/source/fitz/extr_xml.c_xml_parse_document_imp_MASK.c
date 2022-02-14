
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int dummy; } ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int *,struct parser*,char*,char*) ;
 int FUNC_3 (int *,struct parser*,char*,char*) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,struct parser*,char*,char*) ;
 int FUNC_6 (int *,struct parser*,char*,int ) ;
 int FUNC_7 (int *,struct parser*,char*,char*) ;
 int FUNC_8 (int *,struct parser*) ;
 int FUNC_9 (int *,struct parser*,char*,char*,int ) ;
 int FUNC_10 (int *,struct parser*,char*,char*) ;

__attribute__((used)) static char *FUNC_11(fz_context *VAR_0, struct parser *VAR_1, char *VAR_2)
{
 char *VAR_3;
 int VAR_4;
 int VAR_5;
 char *VAR_6;

parse_text:
 VAR_3 = VAR_2;
 while (*VAR_2 && *VAR_2 != '<') ++VAR_2;
 if (*VAR_2 == '<') {

  if (VAR_2[1] == '/' && VAR_3 < VAR_2 - 1 && VAR_2[-1] == '\n')
   FUNC_10(VAR_0, VAR_1, VAR_3, VAR_2 - 1);
  else if (VAR_3 < VAR_2)
   FUNC_10(VAR_0, VAR_1, VAR_3, VAR_2);
  ++VAR_2;
  goto parse_element;
 } else if (VAR_3 < VAR_2)
  FUNC_10(VAR_0, VAR_1, VAR_3, VAR_2);
 return ((void*)0);

parse_element:
 if (*VAR_2 == '/') { ++VAR_2; goto parse_closing_element; }
 if (*VAR_2 == '!') { ++VAR_2; goto parse_comment; }
 if (*VAR_2 == '?') { ++VAR_2; goto parse_processing_instruction; }
 while (FUNC_1(*VAR_2)) ++VAR_2;
 if (FUNC_0(*VAR_2))
  goto parse_element_name;
 return "syntax error in element";

parse_comment:
 if (VAR_2[0]=='D' && VAR_2[1]=='O' && VAR_2[2]=='C' && VAR_2[3]=='T' && VAR_2[4]=='Y' && VAR_2[5]=='P' && VAR_2[6]=='E')
  goto parse_declaration;
 if (VAR_2[0]=='E' && VAR_2[1]=='N' && VAR_2[2]=='T' && VAR_2[3]=='I' && VAR_2[4]=='T' && VAR_2[5]=='Y')
  goto parse_declaration;
 if (*VAR_2 == '[') goto parse_cdata;
 if (*VAR_2++ != '-') return "syntax error in comment (<! not followed by --)";
 if (*VAR_2++ != '-') return "syntax error in comment (<!- not followed by -)";
 while (*VAR_2) {
  if (VAR_2[0] == '-' && VAR_2[1] == '-' && VAR_2[2] == '>') {
   VAR_2 += 3;
   goto parse_text;
  }
  ++VAR_2;
 }
 return "end of data in comment";

parse_declaration:
 while (*VAR_2) if (*VAR_2++ == '>') goto parse_text;
 return "end of data in declaration";

parse_cdata:
 if (VAR_2[1] != 'C' || VAR_2[2] != 'D' || VAR_2[3] != 'A' || VAR_2[4] != 'T' || VAR_2[5] != 'A' || VAR_2[6] != '[')
  return "syntax error in CDATA section";
 VAR_2 += 7;
 VAR_3 = VAR_2;
 while (*VAR_2) {
  if (VAR_2[0] == ']' && VAR_2[1] == ']' && VAR_2[2] == '>') {
   FUNC_7(VAR_0, VAR_1, VAR_3, VAR_2);
   VAR_2 += 3;
   goto parse_text;
  }
  ++VAR_2;
 }
 return "end of data in CDATA section";

parse_processing_instruction:
 while (*VAR_2) {
  if (VAR_2[0] == '?' && VAR_2[1] == '>') {
   VAR_2 += 2;
   goto parse_text;
  }
  ++VAR_2;
 }
 return "end of data in processing instruction";

parse_closing_element:
 while (FUNC_1(*VAR_2)) ++VAR_2;
 VAR_3 = VAR_2;
 while (FUNC_0(*VAR_2)) ++VAR_2;
 VAR_6 = VAR_2;
 while (FUNC_1(*VAR_2)) ++VAR_2;
 if (*VAR_2 != '>')
  return "syntax error in closing element";
 VAR_3 = FUNC_4(VAR_3, VAR_6);
 if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_6))
  FUNC_8(VAR_0, VAR_1);
 ++VAR_2;
 goto parse_text;

parse_element_name:
 VAR_3 = VAR_2;
 while (FUNC_0(*VAR_2)) ++VAR_2;
 VAR_3 = FUNC_4(VAR_3, VAR_2);
 FUNC_3(VAR_0, VAR_1, VAR_3, VAR_2);
 VAR_5 = FUNC_9(VAR_0, VAR_1, VAR_3, VAR_2, 0);
 if (*VAR_2 == '>') {
  if (VAR_5)
   FUNC_8(VAR_0, VAR_1);
  ++VAR_2;
  if (*VAR_2 == '\n') ++VAR_2;
  goto parse_text;
 }
 if (VAR_2[0] == '/' && VAR_2[1] == '>') {
  FUNC_8(VAR_0, VAR_1);
  VAR_2 += 2;
  goto parse_text;
 }
 if (FUNC_1(*VAR_2))
  goto parse_attributes;
 return "syntax error after element name";

parse_attributes:
 while (FUNC_1(*VAR_2)) ++VAR_2;
 if (FUNC_0(*VAR_2))
  goto parse_attribute_name;
 if (*VAR_2 == '>') {
  if (VAR_5)
   FUNC_8(VAR_0, VAR_1);
  ++VAR_2;
  if (*VAR_2 == '\n') ++VAR_2;
  goto parse_text;
 }
 if (VAR_2[0] == '/' && VAR_2[1] == '>') {
  FUNC_8(VAR_0, VAR_1);
  VAR_2 += 2;
  goto parse_text;
 }
 return "syntax error in attributes";

parse_attribute_name:
 VAR_3 = VAR_2;
 while (FUNC_0(*VAR_2)) ++VAR_2;
 FUNC_5(VAR_0, VAR_1, VAR_3, VAR_2);
 while (FUNC_1(*VAR_2)) ++VAR_2;
 if (*VAR_2 == '=') { ++VAR_2; goto parse_attribute_value; }
 return "syntax error after attribute name";

parse_attribute_value:
 while (FUNC_1(*VAR_2)) ++VAR_2;
 VAR_4 = *VAR_2++;
 if (VAR_4 != '"' && VAR_4 != '\'')
  return "missing quote character";
 VAR_3 = VAR_2;
 while (*VAR_2 && *VAR_2 != VAR_4) ++VAR_2;
 if (*VAR_2 == VAR_4) {
  FUNC_6(VAR_0, VAR_1, VAR_3, VAR_2++);
  goto parse_attributes;
 }
 return "end of data in attribute value";
}
