
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {unsigned int* vnode_lvol; unsigned int* vnode_rvol; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {int * reqs; int mid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_7, hda_nid_t VAR_8)
{
 struct ca0132_spec *VAR_9 = VAR_7->spec;
 unsigned int VAR_10;
 unsigned int VAR_11;

 if (VAR_8 == VAR_3)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_0;

 VAR_11 = VAR_9->vnode_lvol[VAR_8 - VAR_4];

 FUNC_0(VAR_7,
  VAR_5[VAR_10].mid,
  VAR_5[VAR_10].reqs[0],
  VAR_6[VAR_11]);

 VAR_11 = VAR_9->vnode_rvol[VAR_8 - VAR_4];

 FUNC_0(VAR_7,
  VAR_5[VAR_10].mid,
  VAR_5[VAR_10].reqs[1],
  VAR_6[VAR_11]);

 FUNC_0(VAR_7,
  VAR_5[VAR_10].mid,
  VAR_5[VAR_10].reqs[2], VAR_2);
}
