
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uncompressedfp; scalar_t__ compressedfp; } ;
typedef TYPE_1__ cfp ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__,int*) ;
 int FUNC_6 (scalar_t__,void*,int) ;
 char const* FUNC_7 (int ) ;

int
FUNC_8(void *VAR_2, int VAR_3, cfp *VAR_4)
{
 int VAR_5;

 if (VAR_3 == 0)
  return 0;
 {
  VAR_5 = FUNC_3(VAR_2, 1, VAR_3, VAR_4->uncompressedfp);
  if (VAR_5 != VAR_3 && !FUNC_2(VAR_4->uncompressedfp))
   FUNC_0(VAR_4->uncompressedfp);
 }
 return VAR_5;
}
