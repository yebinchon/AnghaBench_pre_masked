
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct pcxhr_mgr *VAR_4, unsigned short VAR_5)
{
 unsigned short VAR_6 = 0x8000;

 FUNC_0(VAR_4, VAR_2);

 while (VAR_6) {
  FUNC_1(VAR_4, VAR_1,
       VAR_5 & VAR_6 ? VAR_0 : 0);
  VAR_6 >>= 1;
 }

 FUNC_0(VAR_4, VAR_3);
}
