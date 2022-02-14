
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int NumberOfSamples; size_t* SampleNumber; } ;
struct TYPE_9__ {TYPE_1__ ms; } ;
struct TYPE_10__ {size_t number; TYPE_2__ hdr; } ;
typedef TYPE_3__ wavefront_patch_info ;
struct TYPE_11__ {int* sample_status; } ;
typedef TYPE_4__ snd_wavefront_t ;


 int FUNC_0 (int,char*,int,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,unsigned char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_6 (snd_wavefront_t *VAR_9, wavefront_patch_info *VAR_10)
{
 int VAR_11;
 int VAR_12;
 unsigned char *VAR_13;

 VAR_13 = FUNC_2(VAR_6, VAR_2);
 if (! VAR_13)
  return -VAR_1;

 FUNC_3 (VAR_10->number, &VAR_13[0], 2);






 VAR_12 = (1<<(VAR_10->hdr.ms.NumberOfSamples&7));
 VAR_13[2] = (unsigned char) VAR_10->hdr.ms.NumberOfSamples;

 FUNC_0 (VAR_5, "multi %d with %d=%d samples\n",
          VAR_10->number,
          VAR_10->hdr.ms.NumberOfSamples,
          VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  FUNC_0(VAR_5|VAR_4, "sample[%d] = %d\n",
         VAR_11, VAR_10->hdr.ms.SampleNumber[VAR_11]);
  FUNC_3 (VAR_10->hdr.ms.SampleNumber[VAR_11],
       &VAR_13[3+(VAR_11*2)], 2);
 }






 if (FUNC_5 (VAR_9, VAR_3,
      (unsigned char *) (long) ((VAR_12*2)+3),
      VAR_13)) {
  FUNC_4 ("download of multisample failed.\n");
  FUNC_1(VAR_13);
  return -VAR_0;
 }

 VAR_9->sample_status[VAR_10->number] = (VAR_7|VAR_8);

 FUNC_1(VAR_13);
 return (0);
}
