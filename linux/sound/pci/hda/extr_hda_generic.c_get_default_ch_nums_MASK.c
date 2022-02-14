
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int * ctls; } ;
struct hda_codec {int dummy; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1, struct nid_path *VAR_2,
          int VAR_3)
{
 int VAR_4 = 1;
 if (VAR_2) {
  hda_nid_t VAR_5 = FUNC_0(VAR_2->ctls[VAR_3]);
  if (VAR_5 && (FUNC_1(VAR_1, VAR_5) & VAR_0))
   VAR_4 = 3;
 }
 return VAR_4;
}
