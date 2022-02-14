
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* delim; char* quote; char* escape; char* null_print; int file_encoding; scalar_t__ encoding_embeds_ascii; scalar_t__ need_transcoding; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(CopyState VAR_0, char *VAR_1,
     bool VAR_2, bool VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 char VAR_6;
 char VAR_7 = VAR_0->delim[0];
 char VAR_8 = VAR_0->quote[0];
 char VAR_9 = VAR_0->escape[0];


 if (!VAR_2 && FUNC_6(VAR_1, VAR_0->null_print) == 0)
  VAR_2 = 1;

 if (VAR_0->need_transcoding)
  VAR_4 = FUNC_5(VAR_1, FUNC_7(VAR_1), VAR_0->file_encoding);
 else
  VAR_4 = VAR_1;




 if (!VAR_2)
 {




  if (VAR_3 && FUNC_6(VAR_4, "\\.") == 0)
   VAR_2 = 1;
  else
  {
   char *VAR_10 = VAR_4;

   while ((VAR_6 = *VAR_10) != '\0')
   {
    if (VAR_6 == VAR_7 || VAR_6 == VAR_8 || VAR_6 == '\n' || VAR_6 == '\r')
    {
     VAR_2 = 1;
     break;
    }
    if (FUNC_3(VAR_6) && VAR_0->encoding_embeds_ascii)
     VAR_10 += FUNC_4(VAR_0->file_encoding, VAR_10);
    else
     VAR_10++;
   }
  }
 }

 if (VAR_2)
 {
  FUNC_0(VAR_0, VAR_8);




  VAR_5 = VAR_4;
  while ((VAR_6 = *VAR_4) != '\0')
  {
   if (VAR_6 == VAR_8 || VAR_6 == VAR_9)
   {
    FUNC_2();
    FUNC_0(VAR_0, VAR_9);
    VAR_5 = VAR_4;
   }
   if (FUNC_3(VAR_6) && VAR_0->encoding_embeds_ascii)
    VAR_4 += FUNC_4(VAR_0->file_encoding, VAR_4);
   else
    VAR_4++;
  }
  FUNC_2();

  FUNC_0(VAR_0, VAR_8);
 }
 else
 {

  FUNC_1(VAR_0, VAR_4);
 }
}
