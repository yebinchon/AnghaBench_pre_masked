
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * f; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ stbfile ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

stbfile *FUNC_1(FILE *VAR_8)
{
   stbfile VAR_9 = { &VAR_2, VAR_3,
                 VAR_4, VAR_5,
                 VAR_6, VAR_7, VAR_0, VAR_1,
                 0,0,0, };
   stbfile *VAR_10 = (stbfile *) FUNC_0(sizeof(*VAR_10));
   if (VAR_10) {
      *VAR_10 = VAR_9;
      VAR_10->f = VAR_8;
   }
   return VAR_10;
}
