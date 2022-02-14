
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct hda_codec {int dummy; } ;


 int FUNC_0 (struct hda_codec*,char const*,int,struct nid_path*) ;
 int FUNC_1 (struct hda_codec*,char const*,int,struct nid_path*) ;
 struct nid_path* FUNC_2 (struct hda_codec*,int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0, int VAR_1,
       const char *VAR_2, int VAR_3)
{
 struct nid_path *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
  return 0;
 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
