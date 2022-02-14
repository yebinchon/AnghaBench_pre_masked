
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int index; int running; int substream; scalar_t__ period_wallclk; int start_wallclk; struct hdac_bus* bus; } ;
struct hdac_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hdac_bus*,int ) ;
 int FUNC_1 (struct hdac_bus*,int ,int,int) ;
 int FUNC_2 (struct hdac_bus*,int ) ;
 int FUNC_3 (struct hdac_stream*,int ,int ,int) ;
 int FUNC_4 (struct hdac_bus*,struct hdac_stream*) ;

void FUNC_5(struct hdac_stream *VAR_7, bool VAR_8)
{
 struct hdac_bus *VAR_9 = VAR_7->bus;
 int VAR_10;

 FUNC_4(VAR_9, VAR_7);

 VAR_7->start_wallclk = FUNC_0(VAR_9, VAR_6);
 if (!VAR_8)
  VAR_7->start_wallclk -= VAR_7->period_wallclk;


 FUNC_1(VAR_9, VAR_0,
         1 << VAR_7->index,
         1 << VAR_7->index);

 if (VAR_7->substream)
  VAR_10 = FUNC_2(VAR_9, VAR_7->substream);
 else
  VAR_10 = 0;
 FUNC_3(VAR_7, VAR_2, VAR_4,
    VAR_10);

 FUNC_3(VAR_7, VAR_1,
    0, VAR_3 | VAR_5);
 VAR_7->running = 1;
}
