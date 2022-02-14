
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_conn_list {int list; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,int,int const*) ;
 int FUNC_1 (struct hda_conn_list*) ;
 int FUNC_2 (int *) ;
 struct hda_conn_list* FUNC_3 (struct hda_codec*,int ) ;

int FUNC_4(struct hda_codec *VAR_0, hda_nid_t VAR_1, int VAR_2,
          const hda_nid_t *VAR_3)
{
 struct hda_conn_list *VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4) {
  FUNC_2(&VAR_4->list);
  FUNC_1(VAR_4);
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
