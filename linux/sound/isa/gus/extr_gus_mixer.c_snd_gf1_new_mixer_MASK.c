
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {scalar_t__ ess_flag; scalar_t__ ics_flag; struct snd_card* card; } ;
struct snd_card {char* mixername; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,char*) ;
 int FUNC_3 (struct snd_card*,int ) ;
 int FUNC_4 (int *,struct snd_gus_card*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(struct snd_gus_card * VAR_3)
{
 struct snd_card *VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_1(!VAR_3))
  return -VAR_0;
 VAR_4 = VAR_3->card;
 if (FUNC_1(!VAR_4))
  return -VAR_0;

 if (VAR_3->ics_flag)
  FUNC_2(VAR_4, "ICS2101");
 if (VAR_4->mixername[0] == '\0') {
  FUNC_6(VAR_4->mixername, VAR_3->ics_flag ? "GF1,ICS2101" : "GF1");
 } else {
  if (VAR_3->ics_flag)
   FUNC_5(VAR_4->mixername, ",ICS2101");
  FUNC_5(VAR_4->mixername, ",GF1");
 }

 if (!VAR_3->ics_flag) {
  VAR_6 = VAR_3->ess_flag ? 1 : FUNC_0(VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
   if ((VAR_7 = FUNC_3(VAR_4, FUNC_4(&VAR_1[VAR_5], VAR_3))) < 0)
    return VAR_7;
  }
 } else {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
   if ((VAR_7 = FUNC_3(VAR_4, FUNC_4(&VAR_2[VAR_5], VAR_3))) < 0)
    return VAR_7;
  }
 }
 return 0;
}
