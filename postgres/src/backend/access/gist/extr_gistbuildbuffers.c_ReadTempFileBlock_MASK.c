
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BufFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,long) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(BufFile *VAR_2, long VAR_3, void *VAR_4)
{
 if (FUNC_1(VAR_2, VAR_3) != 0)
  FUNC_2(VAR_1, "could not seek temporary file: %m");
 if (FUNC_0(VAR_2, VAR_4, VAR_0) != VAR_0)
  FUNC_2(VAR_1, "could not read temporary file: %m");
}
