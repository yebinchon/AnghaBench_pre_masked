
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mode_compression ;
struct TYPE_5__ {int * uncompressedfp; int * compressedfp; } ;
typedef TYPE_1__ cfp ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (char const*,char const*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char const*,int) ;

cfp *
FUNC_6(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 cfp *VAR_4 = FUNC_4(sizeof(cfp));

 if (VAR_3 != 0)
 {
  FUNC_0("not built with zlib support");

 }
 else
 {



  VAR_4->uncompressedfp = FUNC_1(VAR_1, VAR_2);
  if (VAR_4->uncompressedfp == ((void*)0))
  {
   FUNC_2(VAR_4);
   VAR_4 = ((void*)0);
  }
 }

 return VAR_4;
}
