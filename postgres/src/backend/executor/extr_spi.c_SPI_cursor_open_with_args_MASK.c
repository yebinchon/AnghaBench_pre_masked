
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor_options; int nargs; int * parserSetupArg; int * parserSetup; int * argtypes; int magic; } ;
typedef TYPE_1__ _SPI_plan ;
typedef int Portal ;
typedef int ParamListInfo ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (char const*,TYPE_1__*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int *,int *,char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

Portal
FUNC_7(const char *VAR_3,
        const char *VAR_4,
        int VAR_5, Oid *VAR_6,
        Datum *VAR_7, const char *VAR_8,
        bool VAR_9, int VAR_10)
{
 Portal VAR_11;
 _SPI_plan VAR_12;
 ParamListInfo VAR_13;

 if (VAR_4 == ((void*)0) || VAR_5 < 0)
  FUNC_5(VAR_0, "SPI_cursor_open_with_args called with invalid arguments");

 if (VAR_5 > 0 && (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)))
  FUNC_5(VAR_0, "SPI_cursor_open_with_args called with missing parameters");

 VAR_1 = FUNC_1(1);
 if (VAR_1 < 0)
  FUNC_5(VAR_0, "SPI_cursor_open_with_args called while not connected");

 FUNC_6(&VAR_12, 0, sizeof(_SPI_plan));
 VAR_12.magic = VAR_2;
 VAR_12.cursor_options = VAR_10;
 VAR_12.nargs = VAR_5;
 VAR_12.argtypes = VAR_6;
 VAR_12.parserSetup = ((void*)0);
 VAR_12.parserSetupArg = ((void*)0);


 VAR_13 = FUNC_2(VAR_5, VAR_6,
          VAR_7, VAR_8);

 FUNC_4(VAR_4, &VAR_12);



 VAR_11 = FUNC_0(VAR_3, &VAR_12, VAR_13, VAR_9);


 FUNC_3(1);

 return VAR_11;
}
