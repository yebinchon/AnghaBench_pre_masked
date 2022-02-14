
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_3__ {int dig_out_nid; } ;
struct TYPE_4__ {TYPE_1__ multiout; } ;
struct ad198x_spec {TYPE_2__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 struct ad198x_spec *VAR_3 = VAR_2->spec;
 hda_nid_t VAR_4 = VAR_3->gen.multiout.dig_out_nid;
 int VAR_5;

 if (!VAR_4)
  return 0;
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_5 != 2 && VAR_5 != 3)
  return 0;
 if (!FUNC_0(&VAR_3->gen, ((void*)0), &VAR_1))
  return -VAR_0;
 return 0;
}
