
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; scalar_t__ const* slave_dig_outs; } ;
typedef scalar_t__ const hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__ const,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
   int VAR_3, int VAR_4)
{
 const hda_nid_t *VAR_5;

 FUNC_0(&VAR_1->core, VAR_2, VAR_0,
          VAR_3, VAR_4);
 VAR_5 = VAR_1->slave_dig_outs;
 if (!VAR_5)
  return;
 for (; *VAR_5; VAR_5++)
  FUNC_0(&VAR_1->core, *VAR_5,
           VAR_0, VAR_3, VAR_4);
}
