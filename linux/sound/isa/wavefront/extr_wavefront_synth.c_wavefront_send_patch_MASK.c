
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p; } ;
struct TYPE_8__ {size_t number; TYPE_1__ hdr; } ;
typedef TYPE_2__ wavefront_patch_info ;
struct TYPE_9__ {int * patch_status; } ;
typedef TYPE_3__ snd_wavefront_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned char*,unsigned char*,int ) ;
 unsigned char* FUNC_3 (size_t,unsigned char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_6 (snd_wavefront_t *VAR_6, wavefront_patch_info *VAR_7)

{
 unsigned char VAR_8[VAR_4+2];
 unsigned char *VAR_9;

 FUNC_1 (VAR_3, "downloading patch %d\n",
          VAR_7->number);

 if (VAR_7->number >= FUNC_0(VAR_6->patch_status))
  return -VAR_0;

 VAR_6->patch_status[VAR_7->number] |= VAR_5;

 VAR_9 = FUNC_3 (VAR_7->number, VAR_8, 2);
 FUNC_2 ((unsigned char *)&VAR_7->hdr.p, VAR_9, VAR_4);

 if (FUNC_5 (VAR_6, VAR_2, ((void*)0), VAR_8)) {
  FUNC_4 ("download patch failed\n");
  return -VAR_1;
 }

 return (0);
}
