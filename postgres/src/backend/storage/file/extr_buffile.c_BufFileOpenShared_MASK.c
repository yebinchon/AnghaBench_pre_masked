
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* files; int readOnly; int name; int * fileset; } ;
typedef int Size ;
typedef int SharedFileSet ;
typedef scalar_t__ File ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,char const*) ;
 TYPE_1__* FUNC_6 (int) ;
 scalar_t__* FUNC_7 (int) ;
 int FUNC_8 (char const*) ;
 scalar_t__* FUNC_9 (scalar_t__*,int) ;

BufFile *
FUNC_10(SharedFileSet *VAR_2, const char *VAR_3)
{
 BufFile *VAR_4;
 char VAR_5[VAR_1];
 Size VAR_6 = 16;
 File *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_7(sizeof(File) * VAR_6);





 for (;;)
 {

  if (VAR_8 + 1 > VAR_6)
  {
   VAR_6 *= 2;
   VAR_7 = FUNC_9(VAR_7, sizeof(File) * VAR_6);
  }

  FUNC_2(VAR_5, VAR_3, VAR_8);
  VAR_7[VAR_8] = FUNC_1(VAR_2, VAR_5);
  if (VAR_7[VAR_8] <= 0)
   break;
  ++VAR_8;

  FUNC_0();
 }





 if (VAR_8 == 0)
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_5("could not open temporary file \"%s\" from BufFile \"%s\": %m",
      VAR_5, VAR_3)));

 VAR_4 = FUNC_6(VAR_8);
 VAR_4->files = VAR_7;
 VAR_4->readOnly = 1;
 VAR_4->fileset = VAR_2;
 VAR_4->name = FUNC_8(VAR_3);

 return VAR_4;
}
