
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int depth; scalar_t__* path; } ;
struct TYPE_2__ {scalar_t__ afg; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static hda_nid_t FUNC_5(struct hda_codec *VAR_5,
       struct nid_path *VAR_6,
       bool VAR_7)
{
 hda_nid_t VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_6->depth; VAR_10++) {
  VAR_8 = VAR_6->path[VAR_10];
  if (!(FUNC_0(VAR_5, VAR_8) & VAR_4))
   continue;
  if (VAR_8 == VAR_5->core.afg)
   continue;
  if (!VAR_7 || FUNC_1(VAR_5, VAR_8))
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_1;
  VAR_12 = FUNC_2(VAR_5, VAR_8, 0,
        VAR_2, 0);
  if (VAR_12 != (VAR_11 | (VAR_11 << 4))) {
   FUNC_3(VAR_5, VAR_8, 0,
         VAR_3, VAR_11);
   VAR_9 = VAR_8;
  }
 }
 return VAR_9;
}
