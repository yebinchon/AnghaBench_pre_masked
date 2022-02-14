
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdac_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hdac_stream*,int) ;
 struct hdac_stream* FUNC_2 (struct hdac_bus*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, bool VAR_4, int VAR_5)
{
 struct hdac_bus *VAR_6 = FUNC_0(VAR_3);
 struct hdac_stream *VAR_7;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6,
  VAR_2, VAR_5);
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_4);

 return 0;
}
