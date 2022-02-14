
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int jackpoll_interval; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{


 int VAR_1;
 int VAR_2 = VAR_0->jackpoll_interval;
 VAR_0->jackpoll_interval = FUNC_0(100);
 VAR_1 = FUNC_1(VAR_0);
 VAR_0->jackpoll_interval = VAR_2;
 return VAR_1;
}
