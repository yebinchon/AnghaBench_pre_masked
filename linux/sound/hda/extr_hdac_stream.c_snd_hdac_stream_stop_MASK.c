
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int index; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct hdac_stream*) ;
 int FUNC_2 (int ,struct hdac_stream*) ;

void FUNC_3(struct hdac_stream *VAR_1)
{
 FUNC_2(VAR_1->bus, VAR_1);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1->bus, VAR_0, 1 << VAR_1->index, 0);
}
