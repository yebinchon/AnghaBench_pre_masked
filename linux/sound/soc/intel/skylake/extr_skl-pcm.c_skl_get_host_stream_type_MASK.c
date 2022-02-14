
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {scalar_t__ ppcap; } ;
typedef enum hdac_ext_stream_type { ____Placeholder_hdac_ext_stream_type } hdac_ext_stream_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum hdac_ext_stream_type FUNC_0(struct hdac_bus *VAR_2)
{
 if (VAR_2->ppcap)
  return VAR_1;
 else
  return VAR_0;
}
