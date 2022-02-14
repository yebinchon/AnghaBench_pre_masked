
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {int req_index; int index; scalar_t__ hdr_pos; scalar_t__ pos; } ;
struct snd_soc_tplg_hdr {int type; int index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_2 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_3 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_4 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_5 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_6 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_7 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;
 int FUNC_8 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;

__attribute__((used)) static int FUNC_9(struct soc_tplg *VAR_1,
 struct snd_soc_tplg_hdr *VAR_2)
{
 VAR_1->pos = VAR_1->hdr_pos + sizeof(struct snd_soc_tplg_hdr);


 if (FUNC_0(VAR_2->index) != VAR_1->req_index &&
  VAR_1->req_index != VAR_0)
  return 0;

 VAR_1->index = FUNC_0(VAR_2->index);

 switch (FUNC_0(VAR_2->type)) {
 case 129:
 case 131:
 case 136:
  return FUNC_4(VAR_1, VAR_2);
 case 133:
  return FUNC_2(VAR_1, VAR_2);
 case 132:
  return FUNC_3(VAR_1, VAR_2);
 case 128:
  return FUNC_7(VAR_1, VAR_2);
 case 135:
  return FUNC_1(VAR_1, VAR_2);
 case 134:
 case 137:

  return FUNC_5(VAR_1, VAR_2);
 case 130:
  return FUNC_6(VAR_1, VAR_2);
 default:

  return FUNC_8(VAR_1, VAR_2);
 }

 return 0;
}
