
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct garp_applicant {int pdu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct garp_applicant *VAR_1)
{
 if (FUNC_1(VAR_1->pdu) < sizeof(u8))
  return -1;
 FUNC_0(VAR_1->pdu, VAR_0);
 return 0;
}
