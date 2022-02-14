
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BufFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,long) ;
 scalar_t__ FUNC_1 (int *,void*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,long) ;

__attribute__((used)) static void
FUNC_6(BufFile *VAR_2, long VAR_3, void *VAR_4)
{
 if (FUNC_0(VAR_2, VAR_3) != 0)
  FUNC_2(VAR_1, "could not seek temporary file: %m");
 if (FUNC_1(VAR_2, VAR_4, VAR_0) != VAR_0)
 {




  FUNC_3(VAR_1,
    (FUNC_4(),
     FUNC_5("could not write block %ld of temporary file: %m",
      VAR_3)));
 }
}
