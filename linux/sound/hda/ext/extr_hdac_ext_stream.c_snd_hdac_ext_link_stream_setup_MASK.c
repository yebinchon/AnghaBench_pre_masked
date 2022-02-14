
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_stream {unsigned int stream_tag; } ;
struct hdac_ext_stream {scalar_t__ pplc_addr; struct hdac_stream hstream; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hdac_ext_stream*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

int FUNC_4(struct hdac_ext_stream *VAR_4, int VAR_5)
{
 struct hdac_stream *VAR_6 = &VAR_4->hstream;
 unsigned int VAR_7;


 FUNC_1(VAR_4);

 VAR_7 = FUNC_0(VAR_4->pplc_addr + VAR_2);
 VAR_7 = (VAR_7 & ~VAR_0) |
  (VAR_6->stream_tag << VAR_1);
 FUNC_2(VAR_7, VAR_4->pplc_addr + VAR_2);


 FUNC_3(VAR_5, VAR_4->pplc_addr + VAR_3);

 return 0;
}
