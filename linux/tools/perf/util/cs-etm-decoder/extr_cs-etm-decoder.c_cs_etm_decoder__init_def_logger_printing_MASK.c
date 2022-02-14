
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_decoder_params {int * packet_printer; } ;
struct cs_etm_decoder {int dcd_tree; int * packet_printer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cs_etm_decoder_params *VAR_3,
      struct cs_etm_decoder *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3->packet_printer == ((void*)0))
  return -1;

 VAR_4->packet_printer = VAR_3->packet_printer;





 VAR_5 = FUNC_1(VAR_1, 1);
 if (VAR_5 != 0)
  return -1;


 VAR_5 = FUNC_0(VAR_0, ((void*)0));
 if (VAR_5 != 0)
  return -1;





 VAR_5 = FUNC_2(VAR_4->dcd_tree,
           (void *)VAR_4,
           VAR_2);
 if (VAR_5 != 0)
  VAR_5 = -1;

 return 0;
}
