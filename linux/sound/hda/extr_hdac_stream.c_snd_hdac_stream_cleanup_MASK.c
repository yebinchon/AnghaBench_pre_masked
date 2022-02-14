
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {scalar_t__ format_val; scalar_t__ period_bytes; scalar_t__ bufsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdac_stream*,int ,int ) ;

void FUNC_1(struct hdac_stream *VAR_3)
{
 FUNC_0(VAR_3, VAR_0, 0);
 FUNC_0(VAR_3, VAR_1, 0);
 FUNC_0(VAR_3, VAR_2, 0);
 VAR_3->bufsize = 0;
 VAR_3->period_bytes = 0;
 VAR_3->format_val = 0;
}
