
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding; } ;
typedef TYPE_1__ ExtensionControlFile ;


 int FUNC_0 () ;
 char* FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,char*,int,int) ;
 char* FUNC_3 (char const*,int*) ;

__attribute__((used)) static char *
FUNC_4(const ExtensionControlFile *VAR_0,
         const char *VAR_1)
{
 int VAR_2;
 char *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1, &VAR_5);


 if (VAR_0->encoding < 0)
  VAR_2 = FUNC_0();
 else
  VAR_2 = VAR_0->encoding;


 FUNC_2(VAR_2, VAR_3, VAR_5, 0);






 VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_2);

 return VAR_4;
}
