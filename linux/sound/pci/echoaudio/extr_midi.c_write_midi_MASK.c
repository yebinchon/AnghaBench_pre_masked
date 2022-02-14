
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct echoaudio {TYPE_2__* card; TYPE_1__* comm_page; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int* midi_output; scalar_t__ midi_out_free_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_6, u8 *VAR_7, int VAR_8)
{
 if (FUNC_5(VAR_8 <= 0 || VAR_8 >= VAR_5))
  return -VAR_3;

 if (FUNC_6(VAR_6))
  return -VAR_4;


 if (! (FUNC_2(VAR_6, VAR_0) & VAR_1))
  return 0;

 VAR_6->comm_page->midi_output[0] = VAR_8;
 FUNC_3(&VAR_6->comm_page->midi_output[1], VAR_7, VAR_8);
 VAR_6->comm_page->midi_out_free_count = 0;
 FUNC_0(VAR_6);
 FUNC_4(VAR_6, VAR_2);
 FUNC_1(VAR_6->card->dev, "write_midi: %d\n", VAR_8);
 return VAR_8;
}
