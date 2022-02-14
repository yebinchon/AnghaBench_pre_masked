
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {char* string; size_t tag; } ;
typedef int buffer ;
struct TYPE_3__ {scalar_t__ n; } ;
typedef int FILE ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct string_list* FUNC_1 (struct string_list*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static struct string_list *FUNC_6(FILE *VAR_4)
{
 char VAR_5[256];
 struct string_list VAR_6 = {
  .string = VAR_5,
  .tag = VAR_1 };
 int VAR_7, VAR_8 = 0;

 while ((VAR_7 = FUNC_3(VAR_4)) != VAR_0) {
  if (!VAR_8 && VAR_7 == ' ') {
   if (VAR_6.string == VAR_5)
    continue;
   break;
  } else if (VAR_7 == '"') {
   VAR_8 = !VAR_8;
  } else if (VAR_7 == '\n') {
   if (VAR_6.string == VAR_5)
    return ((void*)0);
   FUNC_5(VAR_7, VAR_4);
   break;
  }
  if (VAR_6.string >= VAR_5 + sizeof(VAR_5) - 1) {
   FUNC_4(VAR_2, "Token too long\n");
   FUNC_2(1);
  }
  *VAR_6.string++ = VAR_7;
 }
 if (VAR_6.string == VAR_5)
  return ((void*)0);
 *VAR_6.string = 0;
 VAR_6.string = VAR_5;

 if (VAR_6.string[1] == '#') {
  size_t VAR_9;

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
   if (VAR_6.string[0] == VAR_3[VAR_9].n) {
    VAR_6.tag = VAR_9;
    VAR_6.string += 2;
    return FUNC_1(&VAR_6);
   }
  }
  FUNC_4(VAR_2, "Unknown type %c\n", VAR_6.string[0]);
  FUNC_2(1);
 }
 return FUNC_1(&VAR_6);
}
