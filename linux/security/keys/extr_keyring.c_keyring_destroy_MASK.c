
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct key_restriction {int key; } ;
struct TYPE_3__ {int * next; } ;
struct key {int keys; struct key_restriction* restrict_link; TYPE_1__ name_link; scalar_t__ description; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct key_restriction*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct key *VAR_2)
{
 if (VAR_2->description) {
  FUNC_5(&VAR_1);

  if (VAR_2->name_link.next != ((void*)0) &&
      !FUNC_4(&VAR_2->name_link))
   FUNC_3(&VAR_2->name_link);

  FUNC_6(&VAR_1);
 }

 if (VAR_2->restrict_link) {
  struct key_restriction *VAR_3 = VAR_2->restrict_link;

  FUNC_1(VAR_3->key);
  FUNC_2(VAR_3);
 }

 FUNC_0(&VAR_2->keys, &VAR_0);
}
