
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {unsigned int* ctls; } ;
struct hda_codec {int spec; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2, const char *VAR_3, int VAR_4,
         unsigned int VAR_5, struct nid_path *VAR_6)
{
 unsigned int VAR_7;
 if (!VAR_6)
  return 0;
 VAR_7 = VAR_6->ctls[VAR_1];
 if (!VAR_7)
  return 0;
 VAR_7 = FUNC_1(VAR_7, VAR_5);
 return FUNC_0(VAR_2->spec, VAR_0, VAR_3, VAR_4, VAR_7);
}
