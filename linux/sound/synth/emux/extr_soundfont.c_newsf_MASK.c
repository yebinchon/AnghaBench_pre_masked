
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soundfont {int type; int name; int * samples; int * zones; struct snd_soundfont* next; int id; } ;
struct snd_sf_list {struct snd_soundfont* fonts; int fonts_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_soundfont*,int,char*) ;
 struct snd_soundfont* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static struct snd_soundfont *
FUNC_3(struct snd_sf_list *VAR_3, int VAR_4, char *VAR_5)
{
 struct snd_soundfont *VAR_6;


 if (VAR_4 & VAR_2) {
  for (VAR_6 = VAR_3->fonts; VAR_6; VAR_6 = VAR_6->next) {
   if (FUNC_0(VAR_6, VAR_4, VAR_5)) {
    return VAR_6;
   }
  }
 }


 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->id = VAR_3->fonts_size;
 VAR_3->fonts_size++;


 VAR_6->next = VAR_3->fonts;
 VAR_3->fonts = VAR_6;

 VAR_6->type = VAR_4;
 VAR_6->zones = ((void*)0);
 VAR_6->samples = ((void*)0);
 if (VAR_5)
  FUNC_2(VAR_6->name, VAR_5, VAR_1);

 return VAR_6;
}
