
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;
typedef int ASN1_STRING ;


 unsigned char* FUNC_0 (int *) ;
 unsigned char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char const*,int,char**) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(PGconn *VAR_0, ASN1_STRING *VAR_1,
              char **VAR_2)
{
 int VAR_3;
 const unsigned char *VAR_4;


 if (VAR_1 == ((void*)0))
 {
  FUNC_5(&VAR_0->errorMessage,
        FUNC_3("SSL certificate's name entry is missing\n"));
  return -1;
 }







 VAR_4 = FUNC_0(VAR_1);

 VAR_3 = FUNC_2(VAR_1);


 return FUNC_4(VAR_0, (const char *) VAR_4, VAR_3, VAR_2);
}
