
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct hdsp {scalar_t__ io_type; struct snd_kcontrol* spdif_ctl; } ;
struct TYPE_8__ {char* name; int index; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (TYPE_1__*,struct hdsp*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_9, struct hdsp *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;
 struct snd_kcontrol *VAR_13;

 if (VAR_10->io_type == VAR_3) {

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
   VAR_12 = FUNC_1(VAR_9, VAR_13 = FUNC_2(&VAR_8[VAR_11], VAR_10));
   if (VAR_12 < 0)
    return VAR_12;
  }
  return 0;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
  if ((VAR_12 = FUNC_1(VAR_9, VAR_13 = FUNC_2(&VAR_7[VAR_11], VAR_10))) < 0)
   return VAR_12;
  if (VAR_11 == 1)
   VAR_10->spdif_ctl = VAR_13;
 }


 VAR_6.name = "ADAT Lock Status";
 VAR_6.index = 1;
 if ((VAR_12 = FUNC_1 (VAR_9, VAR_13 = FUNC_2(&VAR_6, VAR_10))))
  return VAR_12;
 if (VAR_10->io_type == VAR_0 || VAR_10->io_type == VAR_2) {
  for (VAR_11 = 1; VAR_11 < 3; ++VAR_11) {
   VAR_6.index = VAR_11+1;
   if ((VAR_12 = FUNC_1 (VAR_9, VAR_13 = FUNC_2(&VAR_6, VAR_10))))
    return VAR_12;
  }
 }


 if (VAR_10->io_type == VAR_1) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
   if ((VAR_12 = FUNC_1(VAR_9, VAR_13 = FUNC_2(&VAR_4[VAR_11], VAR_10))) < 0)
    return VAR_12;
  }
 }


 if (VAR_10->io_type == VAR_1 || VAR_10->io_type == VAR_2) {
  if ((VAR_12 = FUNC_1(VAR_9, VAR_13 = FUNC_2(&VAR_5, VAR_10))) < 0)
    return VAR_12;
 }

 return 0;
}
