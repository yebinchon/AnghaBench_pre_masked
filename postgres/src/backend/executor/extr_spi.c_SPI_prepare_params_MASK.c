
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor_options; void* parserSetupArg; int parserSetup; int * argtypes; scalar_t__ nargs; int magic; } ;
typedef TYPE_1__ _SPI_plan ;
typedef int * SPIPlanPtr ;
typedef int ParserSetupHook ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

SPIPlanPtr
FUNC_5(const char *VAR_3,
       ParserSetupHook VAR_4,
       void *VAR_5,
       int VAR_6)
{
 _SPI_plan VAR_7;
 SPIPlanPtr VAR_8;

 if (VAR_3 == ((void*)0))
 {
  VAR_1 = VAR_0;
  return ((void*)0);
 }

 VAR_1 = FUNC_0(1);
 if (VAR_1 < 0)
  return ((void*)0);

 FUNC_4(&VAR_7, 0, sizeof(_SPI_plan));
 VAR_7.magic = VAR_2;
 VAR_7.cursor_options = VAR_6;
 VAR_7.nargs = 0;
 VAR_7.argtypes = ((void*)0);
 VAR_7.parserSetup = VAR_4;
 VAR_7.parserSetupArg = VAR_5;

 FUNC_3(VAR_3, &VAR_7);


 VAR_8 = FUNC_2(&VAR_7);

 FUNC_1(1);

 return VAR_8;
}
