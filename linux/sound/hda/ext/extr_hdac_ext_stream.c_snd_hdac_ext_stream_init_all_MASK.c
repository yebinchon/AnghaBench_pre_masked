
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdac_ext_stream* FUNC_0 (int,int ) ;
 int FUNC_1 (struct hdac_bus*,struct hdac_ext_stream*,int,int,int) ;

int FUNC_2(struct hdac_bus *VAR_2, int VAR_3,
  int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9 = VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct hdac_ext_stream *VAR_10 =
    FUNC_0(sizeof(*VAR_10), VAR_1);
  if (!VAR_10)
   return -VAR_0;
  VAR_8 = ++VAR_6;
  FUNC_1(VAR_2, VAR_10, VAR_9, VAR_5, VAR_8);
  VAR_9++;
 }

 return 0;

}
