
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;
typedef int Size ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void const*,int,int,int *) ;

__attribute__((used)) static void
FUNC_2(const void *VAR_1, Size VAR_2, FILE *VAR_3)
{
 if (FUNC_1(&VAR_2, 1, sizeof(VAR_2), VAR_3) != sizeof(VAR_2))
  FUNC_0(VAR_0, "could not write init file");
 if (FUNC_1(VAR_1, 1, VAR_2, VAR_3) != VAR_2)
  FUNC_0(VAR_0, "could not write init file");
}
