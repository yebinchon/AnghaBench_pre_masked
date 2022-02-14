
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct node {int dummy; } ;
struct data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct node*,struct node*) ;
 struct node* FUNC_1 (struct property*,struct node*,int *) ;
 struct property* FUNC_2 (char*,struct data,int *) ;
 struct data FUNC_3 (struct data,int ,char*) ;
 struct data FUNC_4 (struct data,char*,scalar_t__) ;
 struct data FUNC_5 (struct data,int,int) ;
 struct data VAR_2 ;
 int FUNC_6 (struct node*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char**,char*,int ) ;

struct node * FUNC_9(struct node *VAR_3, struct node *VAR_4, char *VAR_5)
{
 static unsigned int VAR_6 = 0;
 struct node *VAR_7;
 struct property *VAR_8;
 struct data VAR_9 = VAR_2;
 char *VAR_10;

 if (VAR_5[0] == '/') {
  VAR_9 = FUNC_3(VAR_9, VAR_1, VAR_5);
  VAR_9 = FUNC_4(VAR_9, VAR_5, FUNC_7(VAR_5) + 1);

  VAR_8 = FUNC_2("target-path", VAR_9, ((void*)0));
 } else {
  VAR_9 = FUNC_3(VAR_9, VAR_0, VAR_5);
  VAR_9 = FUNC_5(VAR_9, 0xffffffff, 32);

  VAR_8 = FUNC_2("target", VAR_9, ((void*)0));
 }

 FUNC_8(&VAR_10, "fragment@%u",
   VAR_6++);
 FUNC_6(VAR_4, "__overlay__");
 VAR_7 = FUNC_1(VAR_8, VAR_4, ((void*)0));
 FUNC_6(VAR_7, VAR_10);

 FUNC_0(VAR_3, VAR_7);
 return VAR_3;
}
