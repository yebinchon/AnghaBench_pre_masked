
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key_restriction {struct key_type* keytype; int * key; int check; } ;
struct key {int sem; struct key_restriction* restrict_link; scalar_t__ description; int serial; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct key *VAR_1, struct key_type *VAR_2)
{
 struct key_restriction *VAR_3;

 FUNC_1("%x{%s}", VAR_1->serial, VAR_1->description ?: "");
 if (!VAR_2 || !VAR_1->restrict_link ||
     VAR_1->restrict_link->keytype != VAR_2) {
  FUNC_3(" [no restriction gc]");
  return;
 }


 FUNC_0(&VAR_1->sem);

 VAR_3 = VAR_1->restrict_link;

 VAR_3->check = VAR_0;

 FUNC_2(VAR_3->key);
 VAR_3->key = ((void*)0);
 VAR_3->keytype = ((void*)0);

 FUNC_4(&VAR_1->sem);

 FUNC_3(" [restriction gc]");
}
