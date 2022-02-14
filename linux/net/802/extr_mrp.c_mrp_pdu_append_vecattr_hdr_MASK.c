
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mrp_vecattr_hdr {int firstattrvalue; int lenflags; } ;
struct mrp_applicant {int pdu; } ;
struct TYPE_2__ {int attrvalue; struct mrp_vecattr_hdr* vah; } ;


 struct mrp_vecattr_hdr* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,void const*,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mrp_applicant *VAR_0,
          const void *VAR_1, u8 VAR_2)
{
 struct mrp_vecattr_hdr *VAR_3;

 if (FUNC_4(VAR_0->pdu) < sizeof(*VAR_3) + VAR_2)
  return -1;
 VAR_3 = FUNC_0(VAR_0->pdu, sizeof(*VAR_3) + VAR_2);
 FUNC_3(0, &VAR_3->lenflags);
 FUNC_1(VAR_3->firstattrvalue, VAR_1, VAR_2);
 FUNC_2(VAR_0->pdu)->vah = VAR_3;
 FUNC_1(FUNC_2(VAR_0->pdu)->attrvalue, VAR_1, VAR_2);
 return 0;
}
