
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_priv {int chan_num; int fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;



__attribute__((used)) static int FUNC_0(struct fsi_priv *VAR_4, unsigned int VAR_5)
{
 switch (VAR_5 & VAR_3) {
 case 129:
  VAR_4->fmt = VAR_0;
  VAR_4->chan_num = 2;
  break;
 case 128:
  VAR_4->fmt = VAR_1;
  VAR_4->chan_num = 2;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
