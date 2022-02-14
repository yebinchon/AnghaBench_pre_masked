
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char* string ;
typedef int patPrefix ;
struct TYPE_8__ {TYPE_1__* first; } ;
struct TYPE_7__ {char* line; struct TYPE_7__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;


 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 char* VAR_0 ;
 int FUNC_3 (char*,char*,char*,char*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, LineListPtr VAR_2)
{
 LinePtr VAR_3, VAR_4;
 string VAR_5;
 string VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 const char *VAR_11;
 int VAR_12;
 size_t VAR_13;


 VAR_10 = VAR_5;
 VAR_8 = VAR_10 + sizeof(VAR_5) - 1;
 VAR_12 = 0;
 for (VAR_9 = (char *) VAR_1; VAR_10 < VAR_8; ) {
  for (VAR_11=VAR_0; *VAR_11 != '\0'; VAR_11++) {
   if (*VAR_11 == *VAR_9) {
    VAR_12 = 1;
    break;
   }
  }
  if (VAR_12)
   break;
  *VAR_10++ = *VAR_9++;
 }
 *VAR_10 = '\0';
 VAR_13 = (size_t) (VAR_10 - VAR_5);

 *VAR_7 = '\0';
 for (VAR_3=VAR_2->first; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  VAR_4 = VAR_3->next;
  if (FUNC_5(VAR_3->line, VAR_5, VAR_13) == 0) {
   (void) FUNC_2(VAR_6, VAR_3->line + VAR_13);
   VAR_9 = FUNC_4(VAR_6, '/');
   if (VAR_9 == ((void*)0))
    VAR_9 = FUNC_4(VAR_6, '\\');
   if (VAR_9 != ((void*)0))
    *VAR_9 = '\0';
   if ((*VAR_7 != '\0') && (FUNC_1(VAR_6, VAR_7))) {
    VAR_4 = FUNC_0(VAR_2, VAR_3);
   } else {
    (void) FUNC_2(VAR_7, VAR_6);






    (void) FUNC_3(VAR_3->line, "%s%s", VAR_5, VAR_6);
   }
  }
 }
}
