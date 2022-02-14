
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(void *VAR_2, size_t VAR_3)
{
 struct ethhdr *VAR_4 = VAR_2;

 if (VAR_3 < sizeof(struct ethhdr)) {
  FUNC_1(VAR_1, "test_payload: packet too "
   "small: %d bytes!\n", VAR_3);
  FUNC_0(1);
 }

 if (VAR_4->h_proto != FUNC_2(VAR_0)) {
  FUNC_1(VAR_1, "test_payload: wrong ethernet "
   "type: 0x%x!\n", FUNC_3(VAR_4->h_proto));
  FUNC_0(1);
 }
}
