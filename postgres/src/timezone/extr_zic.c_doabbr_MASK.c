
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zic_t ;
struct zone {char* z_format; char z_format_specifier; scalar_t__ z_stdoff; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char const*,char const*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char*) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static size_t
FUNC_8(char *VAR_1, struct zone const *VAR_2, char const *VAR_3,
    bool VAR_4, zic_t VAR_5, bool VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 size_t VAR_9;
 char const *VAR_10 = VAR_2->z_format;

 VAR_8 = FUNC_5(VAR_10, '/');
 if (VAR_8 == ((void*)0))
 {
  char VAR_11[VAR_0 + 1];

  if (VAR_2->z_format_specifier == 'z')
   VAR_3 = FUNC_0(VAR_11, VAR_2->z_stdoff + VAR_5);
  else if (!VAR_3)
   VAR_3 = "%s";
  FUNC_4(VAR_1, VAR_10, VAR_3);
 }
 else if (VAR_4)
 {
  FUNC_6(VAR_1, VAR_8 + 1);
 }
 else
 {
  FUNC_2(VAR_1, VAR_10, VAR_8 - VAR_10);
  VAR_1[VAR_8 - VAR_10] = '\0';
 }
 VAR_9 = FUNC_7(VAR_1);
 if (!VAR_6)
  return VAR_9;
 for (VAR_7 = VAR_1; FUNC_1(*VAR_7); VAR_7++)
  continue;
 if (VAR_9 > 0 && *VAR_7 == '\0')
  return VAR_9;
 VAR_1[VAR_9 + 2] = '\0';
 VAR_1[VAR_9 + 1] = '>';
 FUNC_3(VAR_1 + 1, VAR_1, VAR_9);
 VAR_1[0] = '<';
 return VAR_9 + 2;
}
