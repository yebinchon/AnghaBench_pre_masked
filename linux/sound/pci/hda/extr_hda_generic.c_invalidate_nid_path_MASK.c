
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct nid_path*,int ,int) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, int VAR_1)
{
 struct nid_path *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return;
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
}
