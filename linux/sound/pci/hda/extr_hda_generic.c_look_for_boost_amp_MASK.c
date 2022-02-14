
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int * idx; int * path; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int FUNC_0 (int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct hda_codec *VAR_2,
           struct nid_path *VAR_3)
{
 unsigned int VAR_4 = 0;
 hda_nid_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  if (VAR_6 >= VAR_3->depth - 1)
   break;
  VAR_5 = VAR_3->path[VAR_6];
  if (VAR_6 && FUNC_1(VAR_2, VAR_5, VAR_1, 0)) {
   VAR_4 = FUNC_0(VAR_5, 3, 0, VAR_1);
   break;
  } else if (FUNC_1(VAR_2, VAR_5, VAR_0,
        VAR_3->idx[VAR_6])) {
   VAR_4 = FUNC_0(VAR_5, 3, VAR_3->idx[VAR_6],
        VAR_0);
   break;
  }
 }

 return VAR_4;
}
