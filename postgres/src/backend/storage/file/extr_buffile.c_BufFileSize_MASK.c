
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {int numFiles; int name; int * files; int * fileset; } ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;

int64
FUNC_6(BufFile *VAR_2)
{
 int64 VAR_3;

 FUNC_0(VAR_2->fileset != ((void*)0));


 VAR_3 = FUNC_2(VAR_2->files[VAR_2->numFiles - 1]);
 if (VAR_3 < 0)
  FUNC_3(VAR_0,
    (FUNC_4(),
     FUNC_5("could not determine size of temporary file \"%s\" from BufFile \"%s\": %m",
      FUNC_1(VAR_2->files[VAR_2->numFiles - 1]),
      VAR_2->name)));

 return ((VAR_2->numFiles - 1) * (int64) VAR_1) +
  VAR_3;
}
