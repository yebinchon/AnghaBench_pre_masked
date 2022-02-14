
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ffmpeg_muxer {int dummy; } ;
struct dstr {int array; int member_0; } ;
struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 TYPE_1__* FUNC_2 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_3 (int **,char const*,char*,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct dstr*,char*,int ,int ) ;
 int FUNC_6 (struct dstr*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,char const*) ;

__attribute__((used)) static void FUNC_9(struct ffmpeg_muxer *VAR_1, const char *VAR_2)
{
 int VAR_3;

 AVDictionary *VAR_4 = ((void*)0);
 if ((VAR_3 = FUNC_3(&VAR_4, VAR_2, "=", " ", 0))) {
  FUNC_8("Failed to parse muxer settings: %s\n%s", FUNC_4(VAR_3),
       VAR_2);

  FUNC_1(&VAR_4);
  return;
 }

 if (FUNC_0(VAR_4) > 0) {
  struct dstr VAR_5 = {0};

  AVDictionaryEntry *VAR_6 = ((void*)0);
  while ((VAR_6 = FUNC_2(VAR_4, "", VAR_6,
         VAR_0)))
   FUNC_5(&VAR_5, "\n\t%s=%s", VAR_6->key, VAR_6->value);

  FUNC_7("Using muxer settings:%s", VAR_5.array);
  FUNC_6(&VAR_5);
 }

 FUNC_1(&VAR_4);
}
