
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* layer; } ;
struct TYPE_11__ {TYPE_2__ pr; } ;
struct TYPE_12__ {size_t number; TYPE_3__ hdr; } ;
typedef TYPE_4__ wavefront_patch_info ;
struct TYPE_13__ {int * patch_status; int * prog_status; } ;
typedef TYPE_5__ snd_wavefront_t ;
struct TYPE_9__ {size_t patch_number; scalar_t__ mute; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,unsigned char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_5 (snd_wavefront_t *VAR_7, wavefront_patch_info *VAR_8)

{
 unsigned char VAR_9[VAR_5+1];
 int VAR_10;

 FUNC_1 (VAR_3, "downloading program %d\n",
  VAR_8->number);

 if (VAR_8->number >= FUNC_0(VAR_7->prog_status))
  return -VAR_0;

 VAR_7->prog_status[VAR_8->number] = VAR_6;





 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_8->hdr.pr.layer[VAR_10].mute) {
   VAR_7->patch_status[VAR_8->hdr.pr.layer[VAR_10].patch_number] |=
    VAR_6;




  }
 }

 VAR_9[0] = VAR_8->number;
 FUNC_2 ((unsigned char *)&VAR_8->hdr.pr, &VAR_9[1], VAR_5);

 if (FUNC_4 (VAR_7, VAR_2, ((void*)0), VAR_9)) {
  FUNC_3 ("download patch failed\n");
  return -VAR_1;
 }

 return (0);
}
