
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt5514_dsp {int buf_base; int buf_limit; int buf_rp; int buf_size; int copy_work; scalar_t__ get_size; int substream; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct rt5514_dsp *VAR_3)
{
 u8 VAR_4[8];

 if (!VAR_3->substream)
  return;

 VAR_3->get_size = 0;






 FUNC_0(VAR_0, (u8 *)&VAR_4,
  sizeof(VAR_4));
 VAR_3->buf_base = VAR_4[0] | VAR_4[1] << 8 | VAR_4[2] << 16 |
    VAR_4[3] << 24;

 FUNC_0(VAR_1, (u8 *)&VAR_4,
  sizeof(VAR_4));
 VAR_3->buf_limit = VAR_4[0] | VAR_4[1] << 8 | VAR_4[2] << 16 |
    VAR_4[3] << 24;

 FUNC_0(VAR_2, (u8 *)&VAR_4,
  sizeof(VAR_4));
 VAR_3->buf_rp = VAR_4[0] | VAR_4[1] << 8 | VAR_4[2] << 16 |
    VAR_4[3] << 24;

 if (VAR_3->buf_rp % 8)
  VAR_3->buf_rp = (VAR_3->buf_rp / 8) * 8;

 VAR_3->buf_size = VAR_3->buf_limit - VAR_3->buf_base;

 if (VAR_3->buf_base && VAR_3->buf_limit &&
  VAR_3->buf_rp && VAR_3->buf_size)
  FUNC_1(&VAR_3->copy_work, 0);
}
