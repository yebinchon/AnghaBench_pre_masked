
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_page_dump {char* data; } ;
struct linux_binprm {unsigned long p; int argc; int envc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 char* FUNC_0 (int const,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int const,char*) ;
 int FUNC_3 (struct linux_binprm*,unsigned long,struct tomoyo_page_dump*) ;

__attribute__((used)) static char *FUNC_4(struct linux_binprm *VAR_2,
          struct tomoyo_page_dump *VAR_3)
{
 static const int VAR_4 = 4096 * 2;
 char *VAR_5 = FUNC_0(VAR_4, VAR_0);
 char *VAR_6;
 char *VAR_7;
 int VAR_8;
 unsigned long VAR_9 = VAR_2->p;
 int VAR_10 = VAR_9 % VAR_1;
 int VAR_11 = VAR_2->argc;
 int VAR_12 = VAR_2->envc;
 bool VAR_13 = 0;

 if (!VAR_5)
  return ((void*)0);
 VAR_8 = FUNC_2(VAR_5, VAR_4 - 1, "argv[]={ ");
 VAR_6 = VAR_5 + VAR_8;
 if (!VAR_11) {
  FUNC_1(VAR_6, "} envp[]={ ", 11);
  VAR_6 += 11;
 }
 VAR_7 = VAR_6;
 while (VAR_11 || VAR_12) {
  if (!FUNC_3(VAR_2, VAR_9, VAR_3))
   goto out;
  VAR_9 += VAR_1 - VAR_10;

  while (VAR_10 < VAR_1) {
   const char *VAR_14 = VAR_3->data;
   const unsigned char VAR_15 = VAR_14[VAR_10++];

   if (VAR_6 == VAR_7)
    *VAR_6++ = '"';
   if (VAR_6 >= VAR_5 + VAR_4 - 32) {

    VAR_13 = 1;
   } else if (VAR_15 == '\\') {
    *VAR_6++ = '\\';
    *VAR_6++ = '\\';
   } else if (VAR_15 > ' ' && VAR_15 < 127) {
    *VAR_6++ = VAR_15;
   } else if (!VAR_15) {
    *VAR_6++ = '"';
    *VAR_6++ = ' ';
    VAR_7 = VAR_6;
   } else {
    *VAR_6++ = '\\';
    *VAR_6++ = (VAR_15 >> 6) + '0';
    *VAR_6++ = ((VAR_15 >> 3) & 7) + '0';
    *VAR_6++ = (VAR_15 & 7) + '0';
   }
   if (VAR_15)
    continue;
   if (VAR_11) {
    if (--VAR_11 == 0) {
     if (VAR_13) {
      VAR_6 = VAR_7;
      FUNC_1(VAR_6, "... ", 4);
      VAR_6 += 4;
     }
     FUNC_1(VAR_6, "} envp[]={ ", 11);
     VAR_6 += 11;
     VAR_7 = VAR_6;
     VAR_13 = 0;
    }
   } else if (VAR_12) {
    if (--VAR_12 == 0) {
     if (VAR_13) {
      VAR_6 = VAR_7;
      FUNC_1(VAR_6, "... ", 4);
      VAR_6 += 4;
     }
    }
   }
   if (!VAR_11 && !VAR_12)
    break;
  }
  VAR_10 = 0;
 }
 *VAR_6++ = '}';
 *VAR_6 = '\0';
 return VAR_5;
out:
 FUNC_2(VAR_5, VAR_4 - 1,
   "argv[]={ ... } envp[]= { ... }");
 return VAR_5;
}
