
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct marker {int type; char* ref; int * next; int offset; } ;
struct data {int len; } ;
typedef enum markertype { ____Placeholder_markertype } markertype ;


 struct data FUNC_0 (struct data,struct marker*) ;
 struct marker* FUNC_1 (int) ;

struct data FUNC_2(struct data VAR_0, enum markertype VAR_1, char *VAR_2)
{
 struct marker *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 VAR_3->offset = VAR_0.len;
 VAR_3->type = VAR_1;
 VAR_3->ref = VAR_2;
 VAR_3->next = ((void*)0);

 return FUNC_0(VAR_0, VAR_3);
}
