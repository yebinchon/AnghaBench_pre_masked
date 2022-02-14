
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct display_info {char type; int size; scalar_t__ verbose; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct display_info *VAR_1, char **VAR_2, int VAR_3,
   char **VAR_4, int *VAR_5)
{
 char *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 char VAR_12[3];

 VAR_11 = 0;

 if (VAR_1->verbose)
  FUNC_1(VAR_0, "Decoding value:\n");

 VAR_12[0] = '%';
 VAR_12[1] = VAR_1->type ? VAR_1->type : 'd';
 VAR_12[2] = '\0';
 for (; VAR_3 > 0; VAR_2++, VAR_3--, VAR_11 += VAR_9) {

  if (VAR_1->type == 's')
   VAR_9 = FUNC_5(*VAR_2) + 1;
  else
   VAR_9 = VAR_1->size == -1 ? 4 : VAR_1->size;


  if (VAR_11 + VAR_9 > VAR_7) {
   VAR_7 = (VAR_11 + VAR_9) + 500;
   VAR_6 = FUNC_3(VAR_6, VAR_7);
   if (!VAR_6) {
    FUNC_1(VAR_0, "Out of mmory: cannot alloc "
     "%d bytes\n", VAR_7);
    return -1;
   }
  }

  VAR_8 = VAR_6 + VAR_11;
  if (VAR_1->type == 's') {
   FUNC_2(VAR_8, *VAR_2, VAR_9);
   if (VAR_1->verbose)
    FUNC_1(VAR_0, "\tstring: '%s'\n", VAR_8);
  } else {
   int *VAR_13 = (int *)VAR_8;
   FUNC_4(*VAR_2, VAR_12, &VAR_10);
   if (VAR_9 == 4)
    *VAR_13 = FUNC_0(VAR_10);
   else
    *VAR_8 = (uint8_t)VAR_10;
   if (VAR_1->verbose) {
    FUNC_1(VAR_0, "\t%s: %d\n",
     VAR_1->size == 1 ? "byte" :
     VAR_1->size == 2 ? "short" : "int",
     VAR_10);
   }
  }
 }
 *VAR_5 = VAR_11;
 *VAR_4 = VAR_6;
 if (VAR_1->verbose)
  FUNC_1(VAR_0, "Value size %d\n", VAR_11);
 return 0;
}
