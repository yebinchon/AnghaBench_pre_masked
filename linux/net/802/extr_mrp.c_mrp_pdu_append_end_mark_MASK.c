
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrp_applicant {int pdu; } ;
typedef int __be16 ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mrp_applicant *VAR_1)
{
 __be16 *VAR_2;

 if (FUNC_2(VAR_1->pdu) < sizeof(*VAR_2))
  return -1;
 VAR_2 = FUNC_0(VAR_1->pdu, sizeof(*VAR_2));
 FUNC_1(VAR_0, VAR_2);
 return 0;
}
