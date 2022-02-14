
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cidr {int dummy; } ;


 int FUNC_0 (struct cidr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 struct cidr* FUNC_3 (int) ;
 int FUNC_4 (struct cidr*,struct cidr*,int) ;
 int VAR_0 ;

__attribute__((used)) static struct cidr * FUNC_5(struct cidr *VAR_1)
{
 struct cidr *VAR_2 = FUNC_3(sizeof(*VAR_2));

 if (!VAR_2)
 {
  FUNC_2(VAR_0, "out of memory\n");
  FUNC_1(255);
 }

 FUNC_4(VAR_2, VAR_1, sizeof(*VAR_2));
 FUNC_0(VAR_2);

 return VAR_2;
}
