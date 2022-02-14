
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_conn_list {int len; int list; int conns; int nid; } ;
struct hda_codec {int conn_list; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hda_conn_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (struct hda_conn_list*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4, int VAR_5,
    const hda_nid_t *VAR_6)
{
 struct hda_conn_list *VAR_7;

 VAR_7 = FUNC_0(FUNC_3(VAR_7, VAR_2, VAR_5), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->len = VAR_5;
 VAR_7->nid = VAR_4;
 FUNC_2(VAR_7->conns, VAR_6, VAR_5 * sizeof(hda_nid_t));
 FUNC_1(&VAR_7->list, &VAR_3->conn_list);
 return 0;
}
