
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int dummy; } ;
struct property {struct data val; } ;
struct node {int dummy; } ;
typedef enum markertype { ____Placeholder_markertype } markertype ;


 int FUNC_0 (struct node*,struct property*) ;
 struct property* FUNC_1 (char*,struct data,int *) ;
 struct data FUNC_2 (struct data,int,char*) ;
 struct data FUNC_3 (struct data,void const*,int) ;
 struct data VAR_0 ;
 struct property* FUNC_4 (struct node*,char*) ;

void FUNC_5(struct node *VAR_1,
   char *VAR_2, const void *VAR_3, int VAR_4,
   enum markertype VAR_5)
{
 struct data VAR_6;
 struct property *VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_2);
 if (VAR_7) {
  VAR_6 = FUNC_2(VAR_7->val, VAR_5, VAR_2);
  VAR_6 = FUNC_3(VAR_6, VAR_3, VAR_4);
  VAR_7->val = VAR_6;
 } else {
  VAR_6 = FUNC_2(VAR_0, VAR_5, VAR_2);
  VAR_6 = FUNC_3(VAR_6, VAR_3, VAR_4);
  VAR_7 = FUNC_1(VAR_2, VAR_6, ((void*)0));
  FUNC_0(VAR_1, VAR_7);
 }
}
