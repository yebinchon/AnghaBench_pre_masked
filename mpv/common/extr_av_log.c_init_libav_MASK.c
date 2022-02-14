
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int * log; } ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct mpv_global* VAR_5 ;
 int * VAR_6 ;
 void* FUNC_3 (int *,int *,char*) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mpv_global *VAR_8)
{
    FUNC_4(&VAR_4);
    if (!VAR_5) {
        VAR_5 = VAR_8;
        VAR_6 = FUNC_3(((void*)0), VAR_8->log, VAR_0);
        VAR_1 = FUNC_3(VAR_6, VAR_6, "audio");
        VAR_2 = FUNC_3(VAR_6, VAR_6, "video");
        VAR_3 = FUNC_3(VAR_6, VAR_6, "demuxer");
        FUNC_0(VAR_7);
    }
    FUNC_5(&VAR_4);

    FUNC_2();




}
