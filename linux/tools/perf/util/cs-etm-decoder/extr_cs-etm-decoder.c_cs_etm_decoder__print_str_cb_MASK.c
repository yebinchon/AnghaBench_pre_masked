
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_decoder {int (* packet_printer ) (char const*) ;} ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0,
      const char *VAR_1,
      const int VAR_2)
{
 if (VAR_0 && VAR_2)
  ((struct cs_etm_decoder *)VAR_0)->packet_printer(VAR_1);
}
