
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_range {char* file; char* function; int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char**,int *,char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_3, struct line_range *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7 = FUNC_6(VAR_3);
 int VAR_8;

 if (!VAR_7)
  return -VAR_1;

 VAR_4->start = 0;
 VAR_4->end = VAR_2;

 VAR_5 = FUNC_5(VAR_7, ':');
 if (VAR_5) {
  *VAR_5++ = '\0';

  VAR_8 = FUNC_2(&VAR_5, &VAR_4->start, "start line");
  if (VAR_8)
   goto err;

  if (*VAR_5 == '+' || *VAR_5 == '-') {
   const char VAR_9 = *VAR_5++;

   VAR_8 = FUNC_2(&VAR_5, &VAR_4->end, "end line");
   if (VAR_8)
    goto err;

   if (VAR_9 == '+') {
    VAR_4->end += VAR_4->start;






    VAR_4->end--;
   }
  }

  FUNC_3("Line range is %d to %d\n", VAR_4->start, VAR_4->end);

  VAR_8 = -VAR_0;
  if (VAR_4->start > VAR_4->end) {
   FUNC_4("Start line must be smaller"
           " than end line.\n");
   goto err;
  }
  if (*VAR_5 != '\0') {
   FUNC_4("Tailing with invalid str '%s'.\n", VAR_5);
   goto err;
  }
 }

 VAR_6 = FUNC_5(VAR_7, '@');
 if (VAR_6) {
  *VAR_6 = '\0';
  VAR_4->file = FUNC_6(++VAR_6);
  if (VAR_4->file == ((void*)0)) {
   VAR_8 = -VAR_1;
   goto err;
  }
  VAR_4->function = VAR_7;
 } else if (FUNC_5(VAR_7, '/') || FUNC_5(VAR_7, '.'))
  VAR_4->file = VAR_7;
 else if (FUNC_1(VAR_7))
  VAR_4->function = VAR_7;
 else {
  FUNC_4("'%s' is not a valid function name.\n", VAR_7);
  VAR_8 = -VAR_0;
  goto err;
 }

 return 0;
err:
 FUNC_0(VAR_7);
 return VAR_8;
}
