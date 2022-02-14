
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cflayer {int (* ctrlcmd ) (struct cflayer*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cflayer*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cflayer *VAR_1, u8 VAR_2,
         struct cflayer *VAR_3)
{
 if (VAR_3 != ((void*)0) && VAR_3->ctrlcmd != ((void*)0))
  VAR_3->ctrlcmd(VAR_3,
         VAR_0, 0);
}
