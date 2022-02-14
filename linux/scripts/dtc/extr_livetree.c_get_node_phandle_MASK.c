
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {scalar_t__ phandle; } ;
struct data {int dummy; } ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct node*,int ) ;
 int FUNC_1 (char*,struct data,int *) ;
 struct data FUNC_2 (struct data,int ,int *) ;
 struct data FUNC_3 (struct data,int) ;
 struct data VAR_3 ;
 scalar_t__ FUNC_4 (struct node*,int) ;
 int FUNC_5 (struct node*,char*) ;
 int VAR_4 ;

cell_t FUNC_6(struct node *VAR_5, struct node *VAR_6)
{
 static cell_t VAR_7 = 1;
 struct data VAR_8 = VAR_3;

 if ((VAR_6->phandle != 0) && (VAR_6->phandle != -1))
  return VAR_6->phandle;

 while (FUNC_4(VAR_5, VAR_7))
  VAR_7++;

 VAR_6->phandle = VAR_7;

 VAR_8 = FUNC_2(VAR_8, VAR_2, ((void*)0));
 VAR_8 = FUNC_3(VAR_8, VAR_7);

 if (!FUNC_5(VAR_6, "linux,phandle")
     && (VAR_4 & VAR_1))
  FUNC_0(VAR_6, FUNC_1("linux,phandle", VAR_8, ((void*)0)));

 if (!FUNC_5(VAR_6, "phandle")
     && (VAR_4 & VAR_0))
  FUNC_0(VAR_6, FUNC_1("phandle", VAR_8, ((void*)0)));





 return VAR_6->phandle;
}
