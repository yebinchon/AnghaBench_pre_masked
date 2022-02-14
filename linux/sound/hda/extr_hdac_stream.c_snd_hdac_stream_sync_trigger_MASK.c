
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {struct hdac_bus* bus; } ;
struct hdac_bus {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct hdac_bus*,unsigned int) ;
 int FUNC_1 (struct hdac_bus*,unsigned int,unsigned int) ;

void FUNC_2(struct hdac_stream *VAR_1, bool VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct hdac_bus *VAR_5 = VAR_1->bus;
 unsigned int VAR_6;

 if (!VAR_4)
  VAR_4 = VAR_0;
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_2)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;
 FUNC_1(VAR_5, VAR_4, VAR_6);
}
