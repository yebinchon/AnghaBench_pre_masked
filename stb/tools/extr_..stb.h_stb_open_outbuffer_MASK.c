
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char** ptr; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ stbfile ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

stbfile *FUNC_1(unsigned char **VAR_7)
{
   stbfile VAR_8 = { VAR_5, VAR_6,
                 VAR_2, VAR_3,
                 VAR_4, VAR_4, VAR_0, VAR_1 };
   stbfile *VAR_9 = (stbfile *) FUNC_0(sizeof(*VAR_9));
   if (VAR_9) {
      VAR_9->ptr = VAR_7;
      *VAR_9 = VAR_8;
   }
   return VAR_9;
}
