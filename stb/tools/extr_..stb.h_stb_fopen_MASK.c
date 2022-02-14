
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ errors; void* name; void* temp_name; } ;
typedef TYPE_1__ stb__file_data ;
typedef int name_full ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_0 ;
 int * FUNC_3 (char*,char const*) ;
 int * FUNC_4 (char*,char*,char const*) ;
 scalar_t__ FUNC_5 (char*,int,char*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,TYPE_1__*) ;
 int * FUNC_8 () ;
 int FUNC_9 (char const*,char) ;

FILE * FUNC_10(char *VAR_1, const char *VAR_2)
{
   FILE *VAR_3;
   char VAR_4[4096];
   char VAR_5[sizeof(VAR_4) + 12];


   if (VAR_2[0] != 'w' && !FUNC_9(VAR_2, '+'))
      return FUNC_3(VAR_1, VAR_2);




   VAR_4[0] = '\0';
   if (FUNC_5(VAR_4, sizeof(VAR_4), VAR_1)==0)
      return 0;

   VAR_3 = FUNC_4(VAR_5, VAR_4, VAR_2);
   if (VAR_3 != ((void*)0)) {
      stb__file_data *VAR_6 = (stb__file_data *) FUNC_2(sizeof(*VAR_6));
      if (!VAR_6) { FUNC_0(0); FUNC_1(VAR_3); return ((void*)0); }
      if (VAR_0 == ((void*)0)) VAR_0 = FUNC_8();
      VAR_6->temp_name = FUNC_6(VAR_5);
      VAR_6->name = FUNC_6(VAR_4);
      VAR_6->errors = 0;
      FUNC_7(VAR_0, VAR_3, VAR_6);
      return VAR_3;
   }

   return ((void*)0);
}
