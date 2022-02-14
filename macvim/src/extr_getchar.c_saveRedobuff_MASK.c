
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_10__ {int * b_next; } ;
struct TYPE_12__ {TYPE_2__ bh_first; } ;
struct TYPE_9__ {int * b_next; } ;
struct TYPE_11__ {TYPE_1__ bh_first; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,long) ;
 int * FUNC_1 (TYPE_3__*,int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 (int *) ;

void
FUNC_3()
{
    char_u *VAR_6;

    if (VAR_3++ == 0)
    {
 VAR_5 = VAR_2;
 VAR_2.bh_first.b_next = ((void*)0);
 VAR_4 = VAR_1;
 VAR_1.bh_first.b_next = ((void*)0);


 VAR_6 = FUNC_1(&VAR_5, VAR_0);
 if (VAR_6 != ((void*)0))
 {
     FUNC_0(&VAR_2, VAR_6, -1L);
     FUNC_2(VAR_6);
 }
    }
}
