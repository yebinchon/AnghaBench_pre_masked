
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ingest {int url; int name; int member_0; } ;
struct dstr {int array; int member_0; } ;
typedef int json_t ;
struct TYPE_3__ {scalar_t__ num; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (TYPE_1__,struct ingest*) ;
 int FUNC_3 (struct dstr*,char const*) ;
 int FUNC_4 (struct dstr*,char*,char*) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,size_t) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char const*,int ,int *) ;
 int * FUNC_10 (int *,char*) ;
 char* FUNC_11 (int *) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,char const*,int ,int) ;
 int FUNC_14 (char*,char*,int *) ;
 int FUNC_15 (char const*) ;
 int * FUNC_16 (char const*,char*) ;

__attribute__((used)) static bool FUNC_17(const char *VAR_1, bool VAR_2)
{
 json_t *VAR_3;
 json_t *VAR_4;
 bool VAR_5 = 0;
 char *VAR_6;
 char *VAR_7;
 size_t VAR_8;

 VAR_3 = FUNC_9(VAR_1, 0, ((void*)0));
 if (!VAR_3)
  goto finish;

 VAR_4 = FUNC_10(VAR_3, "ingests");
 if (!VAR_4)
  goto finish;

 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8 <= 1 && VAR_0.num)
  goto finish;

 FUNC_5();

 for (size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  json_t *VAR_10 = FUNC_6(VAR_4, VAR_9);
  json_t *VAR_11 = FUNC_10(VAR_10, "name");
  json_t *VAR_12 = FUNC_10(VAR_10, "url_template");
  struct ingest VAR_13 = {0};
  struct dstr VAR_14 = {0};

  if (!VAR_11 || !VAR_12)
   continue;

  const char *VAR_15 = FUNC_11(VAR_12);
  const char *VAR_16 = FUNC_11(VAR_11);



  if (FUNC_16(VAR_16, "deprecated") != ((void*)0) ||
      FUNC_16(VAR_16, "depracated") != ((void*)0))
   continue;

  FUNC_3(&VAR_14, VAR_15);
  FUNC_4(&VAR_14, "/{stream_key}", "");

  VAR_13.name = FUNC_1(VAR_16);
  VAR_13.url = VAR_14.array;

  FUNC_2(VAR_0, &VAR_13);
 }

 if (!VAR_0.num)
  goto finish;

 VAR_5 = 1;

 if (!VAR_2)
  goto finish;

 VAR_6 = FUNC_12("twitch_ingests.json");
 VAR_7 = FUNC_12("twitch_ingests.new.json");

 FUNC_13(VAR_7, VAR_1, FUNC_15(VAR_1), 0);
 FUNC_14(VAR_6, VAR_7, ((void*)0));

 FUNC_0(VAR_6);
 FUNC_0(VAR_7);

finish:
 if (VAR_3)
  FUNC_8(VAR_3);
 return VAR_5;
}
