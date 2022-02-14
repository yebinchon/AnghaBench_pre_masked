
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_source {int persistent; int source; int file; } ;
typedef int obs_data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_0, obs_data_t *VAR_1)
{
 struct image_source *VAR_2 = VAR_0;
 const char *VAR_3 = FUNC_5(VAR_1, "file");
 const bool VAR_4 = FUNC_4(VAR_1, "unload");

 if (VAR_2->file)
  FUNC_0(VAR_2->file);
 VAR_2->file = FUNC_1(VAR_3);
 VAR_2->persistent = !VAR_4;


 if (VAR_2->persistent || FUNC_6(VAR_2->source))
  FUNC_2(VAR_0);
 else
  FUNC_3(VAR_0);
}
