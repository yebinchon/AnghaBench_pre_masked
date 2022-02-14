
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* value; int length; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_8__ {char* krbsrvname; int * gtarg_nam; int errorMessage; } ;
typedef TYPE_2__ PGconn ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_1__*,int ,int **) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(PGconn *VAR_5)
{
 OM_uint32 VAR_6,
    VAR_7;
 int VAR_8;
 gss_buffer_desc VAR_9;
 char *VAR_10;

 if (VAR_5->gtarg_nam != ((void*)0))

  return VAR_4;

 VAR_10 = FUNC_0(VAR_5);
 if (!(VAR_10 && VAR_10[0] != '\0'))
 {
  FUNC_6(&VAR_5->errorMessage,
        FUNC_3("host name must be specified\n"));
  return VAR_3;
 }





 VAR_8 = VAR_2 + FUNC_8(VAR_5->krbsrvname) + 2;
 VAR_9.value = (char *) FUNC_4(VAR_8);
 if (!VAR_9.value)
 {
  FUNC_6(&VAR_5->errorMessage,
        FUNC_3("out of memory\n"));
  return VAR_3;
 }
 FUNC_7(VAR_9.value, VAR_8, "%s@%s",
    VAR_5->krbsrvname, VAR_10);
 VAR_9.length = FUNC_8(VAR_9.value);

 VAR_6 = FUNC_2(&VAR_7, &VAR_9,
          VAR_0, &VAR_5->gtarg_nam);
 FUNC_1(VAR_9.value);

 if (VAR_6 != VAR_1)
 {
  FUNC_5(FUNC_3("GSSAPI name import error"),
      VAR_5,
      VAR_6, VAR_7);
  return VAR_3;
 }
 return VAR_4;
}
