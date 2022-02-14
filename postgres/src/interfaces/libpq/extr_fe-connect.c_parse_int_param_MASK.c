
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char const*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*) ;
 long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_1, int *VAR_2, PGconn *VAR_3,
    const char *VAR_4)
{
 char *VAR_5;
 long VAR_6;

 FUNC_0(VAR_1 != ((void*)0));

 *VAR_2 = 0;


 VAR_0 = 0;
 VAR_6 = FUNC_4(VAR_1, &VAR_5, 10);





 if (VAR_1 == VAR_5 || VAR_0 != 0 || VAR_6 != (int) VAR_6)
  goto error;





 while (*VAR_5 != '\0' && FUNC_2((unsigned char) *VAR_5))
  VAR_5++;

 if (*VAR_5 != '\0')
  goto error;

 *VAR_2 = VAR_6;
 return 1;

error:
 FUNC_1(&VAR_3->errorMessage,
       FUNC_3("invalid integer value \"%s\" for connection option \"%s\"\n"),
       VAR_1, VAR_4);
 return 0;
}
