
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dsa_port {int dummy; } ;


 int FUNC_0 (struct dsa_port*,int ,int *) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dsa_port *VAR_0, u8 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0));
 if (VAR_2)
  FUNC_1("DSA: failed to set STP state %u (%d)\n", VAR_1, VAR_2);
}
