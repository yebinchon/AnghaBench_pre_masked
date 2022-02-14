
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcpos {int dummy; } ;
struct data {int dummy; } ;
struct property {char* name; int srcpos; struct data val; } ;


 int FUNC_0 (struct property*,int ,int) ;
 int FUNC_1 (struct srcpos*) ;
 struct property* FUNC_2 (int) ;

struct property *FUNC_3(char *VAR_0, struct data VAR_1,
    struct srcpos *VAR_2)
{
 struct property *VAR_3 = FUNC_2(sizeof(*VAR_3));

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->name = VAR_0;
 VAR_3->val = VAR_1;
 VAR_3->srcpos = FUNC_1(VAR_2);

 return VAR_3;
}
