
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {int index; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdac_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hdac_bus*,struct hdac_ext_stream*,unsigned int) ;
 int FUNC_2 (struct hdac_bus*,int,int ) ;
 struct hdac_stream* FUNC_3 (struct hdac_bus*,int ,int) ;
 struct hdac_ext_stream* FUNC_4 (struct hdac_stream*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, unsigned int VAR_3,
    int VAR_4, int VAR_5)
{
 struct hdac_bus *VAR_6 = FUNC_0(VAR_2);
 struct hdac_stream *VAR_7 = FUNC_3(VAR_6,
   VAR_1, VAR_4);
 struct hdac_ext_stream *VAR_8;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7);

 FUNC_2(VAR_6, VAR_5, VAR_7->index);


 FUNC_1(VAR_6, VAR_8, VAR_3);

 return 0;
}
