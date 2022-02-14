
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (struct pcxhr_mgr*,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct pcxhr_mgr *VAR_4,
           int VAR_5, int VAR_6)
{
 unsigned short VAR_7;
 if (VAR_5 > 1 ||
     VAR_6 < 0 ||
     VAR_6 >= FUNC_0(VAR_3))
  return -VAR_2;

 if (VAR_5 == 0)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;


 VAR_7 += VAR_3[VAR_6];

 FUNC_1(VAR_4, VAR_7);
 return 0;
}
