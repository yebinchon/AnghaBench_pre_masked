
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int unsol_work; int codec_list; int stream_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hdac_bus *VAR_0)
{
 FUNC_0(!FUNC_2(&VAR_0->stream_list));
 FUNC_0(!FUNC_2(&VAR_0->codec_list));
 FUNC_1(&VAR_0->unsol_work);
}
