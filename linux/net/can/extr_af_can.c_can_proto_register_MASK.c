
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct can_proto {int protocol; int prot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct can_proto const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(const struct can_proto *VAR_5)
{
 int VAR_6 = VAR_5->protocol;
 int VAR_7 = 0;

 if (VAR_6 < 0 || VAR_6 >= VAR_0) {
  FUNC_3("can: protocol number %d out of range\n", VAR_6);
  return -VAR_2;
 }

 VAR_7 = FUNC_4(VAR_5->prot, 0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(&VAR_4);

 if (FUNC_6(VAR_3[VAR_6])) {
  FUNC_3("can: protocol %d already registered\n", VAR_6);
  VAR_7 = -VAR_1;
 } else {
  FUNC_0(VAR_3[VAR_6], VAR_5);
 }

 FUNC_2(&VAR_4);

 if (VAR_7 < 0)
  FUNC_5(VAR_5->prot);

 return VAR_7;
}
