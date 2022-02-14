
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdac_stream*,int ,int,int ) ;
 int FUNC_1 (struct hdac_stream*,int ,int) ;

void FUNC_2(struct hdac_stream *VAR_6)
{
 FUNC_0(VAR_6, VAR_0,
    VAR_2 | VAR_4, 0);
 FUNC_1(VAR_6, VAR_5, VAR_4);
 FUNC_0(VAR_6, VAR_1, VAR_3, 0);
 VAR_6->running = 0;
}
