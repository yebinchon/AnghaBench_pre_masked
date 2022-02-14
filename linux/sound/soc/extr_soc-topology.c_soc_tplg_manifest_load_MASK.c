
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ pass; int index; scalar_t__ comp; TYPE_1__* ops; scalar_t__ pos; } ;
struct snd_soc_tplg_manifest {int size; } ;
struct snd_soc_tplg_hdr {int dummy; } ;
struct TYPE_2__ {int (* manifest ) (scalar_t__,int ,struct snd_soc_tplg_manifest*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_tplg_manifest*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct soc_tplg*,struct snd_soc_tplg_manifest*,struct snd_soc_tplg_manifest**) ;
 int FUNC_3 (scalar_t__,int ,struct snd_soc_tplg_manifest*) ;

__attribute__((used)) static int FUNC_4(struct soc_tplg *VAR_1,
      struct snd_soc_tplg_hdr *VAR_2)
{
 struct snd_soc_tplg_manifest *VAR_3, *VAR_4;
 bool VAR_5;
 int VAR_6;

 if (VAR_1->pass != VAR_0)
  return 0;

 VAR_3 = (struct snd_soc_tplg_manifest *)VAR_1->pos;


 if (FUNC_1(VAR_3->size) == sizeof(*VAR_3)) {
  VAR_5 = 1;
  VAR_4 = VAR_3;
 } else {
  VAR_5 = 0;
  VAR_6 = FUNC_2(VAR_1, VAR_3, &VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }


 if (VAR_1->comp && VAR_1->ops && VAR_1->ops->manifest)
  return VAR_1->ops->manifest(VAR_1->comp, VAR_1->index, VAR_4);

 if (!VAR_5)
  FUNC_0(VAR_4);

 return 0;
}
