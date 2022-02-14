
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {char* name; char* help; int (* usage ) () ;} ;


 struct command* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_1, char *VAR_2[])
{
 const struct command *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 if (VAR_1 > 1 && VAR_2++) {
  for (VAR_4 = 0; VAR_0[VAR_4].name != ((void*)0); VAR_4++)
   if (!FUNC_1(VAR_0[VAR_4].name, VAR_2[0]) && VAR_0[VAR_4].usage) {
    VAR_0[VAR_4].usage();
    goto done;
   }
  VAR_5 = -1;
 }

 FUNC_3();
 FUNC_0("\n");
 for (VAR_3 = VAR_0; VAR_3->name != ((void*)0); VAR_3++)
  if (VAR_3->help != ((void*)0))
   FUNC_0("  %-10s %s\n", VAR_3->name, VAR_3->help);
 FUNC_0("\n");
done:
 return VAR_5;
}
