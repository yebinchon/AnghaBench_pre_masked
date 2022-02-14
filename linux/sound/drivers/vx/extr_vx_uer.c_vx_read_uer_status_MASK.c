
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct vx_core*,int ) ;
 int FUNC_1 (struct vx_core*,int ) ;
 scalar_t__ FUNC_2 (struct vx_core*) ;
 scalar_t__ FUNC_3 (struct vx_core*,int ) ;

__attribute__((used)) static int FUNC_4(struct vx_core *VAR_7, unsigned int *VAR_8)
{
 int VAR_9, VAR_10;


 VAR_10 = 0;


 if (FUNC_2(VAR_7))
     VAR_9 = FUNC_0(VAR_7, VAR_0);
 else
     VAR_9 = FUNC_1(VAR_7, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 & VAR_1) {
  switch (VAR_9 & VAR_3) {
  case 130:
   VAR_10 = 32000;
   break;
  case 129:
   VAR_10 = 44100;
   break;
  case 128:
   VAR_10 = 48000;
   break;
  }
        }
 if (VAR_9 & VAR_2)

  *VAR_8 = FUNC_3(VAR_7, 0) ?
   VAR_6 : VAR_4;
 else
  *VAR_8 = VAR_5;

 return VAR_10;
}
