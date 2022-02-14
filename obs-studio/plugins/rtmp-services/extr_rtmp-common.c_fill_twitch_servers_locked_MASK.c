
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twitch_ingest {char* url; int name; } ;
typedef int obs_property_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char*) ;
 struct twitch_ingest FUNC_2 (size_t) ;
 size_t FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(obs_property_t *VAR_0)
{
 size_t VAR_1 = FUNC_3();

 FUNC_1(VAR_0,
         FUNC_0("Server.Auto"), "auto");

 if (VAR_1 <= 1)
  return 0;

 for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct twitch_ingest VAR_3 = FUNC_2(VAR_2);
  FUNC_1(VAR_0, VAR_3.name, VAR_3.url);
 }

 return 1;
}
