
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* data; } ;
struct snd_dbri {TYPE_1__ mm; struct dbri_streaminfo* stream_info; } ;
struct dbri_streaminfo {int left_gain; int right_gain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct snd_dbri*,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_dbri *VAR_3, int VAR_4)
{
 if (VAR_4) {
  VAR_3->mm.data[0] |= 63;
  VAR_3->mm.data[1] |= 63;
  VAR_3->mm.data[2] &= ~15;
  VAR_3->mm.data[3] &= ~15;
 } else {

  struct dbri_streaminfo *VAR_5 = &VAR_3->stream_info[VAR_1];
  int VAR_6 = VAR_5->left_gain & 0x3f;
  int VAR_7 = VAR_5->right_gain & 0x3f;

  VAR_3->mm.data[0] &= ~0x3f;
  VAR_3->mm.data[1] &= ~0x3f;
  VAR_3->mm.data[0] |= (VAR_0 - VAR_6);
  VAR_3->mm.data[1] |= (VAR_0 - VAR_7);


  VAR_5 = &VAR_3->stream_info[VAR_2];
  VAR_6 = VAR_5->left_gain & 0xf;
  VAR_7 = VAR_5->right_gain & 0xf;
  VAR_3->mm.data[2] |= FUNC_0(VAR_6);
  VAR_3->mm.data[3] |= FUNC_1(VAR_7);
 }

 FUNC_2(VAR_3, 20, *(int *)VAR_3->mm.data);
}
