
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {scalar_t__ kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int *,char const*,int) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static char *FUNC_5(struct dso *VAR_5, int VAR_6, const char *VAR_7)
{
 int VAR_8 = VAR_4 > 0 ? (VAR_2 | VAR_0) : VAR_1;
 char *VAR_9 = ((void*)0);






 if (!FUNC_4(VAR_5->kernel || VAR_6))
     return VAR_9;

 VAR_9 = FUNC_0(((void*)0), VAR_7, VAR_8);
 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_1(VAR_7, VAR_3);
 else if (FUNC_3(VAR_9))




  FUNC_2(VAR_9);

 return VAR_9;
}
