
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingest {int url; int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct ingest*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int VAR_2 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(void)
{
 char *VAR_3 = FUNC_4("twitch_ingests.json");

 struct ingest VAR_4 = {.name = FUNC_1("Default"),
        .url = FUNC_1("rtmp://live.twitch.tv/app")};

 FUNC_8(&VAR_2);
 FUNC_2(VAR_0, &VAR_4);
 FUNC_9(&VAR_2);

 if (FUNC_6(VAR_3)) {
  char *VAR_5 = FUNC_7(VAR_3);
  bool VAR_6;

  FUNC_8(&VAR_2);
  VAR_6 = FUNC_3(VAR_5, 0);
  FUNC_9(&VAR_2);

  if (VAR_6) {
   FUNC_5(&VAR_1, 1);
  }

  FUNC_0(VAR_5);
 }

 FUNC_0(VAR_3);
}
