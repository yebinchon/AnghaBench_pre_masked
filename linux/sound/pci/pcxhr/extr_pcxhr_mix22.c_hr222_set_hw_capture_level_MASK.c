
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int capture_chips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct pcxhr_mgr *VAR_4,
          int VAR_5, int VAR_6, int VAR_7)
{

 unsigned int VAR_8;
 int VAR_9;

 if (!VAR_4->capture_chips)
  return -VAR_0;

 VAR_8 = ((VAR_7 & 0xff) << 24);
 VAR_8 |= ((VAR_7 & 0xff) << 16);
 VAR_8 |= ((VAR_6 & 0xff) << 8);
 VAR_8 |= (VAR_5 & 0xff);

 FUNC_0(VAR_4, VAR_2);

 for (VAR_9 = 0; VAR_9 < 32; VAR_9++, VAR_8 <<= 1) {
  FUNC_1(VAR_4, VAR_2,
       (VAR_8 & 0x80000000) ? VAR_1 : 0);
 }
 FUNC_0(VAR_4, VAR_3);
 return 0;
}
