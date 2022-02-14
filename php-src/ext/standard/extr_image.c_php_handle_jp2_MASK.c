
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfxinfo {int dummy; } ;
typedef int php_stream ;
typedef int box_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*,char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 struct gfxinfo* FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*,int) ;
 scalar_t__ FUNC_5 (int *,unsigned int,int ) ;

__attribute__((used)) static struct gfxinfo *FUNC_6(php_stream *VAR_2)
{
 struct gfxinfo *VAR_3 = ((void*)0);
 unsigned int VAR_4;
 unsigned int VAR_5;
 char VAR_6[] = {(char)0x6a, (char)0x70, (char)0x32, (char)0x63};
 for (;;)
 {
  VAR_4 = FUNC_3(VAR_2);

  if (FUNC_4(VAR_2, (void *)&VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) {

   break;
  }

  if (VAR_4 == 1) {

   return ((void*)0);
  }

  if (!FUNC_0(&VAR_5, VAR_6, 4))
  {

   FUNC_5(VAR_2, 3, VAR_1);

   VAR_3 = FUNC_2(VAR_2);
   break;
  }


  if ((int)VAR_4 <= 0) {
   break;
  }


  if (FUNC_5(VAR_2, VAR_4 - 8, VAR_1)) {
   break;
  }
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_1(((void*)0), VAR_0, "JP2 file has no codestreams at root level");
 }

 return VAR_3;
}
