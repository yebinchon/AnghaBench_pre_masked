
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nargs; int * parserSetupArg; int * parserSetup; int * argtypes; int cursor_options; int magic; } ;
typedef TYPE_1__ _SPI_plan ;
typedef int ParamListInfo ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int *,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int,int,long) ;
 int FUNC_4 (char const*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

int
FUNC_6(const char *VAR_5,
       int VAR_6, Oid *VAR_7,
       Datum *VAR_8, const char *VAR_9,
       bool VAR_10, long VAR_11)
{
 int VAR_12;
 _SPI_plan VAR_13;
 ParamListInfo VAR_14;

 if (VAR_5 == ((void*)0) || VAR_6 < 0 || VAR_11 < 0)
  return VAR_2;

 if (VAR_6 > 0 && (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)))
  return VAR_3;

 VAR_12 = FUNC_0(1);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_5(&VAR_13, 0, sizeof(_SPI_plan));
 VAR_13.magic = VAR_4;
 VAR_13.cursor_options = VAR_0;
 VAR_13.nargs = VAR_6;
 VAR_13.argtypes = VAR_7;
 VAR_13.parserSetup = ((void*)0);
 VAR_13.parserSetupArg = ((void*)0);

 VAR_14 = FUNC_1(VAR_6, VAR_7,
          VAR_8, VAR_9);

 FUNC_4(VAR_5, &VAR_13);

 VAR_12 = FUNC_3(&VAR_13, VAR_14,
       VAR_1, VAR_1,
       VAR_10, 1, VAR_11);

 FUNC_2(1);
 return VAR_12;
}
